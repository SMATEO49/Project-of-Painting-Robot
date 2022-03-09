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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/Projects/ProjektMateuszSiebiatynski/main.vhd";
extern char *IEEE_P_3620187407;

char *ieee_p_3620187407_sub_674691591_3965413181(char *, char *, char *, char *, unsigned char );


static void work_a_0286164271_1446275585_p_0(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 5088);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(64, ng0);
    t7 = (t0 + 2632U);
    t8 = *((char **)t7);
    t9 = *((unsigned char *)t8);
    t7 = (t0 + 5200);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t9;
    xsi_driver_first_trans_fast(t7);
    goto LAB3;

LAB5:    t2 = (t0 + 992U);
    t6 = xsi_signal_has_event(t2);
    t1 = t6;
    goto LAB7;

}

static void work_a_0286164271_1446275585_p_1(char *t0)
{
    char t8[16];
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    int t11;
    unsigned int t12;
    unsigned char t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    static char *nl0[] = {&&LAB3, &&LAB4, &&LAB5, &&LAB6, &&LAB7};

LAB0:    xsi_set_current_line(73, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 5104);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(75, ng0);
    t4 = (t0 + 3112U);
    t5 = *((char **)t4);
    t4 = (t0 + 8188U);
    t6 = (t0 + 8247);
    t9 = (t8 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 0;
    t10 = (t9 + 4U);
    *((int *)t10) = 19;
    t10 = (t9 + 8U);
    *((int *)t10) = 1;
    t11 = (19 - 0);
    t12 = (t11 * 1);
    t12 = (t12 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t12;
    t13 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t5, t4, t6, t8);
    if (t13 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(78, ng0);
    t1 = (t0 + 5264);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB9:    goto LAB2;

LAB4:    xsi_set_current_line(81, ng0);
    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t1 = (t0 + 8188U);
    t4 = (t0 + 8267);
    t6 = (t8 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 19;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t11 = (19 - 0);
    t12 = (t11 * 1);
    t12 = (t12 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t12;
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t4, t8);
    if (t3 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(84, ng0);
    t1 = (t0 + 5264);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);

LAB12:    goto LAB2;

LAB5:    xsi_set_current_line(87, ng0);
    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t1 = (t0 + 8188U);
    t4 = (t0 + 8287);
    t6 = (t8 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 19;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t11 = (19 - 0);
    t12 = (t11 * 1);
    t12 = (t12 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t12;
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t4, t8);
    if (t3 != 0)
        goto LAB14;

LAB16:    xsi_set_current_line(90, ng0);
    t1 = (t0 + 5264);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB15:    goto LAB2;

LAB6:    xsi_set_current_line(93, ng0);
    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t1 = (t0 + 8188U);
    t4 = (t0 + 8307);
    t6 = (t8 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 19;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t11 = (19 - 0);
    t12 = (t11 * 1);
    t12 = (t12 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t12;
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t4, t8);
    if (t3 != 0)
        goto LAB17;

LAB19:    xsi_set_current_line(96, ng0);
    t1 = (t0 + 5264);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);

LAB18:    goto LAB2;

LAB7:    xsi_set_current_line(99, ng0);
    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t1 = (t0 + 8188U);
    t4 = (t0 + 8327);
    t6 = (t8 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 19;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t11 = (19 - 0);
    t12 = (t11 * 1);
    t12 = (t12 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t12;
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t4, t8);
    if (t3 != 0)
        goto LAB20;

LAB22:    xsi_set_current_line(102, ng0);
    t1 = (t0 + 5264);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);

LAB21:    goto LAB2;

LAB8:    xsi_set_current_line(76, ng0);
    t10 = (t0 + 5264);
    t14 = (t10 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)1;
    xsi_driver_first_trans_fast(t10);
    goto LAB9;

LAB11:    xsi_set_current_line(82, ng0);
    t7 = (t0 + 5264);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    t14 = (t10 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)2;
    xsi_driver_first_trans_fast(t7);
    goto LAB12;

LAB14:    xsi_set_current_line(88, ng0);
    t7 = (t0 + 5264);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    t14 = (t10 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)3;
    xsi_driver_first_trans_fast(t7);
    goto LAB15;

LAB17:    xsi_set_current_line(94, ng0);
    t7 = (t0 + 5264);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    t14 = (t10 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)4;
    xsi_driver_first_trans_fast(t7);
    goto LAB18;

LAB20:    xsi_set_current_line(100, ng0);
    t7 = (t0 + 5264);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    t14 = (t10 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)0;
    xsi_driver_first_trans_fast(t7);
    goto LAB21;

}

static void work_a_0286164271_1446275585_p_2(char *t0)
{
    char t11[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t12;
    char *t13;
    int t14;
    unsigned int t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    static char *nl0[] = {&&LAB19, &&LAB20, &&LAB21, &&LAB22, &&LAB23};

LAB0:    xsi_set_current_line(110, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB5;

LAB6:
LAB3:    xsi_set_current_line(115, ng0);
    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 5392);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(117, ng0);
    t1 = (t0 + 992U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB10;

LAB11:    t3 = (unsigned char)0;

LAB12:    if (t3 != 0)
        goto LAB7;

LAB9:
LAB8:    xsi_set_current_line(126, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB2:    xsi_set_current_line(111, ng0);
    t1 = (t0 + 5328);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(113, ng0);
    t1 = (t0 + 5328);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB7:    xsi_set_current_line(118, ng0);
    t2 = (t0 + 3112U);
    t6 = *((char **)t2);
    t2 = (t0 + 8188U);
    t7 = (t0 + 8347);
    t12 = (t11 + 0U);
    t13 = (t12 + 0U);
    *((int *)t13) = 0;
    t13 = (t12 + 4U);
    *((int *)t13) = 19;
    t13 = (t12 + 8U);
    *((int *)t13) = 1;
    t14 = (19 - 0);
    t15 = (t14 * 1);
    t15 = (t15 + 1);
    t13 = (t12 + 12U);
    *((unsigned int *)t13) = t15;
    t16 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t6, t2, t7, t11);
    if (t16 != 0)
        goto LAB13;

LAB15:    xsi_set_current_line(121, ng0);
    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t1 = (t0 + 8188U);
    t5 = ieee_p_3620187407_sub_674691591_3965413181(IEEE_P_3620187407, t11, t2, t1, (unsigned char)3);
    t6 = (t11 + 12U);
    t15 = *((unsigned int *)t6);
    t23 = (1U * t15);
    t3 = (20U != t23);
    if (t3 == 1)
        goto LAB16;

LAB17:    t7 = (t0 + 5456);
    t8 = (t7 + 56U);
    t12 = *((char **)t8);
    t13 = (t12 + 56U);
    t17 = *((char **)t13);
    memcpy(t17, t5, 20U);
    xsi_driver_first_trans_fast(t7);

LAB14:    goto LAB8;

LAB10:    t2 = (t0 + 1032U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t10 = (t9 == (unsigned char)3);
    t3 = t10;
    goto LAB12;

LAB13:    xsi_set_current_line(119, ng0);
    t13 = (t0 + 8367);
    t18 = (t0 + 5456);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t13, 20U);
    xsi_driver_first_trans_fast(t18);
    goto LAB14;

LAB16:    xsi_size_not_matching(20U, t23, 0);
    goto LAB17;

LAB18:    t1 = (t0 + 5120);
    *((int *)t1) = 1;

LAB1:    return;
LAB19:    xsi_set_current_line(128, ng0);
    t5 = (t0 + 8387);
    t7 = (t0 + 5520);
    t8 = (t7 + 56U);
    t12 = *((char **)t8);
    t13 = (t12 + 56U);
    t17 = *((char **)t13);
    memcpy(t17, t5, 2U);
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(129, ng0);
    t1 = (t0 + 8389);
    t5 = (t0 + 5584);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t12 = *((char **)t8);
    memcpy(t12, t1, 2U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB18;

LAB20:    xsi_set_current_line(131, ng0);
    t1 = (t0 + 8391);
    t5 = (t0 + 5520);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t12 = *((char **)t8);
    memcpy(t12, t1, 2U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(132, ng0);
    t1 = (t0 + 8393);
    t5 = (t0 + 5584);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t12 = *((char **)t8);
    memcpy(t12, t1, 2U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB18;

LAB21:    xsi_set_current_line(134, ng0);
    t1 = (t0 + 8395);
    t5 = (t0 + 5520);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t12 = *((char **)t8);
    memcpy(t12, t1, 2U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(135, ng0);
    t1 = (t0 + 8397);
    t5 = (t0 + 5584);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t12 = *((char **)t8);
    memcpy(t12, t1, 2U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB18;

LAB22:    xsi_set_current_line(137, ng0);
    t1 = (t0 + 8399);
    t5 = (t0 + 5520);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t12 = *((char **)t8);
    memcpy(t12, t1, 2U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(138, ng0);
    t1 = (t0 + 8401);
    t5 = (t0 + 5584);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t12 = *((char **)t8);
    memcpy(t12, t1, 2U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB18;

LAB23:    xsi_set_current_line(140, ng0);
    t1 = (t0 + 8403);
    t5 = (t0 + 5520);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t12 = *((char **)t8);
    memcpy(t12, t1, 2U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(141, ng0);
    t1 = (t0 + 8405);
    t5 = (t0 + 5584);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t12 = *((char **)t8);
    memcpy(t12, t1, 2U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB18;

}


extern void work_a_0286164271_1446275585_init()
{
	static char *pe[] = {(void *)work_a_0286164271_1446275585_p_0,(void *)work_a_0286164271_1446275585_p_1,(void *)work_a_0286164271_1446275585_p_2};
	xsi_register_didat("work_a_0286164271_1446275585", "isim/main_isim_beh.exe.sim/work/a_0286164271_1446275585.didat");
	xsi_register_executes(pe);
}
