
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name apbtoi2c -dir "E:/DSD/avi/adld/apbtoi2c/planAhead_run_1" -part xc6slx9tqg144-3
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "apb_i2c_ic.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {i2c_master.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {i2c_bridge.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {apb_slave.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {apb_i2c_ic.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set_property top apb_i2c_ic $srcset
add_files [list {apb_i2c_ic.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc6slx9tqg144-3
