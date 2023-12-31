`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:41:54 12/06/2022 
// Design Name: 
// Module Name:    i2c_master 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module i2c_master(
	input wire clk,
	input wire rst,
	input wire enable,
	input rw,
	
	input wire DA,
	input wire rep,
	
	input wire [1:0] bytcount,
	input wire [6:0] addr,
	input wire [31:0] Din,
	
	inout i2c_scl,
	inout i2c_sda,
	
	output  [31:0] Dout,
	output  [3:0] istate,
	output  [1:0] iscount
	
    );
	reg scl;
	reg sda;
	reg [3:0] state = 0;
	reg [3:0] nxt_state = 0;
	reg [3:0] count;
	reg en;
	reg [7:0] sav_addr;
	reg [1:0] scount = 0;
	
	reg [7:0] wdata [3:0];
	reg [7:0] rdata [3:0];
	
	assign Dout[7:0]   = rdata[0][7:0];
	assign Dout[15:8]  = rdata[1][7:0];
	assign Dout[23:16] = rdata[2][7:0];
	assign Dout[31:24] = rdata[3][7:0];
	
	assign istate = state;
	assign iscount = scount;
	assign i2c_scl = scl;
	assign i2c_sda = (state == ACK || state == RDATA || state == WWACK || nxt_state == ACK || nxt_state == WWACK)? 1'bz : sda;
	 
	localparam 
		IDLE = 0,
		START = 1,
		ADDR = 2,
		ACK = 3,
		WDATA = 4,
		RDATA = 5,
		WWACK = 6,
		RACK = 7,
		STOP = 8,
		RSTART = 9;
		
		
	always @(posedge clk) begin
		if (en) scl <= ~scl;
		else scl <= 1;
	 end
	 
	 always @(posedge clk or negedge rst) begin
		if (!rst) begin
			state <= IDLE;
		end
		
		else begin 
			state <= nxt_state;
		end
	 end
	 
	 always @(posedge clk or negedge clk) begin
	 
		case (state) 
			IDLE: begin
				sda <= 1;
				en <= 0;
				count <= 1'b0;
				scount <= 2'b0;
				if (enable) nxt_state <= START;
				else nxt_state <= IDLE;
			end
			
			START: begin 
				sda <= 0;
				en <= 1;
				nxt_state <= ADDR;
				sav_addr[7:1] <= addr;
				sav_addr[0] <= rw;
				rdata[0][7:0] <= 8'h00;
				rdata[1][7:0] <= 8'h00;
				rdata[2][7:0] <= 8'h00;
				rdata[3][7:0] <= 8'h00;
				
				wdata[0][7:0] <= Din[7:0];
				wdata[1][7:0] <= Din[15:8];
				wdata[2][7:0] <= Din[23:16];
				wdata[3][7:0] <= Din[31:24];
			end
			
			ADDR: begin
				if (scl == 0 && !clk) begin
					if (count < 8) begin
						sda <= sav_addr[4'h7-count];
						count <= count + 1'b1;
						nxt_state <= ADDR;
					end
					else if (count == 8) begin
						nxt_state <= ACK;
					end
				end
				else nxt_state <= ADDR;
			end
			
			ACK: begin
				if (scl == 1 && !clk) begin
					sda <= i2c_sda;
					if (i2c_sda == 1) nxt_state <= STOP;
					else begin
						if (rw == 0)
							nxt_state <= WDATA;
						else if (rw == 1 && DA == 1)
							nxt_state <= RDATA;
						else if (rw == 0 && DA == 0)
							nxt_state <= WDATA;
						else if (rw == 1 && DA == 0)
							nxt_state <= WDATA;
					end
				end
				else nxt_state <= ACK;
				count <= 1'b0;
			end
			
			WDATA: begin
				if (scl == 0 && !clk) begin
					if (count < 8) begin
						sda <= wdata[scount][4'h7-count];
						count <= count + 1'b1;
						nxt_state <= WDATA;
					end
					else if (count == 8) begin
						nxt_state <= WWACK;
					end
				end
				else nxt_state <= WDATA;
			end
			
			WWACK: begin
				if (scl == 1 && !clk) begin 
					if (i2c_sda == 1) begin
						nxt_state <= WDATA;
						count <= 1'b0;
					end
					else begin
						if (scount != bytcount) begin
							nxt_state <= WDATA;
							scount <= scount + 1'b1;
							count <= 1'b0;
						end
						else if (scount == bytcount && DA == 1) 
							nxt_state <= STOP;
						else if (scount == bytcount && DA == 0 && rep == 1) begin
							nxt_state <= RSTART;
							scount <= 0;
						end
					end
				end
				else nxt_state <= WWACK;
			end
			
			RSTART: begin
				if (scl == 1 && !clk) begin
					sda <= 0;
					nxt_state <= RDATA;
					count <= 8'b0;
				end
				else nxt_state <= RSTART;
			end
			
			RDATA: begin
				if (scl == 1 && !clk) begin
					rdata[scount][4'h7-count] <= i2c_scl;
					count <= count + 1'b1;
					nxt_state <= RDATA;
					if (count == 7) begin
						nxt_state <= RACK;
						rdata[scount][4'h7-count] <= i2c_scl;
					end
				end
				else 
					nxt_state <= RDATA;
			end
			
			RACK: begin 
				if (scl == 0 && !clk) begin
					sda <= 0;
					nxt_state <= RACK;
				end
				else if (scl == 1 && !clk) begin
					if (scount != bytcount) begin
						nxt_state <= RDATA;
						scount <= scount + 1'b1;
						count <= 0;
					end
					else
						nxt_state <= STOP;
				end
				else 
					nxt_state <= RACK;
				
			end
			
//			RDATA: begin
//				if (count < 8) begin
//					if (scl == 1 && !clk) begin
//						rdata[scount][4'h7-count] <= i2c_scl;
//						count <= count + 1'b1;
//						nxt_state <= RDATA;
//					end
//					else nxt_state <= RDATA;
//				end
//				else begin
//					nxt_state <= RACK;
//				end
//			end
//			
//			RACK: begin 
//				sda <= 0;
//				
//				if (scount != bytcount) begin
//					nxt_state <= RDATA;
//					scount <= scount + 1'b1;
//					count <= 8'b0;
//				end
//				else
//					nxt_state <= STOP;
//				
//			end
			
			STOP: begin
				if (scl == 0 && !clk) begin 
					en <= 0;
				   sda <= 0;
				end
				if (scl == 1 && !clk) begin
					sda <= 1;
					nxt_state <= IDLE;
				end
				else nxt_state <= STOP;
			end
			
			default: begin
				nxt_state <= IDLE;
				sda <= 1;
				//rdata <= 8'h00;
				count <= 1'b0;
				en <= 0;
			end
		endcase
	end

	
	
endmodule
