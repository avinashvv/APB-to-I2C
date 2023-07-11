/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000003280618830_1748004310_init();
    work_m_00000000002972297115_0757427028_init();
    work_m_00000000000519715487_1767163677_init();
    work_m_00000000003048439554_1142580946_init();
    work_m_00000000000577421378_3429972568_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000000577421378_3429972568");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
