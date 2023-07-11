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

/* This file is designed for use with ISim build 0xa0883be4 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/user/Desktop/fpga/apbtoi2c_code_5th_Sem/i2c_bridge.v";
static int ng1[] = {1, 0};
static int ng2[] = {3, 0};
static int ng3[] = {2, 0};
static int ng4[] = {0, 0};
static unsigned int ng5[] = {0U, 0U};
static unsigned int ng6[] = {1U, 0U};
static int ng7[] = {7, 0};
static int ng8[] = {4, 0};
static unsigned int ng9[] = {2U, 0U};
static unsigned int ng10[] = {4U, 0U};
static int ng11[] = {5, 0};
static int ng12[] = {6, 0};
static int ng13[] = {8, 0};
static unsigned int ng14[] = {8U, 0U};
static int ng15[] = {9, 0};
static unsigned int ng16[] = {3U, 0U};



static void Cont_55_0(char *t0)
{
    char t3[8];
    char t6[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;

LAB0:    t1 = (t0 + 5952U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 4552);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t7 = (t6 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 0);
    t14 = (t13 & 1);
    *((unsigned int *)t7) = t14;
    memset(t3, 0, 8);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t6);
    t19 = (t18 & t17);
    t20 = (t19 & 1U);
    if (t20 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t15) == 0)
        goto LAB4;

LAB6:    t21 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t21) = 1;

LAB7:    t22 = (t0 + 8992);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memset(t26, 0, 8);
    t27 = 1U;
    t28 = t27;
    t29 = (t3 + 4);
    t30 = *((unsigned int *)t3);
    t27 = (t27 & t30);
    t31 = *((unsigned int *)t29);
    t28 = (t28 & t31);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t33 | t27);
    t34 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t34 | t28);
    xsi_driver_vfirst_trans(t22, 0, 0);
    t35 = (t0 + 8752);
    *((int *)t35) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

}

static void Cont_56_1(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 6200U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1752U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    t8 = (t7 & 1);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    t11 = (t10 & 1);
    *((unsigned int *)t2) = t11;
    t12 = (t0 + 9056);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 1U;
    t18 = t17;
    t19 = (t4 + 4);
    t20 = *((unsigned int *)t4);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 0);
    t25 = (t0 + 8768);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Cont_57_2(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 6448U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1752U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 1);
    t8 = (t7 & 1);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 1);
    t11 = (t10 & 1);
    *((unsigned int *)t2) = t11;
    t12 = (t0 + 9120);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 1U;
    t18 = t17;
    t19 = (t4 + 4);
    t20 = *((unsigned int *)t4);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 0);
    t25 = (t0 + 8784);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Cont_58_3(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 6696U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1752U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 2);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 2);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 3U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 3U);
    t12 = (t0 + 9184);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 3U;
    t18 = t17;
    t19 = (t3 + 4);
    t20 = *((unsigned int *)t3);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 1);
    t25 = (t0 + 8800);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Cont_59_4(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 6944U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 1752U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 4);
    t8 = (t7 & 1);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 4);
    t11 = (t10 & 1);
    *((unsigned int *)t2) = t11;
    t12 = (t0 + 9248);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 1U;
    t18 = t17;
    t19 = (t4 + 4);
    t20 = *((unsigned int *)t4);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 0);
    t25 = (t0 + 8816);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Cont_60_5(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 7192U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1752U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 5);
    t8 = (t7 & 1);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 5);
    t11 = (t10 & 1);
    *((unsigned int *)t2) = t11;
    t12 = (t0 + 9312);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 1U;
    t18 = t17;
    t19 = (t4 + 4);
    t20 = *((unsigned int *)t4);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 0);
    t25 = (t0 + 8832);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Cont_62_6(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 7440U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1912U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 127U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 127U);
    t12 = (t0 + 9376);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 127U;
    t18 = t17;
    t19 = (t3 + 4);
    t20 = *((unsigned int *)t3);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 6);
    t25 = (t0 + 8848);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Cont_63_7(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 7688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 1912U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 7);
    t8 = (t7 & 1);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 7);
    t11 = (t10 & 1);
    *((unsigned int *)t2) = t11;
    t12 = (t0 + 9440);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 1U;
    t18 = t17;
    t19 = (t4 + 4);
    t20 = *((unsigned int *)t4);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 0);
    t25 = (t0 + 8864);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Always_65_8(char *t0)
{
    char t6[8];
    char t14[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    int t13;
    unsigned int t16;
    int t17;
    int t18;
    char *t19;
    unsigned int t20;
    int t21;
    int t22;
    unsigned int t23;
    int t24;
    unsigned int t25;
    unsigned int t26;
    int t27;
    int t28;
    char *t29;
    char *t30;
    int t31;

LAB0:    t1 = (t0 + 7936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 8880);
    *((int *)t2) = 1;
    t3 = (t0 + 7968);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(65, ng0);

LAB5:    xsi_set_current_line(67, ng0);
    t4 = (t0 + 3672U);
    t5 = *((char **)t4);
    t4 = (t0 + 4552);
    t7 = (t0 + 4552);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t6, t9, 2, t10, 32, 1);
    t11 = (t6 + 4);
    t12 = *((unsigned int *)t11);
    t13 = (!(t12));
    if (t13 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 2872U);
    t3 = *((char **)t2);
    t2 = (t0 + 4552);
    t4 = (t0 + 4552);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng2)));
    t9 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t6, t14, t15, ((int*)(t7)), 2, t8, 32, 1, t9, 32, 1);
    t10 = (t6 + 4);
    t12 = *((unsigned int *)t10);
    t13 = (!(t12));
    t11 = (t14 + 4);
    t16 = *((unsigned int *)t11);
    t17 = (!(t16));
    t18 = (t13 && t17);
    t19 = (t15 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB8;

LAB9:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 3032U);
    t3 = *((char **)t2);

LAB10:    t2 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 32);
    if (t13 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng1)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 32);
    if (t13 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng3)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 32);
    if (t13 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng2)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 32);
    if (t13 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng8)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 32);
    if (t13 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng11)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 32);
    if (t13 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng12)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 32);
    if (t13 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng7)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 32);
    if (t13 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng13)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 32);
    if (t13 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng15)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 32);
    if (t13 == 1)
        goto LAB29;

LAB30:
LAB32:
LAB31:    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng5)));
    t4 = (t0 + 4552);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 8, 0LL);

LAB33:    goto LAB2;

LAB6:    xsi_vlogvar_wait_assign_value(t4, t5, 0, *((unsigned int *)t6), 1, 0LL);
    goto LAB7;

LAB8:    t23 = *((unsigned int *)t15);
    t24 = (t23 + 0);
    t25 = *((unsigned int *)t6);
    t26 = *((unsigned int *)t14);
    t27 = (t25 - t26);
    t28 = (t27 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, t24, *((unsigned int *)t14), t28, 0LL);
    goto LAB9;

LAB11:    xsi_set_current_line(70, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t0 + 4552);
    t7 = (t0 + 4552);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t6, t9, 2, t10, 32, 1);
    t11 = (t6 + 4);
    t12 = *((unsigned int *)t11);
    t17 = (!(t12));
    if (t17 == 1)
        goto LAB34;

LAB35:    goto LAB33;

LAB13:    xsi_set_current_line(71, ng0);

LAB36:    xsi_set_current_line(72, ng0);
    t4 = ((char*)((ng6)));
    t5 = (t0 + 4552);
    t7 = (t0 + 4552);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng7)));
    t11 = ((char*)((ng8)));
    xsi_vlog_convert_partindices(t6, t14, t15, ((int*)(t9)), 2, t10, 32, 1, t11, 32, 1);
    t19 = (t6 + 4);
    t12 = *((unsigned int *)t19);
    t17 = (!(t12));
    t29 = (t14 + 4);
    t16 = *((unsigned int *)t29);
    t18 = (!(t16));
    t21 = (t17 && t18);
    t30 = (t15 + 4);
    t20 = *((unsigned int *)t30);
    t22 = (!(t20));
    t24 = (t21 && t22);
    if (t24 == 1)
        goto LAB37;

LAB38:    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 4552);
    t5 = (t0 + 4552);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t6, t8, 2, t9, 32, 1);
    t10 = (t6 + 4);
    t12 = *((unsigned int *)t10);
    t13 = (!(t12));
    if (t13 == 1)
        goto LAB39;

LAB40:    goto LAB33;

LAB15:    xsi_set_current_line(75, ng0);
    t4 = ((char*)((ng9)));
    t5 = (t0 + 4552);
    t7 = (t0 + 4552);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng7)));
    t11 = ((char*)((ng8)));
    xsi_vlog_convert_partindices(t6, t14, t15, ((int*)(t9)), 2, t10, 32, 1, t11, 32, 1);
    t19 = (t6 + 4);
    t12 = *((unsigned int *)t19);
    t17 = (!(t12));
    t29 = (t14 + 4);
    t16 = *((unsigned int *)t29);
    t18 = (!(t16));
    t21 = (t17 && t18);
    t30 = (t15 + 4);
    t20 = *((unsigned int *)t30);
    t22 = (!(t20));
    t24 = (t21 && t22);
    if (t24 == 1)
        goto LAB41;

LAB42:    goto LAB33;

LAB17:    xsi_set_current_line(76, ng0);
    t4 = ((char*)((ng10)));
    t5 = (t0 + 4552);
    t7 = (t0 + 4552);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng7)));
    t11 = ((char*)((ng8)));
    xsi_vlog_convert_partindices(t6, t14, t15, ((int*)(t9)), 2, t10, 32, 1, t11, 32, 1);
    t19 = (t6 + 4);
    t12 = *((unsigned int *)t19);
    t17 = (!(t12));
    t29 = (t14 + 4);
    t16 = *((unsigned int *)t29);
    t18 = (!(t16));
    t21 = (t17 && t18);
    t30 = (t15 + 4);
    t20 = *((unsigned int *)t30);
    t22 = (!(t20));
    t24 = (t21 && t22);
    if (t24 == 1)
        goto LAB43;

LAB44:    goto LAB33;

LAB19:    xsi_set_current_line(77, ng0);
    t4 = ((char*)((ng9)));
    t5 = (t0 + 4552);
    t7 = (t0 + 4552);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng7)));
    t11 = ((char*)((ng8)));
    xsi_vlog_convert_partindices(t6, t14, t15, ((int*)(t9)), 2, t10, 32, 1, t11, 32, 1);
    t19 = (t6 + 4);
    t12 = *((unsigned int *)t19);
    t17 = (!(t12));
    t29 = (t14 + 4);
    t16 = *((unsigned int *)t29);
    t18 = (!(t16));
    t21 = (t17 && t18);
    t30 = (t15 + 4);
    t20 = *((unsigned int *)t30);
    t22 = (!(t20));
    t24 = (t21 && t22);
    if (t24 == 1)
        goto LAB45;

LAB46:    goto LAB33;

LAB21:    xsi_set_current_line(78, ng0);
    t4 = ((char*)((ng9)));
    t5 = (t0 + 4552);
    t7 = (t0 + 4552);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng7)));
    t11 = ((char*)((ng8)));
    xsi_vlog_convert_partindices(t6, t14, t15, ((int*)(t9)), 2, t10, 32, 1, t11, 32, 1);
    t19 = (t6 + 4);
    t12 = *((unsigned int *)t19);
    t17 = (!(t12));
    t29 = (t14 + 4);
    t16 = *((unsigned int *)t29);
    t18 = (!(t16));
    t21 = (t17 && t18);
    t30 = (t15 + 4);
    t20 = *((unsigned int *)t30);
    t22 = (!(t20));
    t24 = (t21 && t22);
    if (t24 == 1)
        goto LAB47;

LAB48:    goto LAB33;

LAB23:    xsi_set_current_line(79, ng0);
    t4 = ((char*)((ng10)));
    t5 = (t0 + 4552);
    t7 = (t0 + 4552);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng7)));
    t11 = ((char*)((ng8)));
    xsi_vlog_convert_partindices(t6, t14, t15, ((int*)(t9)), 2, t10, 32, 1, t11, 32, 1);
    t19 = (t6 + 4);
    t12 = *((unsigned int *)t19);
    t17 = (!(t12));
    t29 = (t14 + 4);
    t16 = *((unsigned int *)t29);
    t18 = (!(t16));
    t21 = (t17 && t18);
    t30 = (t15 + 4);
    t20 = *((unsigned int *)t30);
    t22 = (!(t20));
    t24 = (t21 && t22);
    if (t24 == 1)
        goto LAB49;

LAB50:    goto LAB33;

LAB25:    xsi_set_current_line(80, ng0);
    t4 = ((char*)((ng10)));
    t5 = (t0 + 4552);
    t7 = (t0 + 4552);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng7)));
    t11 = ((char*)((ng8)));
    xsi_vlog_convert_partindices(t6, t14, t15, ((int*)(t9)), 2, t10, 32, 1, t11, 32, 1);
    t19 = (t6 + 4);
    t12 = *((unsigned int *)t19);
    t17 = (!(t12));
    t29 = (t14 + 4);
    t16 = *((unsigned int *)t29);
    t18 = (!(t16));
    t21 = (t17 && t18);
    t30 = (t15 + 4);
    t20 = *((unsigned int *)t30);
    t22 = (!(t20));
    t24 = (t21 && t22);
    if (t24 == 1)
        goto LAB51;

LAB52:    goto LAB33;

LAB27:    xsi_set_current_line(81, ng0);
    t4 = ((char*)((ng14)));
    t5 = (t0 + 4552);
    t7 = (t0 + 4552);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng7)));
    t11 = ((char*)((ng8)));
    xsi_vlog_convert_partindices(t6, t14, t15, ((int*)(t9)), 2, t10, 32, 1, t11, 32, 1);
    t19 = (t6 + 4);
    t12 = *((unsigned int *)t19);
    t17 = (!(t12));
    t29 = (t14 + 4);
    t16 = *((unsigned int *)t29);
    t18 = (!(t16));
    t21 = (t17 && t18);
    t30 = (t15 + 4);
    t20 = *((unsigned int *)t30);
    t22 = (!(t20));
    t24 = (t21 && t22);
    if (t24 == 1)
        goto LAB53;

LAB54:    goto LAB33;

LAB29:    xsi_set_current_line(82, ng0);
    t4 = ((char*)((ng6)));
    t5 = (t0 + 4552);
    t7 = (t0 + 4552);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng7)));
    t11 = ((char*)((ng8)));
    xsi_vlog_convert_partindices(t6, t14, t15, ((int*)(t9)), 2, t10, 32, 1, t11, 32, 1);
    t19 = (t6 + 4);
    t12 = *((unsigned int *)t19);
    t17 = (!(t12));
    t29 = (t14 + 4);
    t16 = *((unsigned int *)t29);
    t18 = (!(t16));
    t21 = (t17 && t18);
    t30 = (t15 + 4);
    t20 = *((unsigned int *)t30);
    t22 = (!(t20));
    t24 = (t21 && t22);
    if (t24 == 1)
        goto LAB55;

LAB56:    goto LAB33;

LAB34:    xsi_vlogvar_wait_assign_value(t5, t4, 0, *((unsigned int *)t6), 1, 0LL);
    goto LAB35;

LAB37:    t23 = *((unsigned int *)t15);
    t27 = (t23 + 0);
    t25 = *((unsigned int *)t6);
    t26 = *((unsigned int *)t14);
    t28 = (t25 - t26);
    t31 = (t28 + 1);
    xsi_vlogvar_wait_assign_value(t5, t4, t27, *((unsigned int *)t14), t31, 0LL);
    goto LAB38;

LAB39:    xsi_vlogvar_wait_assign_value(t4, t2, 0, *((unsigned int *)t6), 1, 0LL);
    goto LAB40;

LAB41:    t23 = *((unsigned int *)t15);
    t27 = (t23 + 0);
    t25 = *((unsigned int *)t6);
    t26 = *((unsigned int *)t14);
    t28 = (t25 - t26);
    t31 = (t28 + 1);
    xsi_vlogvar_wait_assign_value(t5, t4, t27, *((unsigned int *)t14), t31, 0LL);
    goto LAB42;

LAB43:    t23 = *((unsigned int *)t15);
    t27 = (t23 + 0);
    t25 = *((unsigned int *)t6);
    t26 = *((unsigned int *)t14);
    t28 = (t25 - t26);
    t31 = (t28 + 1);
    xsi_vlogvar_wait_assign_value(t5, t4, t27, *((unsigned int *)t14), t31, 0LL);
    goto LAB44;

LAB45:    t23 = *((unsigned int *)t15);
    t27 = (t23 + 0);
    t25 = *((unsigned int *)t6);
    t26 = *((unsigned int *)t14);
    t28 = (t25 - t26);
    t31 = (t28 + 1);
    xsi_vlogvar_wait_assign_value(t5, t4, t27, *((unsigned int *)t14), t31, 0LL);
    goto LAB46;

LAB47:    t23 = *((unsigned int *)t15);
    t27 = (t23 + 0);
    t25 = *((unsigned int *)t6);
    t26 = *((unsigned int *)t14);
    t28 = (t25 - t26);
    t31 = (t28 + 1);
    xsi_vlogvar_wait_assign_value(t5, t4, t27, *((unsigned int *)t14), t31, 0LL);
    goto LAB48;

LAB49:    t23 = *((unsigned int *)t15);
    t27 = (t23 + 0);
    t25 = *((unsigned int *)t6);
    t26 = *((unsigned int *)t14);
    t28 = (t25 - t26);
    t31 = (t28 + 1);
    xsi_vlogvar_wait_assign_value(t5, t4, t27, *((unsigned int *)t14), t31, 0LL);
    goto LAB50;

LAB51:    t23 = *((unsigned int *)t15);
    t27 = (t23 + 0);
    t25 = *((unsigned int *)t6);
    t26 = *((unsigned int *)t14);
    t28 = (t25 - t26);
    t31 = (t28 + 1);
    xsi_vlogvar_wait_assign_value(t5, t4, t27, *((unsigned int *)t14), t31, 0LL);
    goto LAB52;

LAB53:    t23 = *((unsigned int *)t15);
    t27 = (t23 + 0);
    t25 = *((unsigned int *)t6);
    t26 = *((unsigned int *)t14);
    t28 = (t25 - t26);
    t31 = (t28 + 1);
    xsi_vlogvar_wait_assign_value(t5, t4, t27, *((unsigned int *)t14), t31, 0LL);
    goto LAB54;

LAB55:    t23 = *((unsigned int *)t15);
    t27 = (t23 + 0);
    t25 = *((unsigned int *)t6);
    t26 = *((unsigned int *)t14);
    t28 = (t25 - t26);
    t31 = (t28 + 1);
    xsi_vlogvar_wait_assign_value(t5, t4, t27, *((unsigned int *)t14), t31, 0LL);
    goto LAB56;

}

static void Always_88_9(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    int t15;
    char *t16;
    char *t17;

LAB0:    t1 = (t0 + 8184U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 8896);
    *((int *)t2) = 1;
    t3 = (t0 + 8216);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(88, ng0);

LAB5:    xsi_set_current_line(89, ng0);
    t5 = (t0 + 1752U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 6);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 6);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 3U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 3U);

LAB6:    t14 = ((char*)((ng5)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 2, t14, 2);
    if (t15 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng6)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t15 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng9)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t15 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng16)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t15 == 1)
        goto LAB13;

LAB14:
LAB16:
LAB15:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 472);
    t3 = *((char **)t2);
    t2 = (t0 + 5032);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 11);

LAB17:    goto LAB2;

LAB7:    xsi_set_current_line(90, ng0);
    t16 = (t0 + 472);
    t17 = *((char **)t16);
    t16 = (t0 + 5032);
    xsi_vlogvar_assign_value(t16, t17, 0, 0, 11);
    goto LAB17;

LAB9:    xsi_set_current_line(91, ng0);
    t3 = (t0 + 608);
    t5 = *((char **)t3);
    t3 = (t0 + 5032);
    xsi_vlogvar_assign_value(t3, t5, 0, 0, 11);
    goto LAB17;

LAB11:    xsi_set_current_line(92, ng0);
    t3 = (t0 + 744);
    t5 = *((char **)t3);
    t3 = (t0 + 5032);
    xsi_vlogvar_assign_value(t3, t5, 0, 0, 11);
    goto LAB17;

LAB13:    xsi_set_current_line(93, ng0);
    t3 = (t0 + 880);
    t5 = *((char **)t3);
    t3 = (t0 + 5032);
    xsi_vlogvar_assign_value(t3, t5, 0, 0, 11);
    goto LAB17;

}

static void Always_98_10(char *t0)
{
    char t10[8];
    char t24[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;

LAB0:    t1 = (t0 + 8432U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 8912);
    *((int *)t2) = 1;
    t3 = (t0 + 8464);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(98, ng0);

LAB5:    xsi_set_current_line(99, ng0);
    t4 = (t0 + 4872);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 5032);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t10, 0, 8);
    t11 = (t6 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB7;

LAB6:    t12 = (t9 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB7;

LAB10:    if (*((unsigned int *)t6) < *((unsigned int *)t9))
        goto LAB8;

LAB9:    t14 = (t10 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t10);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(102, ng0);

LAB15:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 4712);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t5 = (t4 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (~(t15));
    t17 = *((unsigned int *)t4);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB19;

LAB17:    if (*((unsigned int *)t5) == 0)
        goto LAB16;

LAB18:    t6 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t6) = 1;

LAB19:    t7 = (t10 + 4);
    t8 = (t4 + 4);
    t26 = *((unsigned int *)t4);
    t27 = (~(t26));
    *((unsigned int *)t10) = t27;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t8) != 0)
        goto LAB21;

LAB20:    t32 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t32 & 1U);
    t33 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t33 & 1U);
    t9 = (t0 + 4712);
    xsi_vlogvar_assign_value(t9, t10, 0, 0, 1);
    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4872);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);

LAB13:    goto LAB2;

LAB7:    t13 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB9;

LAB8:    *((unsigned int *)t10) = 1;
    goto LAB9;

LAB11:    xsi_set_current_line(99, ng0);

LAB14:    xsi_set_current_line(100, ng0);
    t20 = (t0 + 4872);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = ((char*)((ng6)));
    memset(t24, 0, 8);
    xsi_vlog_unsigned_add(t24, 8, t22, 8, t23, 8);
    t25 = (t0 + 4872);
    xsi_vlogvar_assign_value(t25, t24, 0, 0, 8);
    goto LAB13;

LAB16:    *((unsigned int *)t10) = 1;
    goto LAB19;

LAB21:    t28 = *((unsigned int *)t10);
    t29 = *((unsigned int *)t8);
    *((unsigned int *)t10) = (t28 | t29);
    t30 = *((unsigned int *)t7);
    t31 = *((unsigned int *)t8);
    *((unsigned int *)t7) = (t30 | t31);
    goto LAB20;

}


extern void work_m_00000000000519715487_1767163677_init()
{
	static char *pe[] = {(void *)Cont_55_0,(void *)Cont_56_1,(void *)Cont_57_2,(void *)Cont_58_3,(void *)Cont_59_4,(void *)Cont_60_5,(void *)Cont_62_6,(void *)Cont_63_7,(void *)Always_65_8,(void *)Always_88_9,(void *)Always_98_10};
	xsi_register_didat("work_m_00000000000519715487_1767163677", "isim/apb_i2c_tb_isim_beh.exe.sim/work/m_00000000000519715487_1767163677.didat");
	xsi_register_executes(pe);
}
