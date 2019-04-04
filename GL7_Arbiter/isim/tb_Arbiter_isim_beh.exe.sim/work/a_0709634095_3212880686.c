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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/ansh/Desktop/Academics/Semester 4/CS 254/CS226_Gl7/GL7_Arbiter/Arbiter.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_374109322130769762_503743352(char *, unsigned char );


static void work_a_0709634095_3212880686_p_0(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 11560);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(114, ng0);
    t4 = (t0 + 3272U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t4 = (t0 + 11832);
    t10 = (t4 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t9;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(115, ng0);
    t2 = (t0 + 3432U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 11896);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t1;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(116, ng0);
    t2 = (t0 + 3592U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 11960);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t1;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(117, ng0);
    t2 = (t0 + 3752U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 12024);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t1;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(119, ng0);
    t2 = (t0 + 3272U);
    t4 = *((char **)t2);
    t3 = *((unsigned char *)t4);
    t6 = (t3 == (unsigned char)1);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = (t0 + 3272U);
    t5 = *((char **)t2);
    t7 = *((unsigned char *)t5);
    t9 = (t7 == (unsigned char)2);
    t1 = t9;

LAB13:    if (t1 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(122, ng0);
    t2 = (t0 + 12088);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);

LAB9:    xsi_set_current_line(125, ng0);
    t2 = (t0 + 3432U);
    t4 = *((char **)t2);
    t3 = *((unsigned char *)t4);
    t6 = (t3 == (unsigned char)1);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = (t0 + 3432U);
    t5 = *((char **)t2);
    t7 = *((unsigned char *)t5);
    t9 = (t7 == (unsigned char)2);
    t1 = t9;

LAB19:    if (t1 != 0)
        goto LAB14;

LAB16:    xsi_set_current_line(128, ng0);
    t2 = (t0 + 12152);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);

LAB15:    xsi_set_current_line(131, ng0);
    t2 = (t0 + 3592U);
    t4 = *((char **)t2);
    t3 = *((unsigned char *)t4);
    t6 = (t3 == (unsigned char)1);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = (t0 + 3592U);
    t5 = *((char **)t2);
    t7 = *((unsigned char *)t5);
    t9 = (t7 == (unsigned char)2);
    t1 = t9;

LAB25:    if (t1 != 0)
        goto LAB20;

LAB22:    xsi_set_current_line(134, ng0);
    t2 = (t0 + 12216);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);

LAB21:    xsi_set_current_line(137, ng0);
    t2 = (t0 + 3752U);
    t4 = *((char **)t2);
    t3 = *((unsigned char *)t4);
    t6 = (t3 == (unsigned char)1);
    if (t6 == 1)
        goto LAB29;

LAB30:    t2 = (t0 + 3752U);
    t5 = *((char **)t2);
    t7 = *((unsigned char *)t5);
    t9 = (t7 == (unsigned char)2);
    t1 = t9;

LAB31:    if (t1 != 0)
        goto LAB26;

LAB28:    xsi_set_current_line(140, ng0);
    t2 = (t0 + 12280);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);

LAB27:    goto LAB3;

LAB5:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(120, ng0);
    t2 = (t0 + 12088);
    t8 = (t2 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB11:    t1 = (unsigned char)1;
    goto LAB13;

LAB14:    xsi_set_current_line(126, ng0);
    t2 = (t0 + 12152);
    t8 = (t2 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB15;

LAB17:    t1 = (unsigned char)1;
    goto LAB19;

LAB20:    xsi_set_current_line(132, ng0);
    t2 = (t0 + 12216);
    t8 = (t2 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB21;

LAB23:    t1 = (unsigned char)1;
    goto LAB25;

LAB26:    xsi_set_current_line(138, ng0);
    t2 = (t0 + 12280);
    t8 = (t2 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB27;

LAB29:    t1 = (unsigned char)1;
    goto LAB31;

}

static void work_a_0709634095_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    static char *nl0[] = {&&LAB3, &&LAB4, &&LAB5};

LAB0:    xsi_set_current_line(148, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 11576);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(150, ng0);
    t4 = (t0 + 1192U);
    t5 = *((char **)t4);
    t6 = (4 - 4);
    t7 = (t6 * -1);
    t8 = (1U * t7);
    t9 = (0 + t8);
    t4 = (t5 + t9);
    t10 = *((unsigned char *)t4);
    t11 = (t10 == (unsigned char)3);
    if (t11 != 0)
        goto LAB6;

LAB8:    xsi_set_current_line(153, ng0);
    t1 = (t0 + 12344);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t12 = *((char **)t5);
    *((unsigned char *)t12) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB7:    goto LAB2;

LAB4:    xsi_set_current_line(156, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t6 = (4 - 4);
    t7 = (t6 * -1);
    t8 = (1U * t7);
    t9 = (0 + t8);
    t1 = (t2 + t9);
    t3 = *((unsigned char *)t1);
    t10 = (t3 == (unsigned char)2);
    if (t10 != 0)
        goto LAB9;

LAB11:    xsi_set_current_line(159, ng0);
    t1 = (t0 + 12344);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t12 = *((char **)t5);
    *((unsigned char *)t12) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);

LAB10:    goto LAB2;

LAB5:    xsi_set_current_line(162, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t6 = (4 - 4);
    t7 = (t6 * -1);
    t8 = (1U * t7);
    t9 = (0 + t8);
    t1 = (t2 + t9);
    t3 = *((unsigned char *)t1);
    t10 = (t3 == (unsigned char)3);
    if (t10 != 0)
        goto LAB12;

LAB14:    xsi_set_current_line(165, ng0);
    t1 = (t0 + 12344);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t12 = *((char **)t5);
    *((unsigned char *)t12) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB13:    goto LAB2;

LAB6:    xsi_set_current_line(151, ng0);
    t12 = (t0 + 12344);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)1;
    xsi_driver_first_trans_fast(t12);
    goto LAB7;

LAB9:    xsi_set_current_line(157, ng0);
    t4 = (t0 + 12344);
    t5 = (t4 + 56U);
    t12 = *((char **)t5);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    goto LAB10;

LAB12:    xsi_set_current_line(163, ng0);
    t4 = (t0 + 12344);
    t5 = (t4 + 56U);
    t12 = *((char **)t5);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)1;
    xsi_driver_first_trans_fast(t4);
    goto LAB13;

}

static void work_a_0709634095_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    static char *nl0[] = {&&LAB3, &&LAB4, &&LAB5};

LAB0:    xsi_set_current_line(172, ng0);
    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 11592);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(174, ng0);
    t4 = (t0 + 1352U);
    t5 = *((char **)t4);
    t6 = (4 - 4);
    t7 = (t6 * -1);
    t8 = (1U * t7);
    t9 = (0 + t8);
    t4 = (t5 + t9);
    t10 = *((unsigned char *)t4);
    t11 = (t10 == (unsigned char)3);
    if (t11 != 0)
        goto LAB6;

LAB8:    xsi_set_current_line(177, ng0);
    t1 = (t0 + 12408);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t12 = *((char **)t5);
    *((unsigned char *)t12) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB7:    goto LAB2;

LAB4:    xsi_set_current_line(180, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t6 = (4 - 4);
    t7 = (t6 * -1);
    t8 = (1U * t7);
    t9 = (0 + t8);
    t1 = (t2 + t9);
    t3 = *((unsigned char *)t1);
    t10 = (t3 == (unsigned char)2);
    if (t10 != 0)
        goto LAB9;

LAB11:    xsi_set_current_line(183, ng0);
    t1 = (t0 + 12408);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t12 = *((char **)t5);
    *((unsigned char *)t12) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);

LAB10:    goto LAB2;

LAB5:    xsi_set_current_line(186, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t6 = (4 - 4);
    t7 = (t6 * -1);
    t8 = (1U * t7);
    t9 = (0 + t8);
    t1 = (t2 + t9);
    t3 = *((unsigned char *)t1);
    t10 = (t3 == (unsigned char)3);
    if (t10 != 0)
        goto LAB12;

LAB14:    xsi_set_current_line(189, ng0);
    t1 = (t0 + 12408);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t12 = *((char **)t5);
    *((unsigned char *)t12) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB13:    goto LAB2;

LAB6:    xsi_set_current_line(175, ng0);
    t12 = (t0 + 12408);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)1;
    xsi_driver_first_trans_fast(t12);
    goto LAB7;

LAB9:    xsi_set_current_line(181, ng0);
    t4 = (t0 + 12408);
    t5 = (t4 + 56U);
    t12 = *((char **)t5);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    goto LAB10;

LAB12:    xsi_set_current_line(187, ng0);
    t4 = (t0 + 12408);
    t5 = (t4 + 56U);
    t12 = *((char **)t5);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)1;
    xsi_driver_first_trans_fast(t4);
    goto LAB13;

}

static void work_a_0709634095_3212880686_p_3(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    static char *nl0[] = {&&LAB3, &&LAB4, &&LAB5};

LAB0:    xsi_set_current_line(196, ng0);
    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 11608);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(198, ng0);
    t4 = (t0 + 1512U);
    t5 = *((char **)t4);
    t6 = (4 - 4);
    t7 = (t6 * -1);
    t8 = (1U * t7);
    t9 = (0 + t8);
    t4 = (t5 + t9);
    t10 = *((unsigned char *)t4);
    t11 = (t10 == (unsigned char)3);
    if (t11 != 0)
        goto LAB6;

LAB8:    xsi_set_current_line(201, ng0);
    t1 = (t0 + 12472);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t12 = *((char **)t5);
    *((unsigned char *)t12) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB7:    goto LAB2;

LAB4:    xsi_set_current_line(204, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t6 = (4 - 4);
    t7 = (t6 * -1);
    t8 = (1U * t7);
    t9 = (0 + t8);
    t1 = (t2 + t9);
    t3 = *((unsigned char *)t1);
    t10 = (t3 == (unsigned char)2);
    if (t10 != 0)
        goto LAB9;

LAB11:    xsi_set_current_line(207, ng0);
    t1 = (t0 + 12472);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t12 = *((char **)t5);
    *((unsigned char *)t12) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);

LAB10:    goto LAB2;

LAB5:    xsi_set_current_line(210, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t6 = (4 - 4);
    t7 = (t6 * -1);
    t8 = (1U * t7);
    t9 = (0 + t8);
    t1 = (t2 + t9);
    t3 = *((unsigned char *)t1);
    t10 = (t3 == (unsigned char)3);
    if (t10 != 0)
        goto LAB12;

LAB14:    xsi_set_current_line(213, ng0);
    t1 = (t0 + 12472);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t12 = *((char **)t5);
    *((unsigned char *)t12) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB13:    goto LAB2;

LAB6:    xsi_set_current_line(199, ng0);
    t12 = (t0 + 12472);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)1;
    xsi_driver_first_trans_fast(t12);
    goto LAB7;

LAB9:    xsi_set_current_line(205, ng0);
    t4 = (t0 + 12472);
    t5 = (t4 + 56U);
    t12 = *((char **)t5);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    goto LAB10;

LAB12:    xsi_set_current_line(211, ng0);
    t4 = (t0 + 12472);
    t5 = (t4 + 56U);
    t12 = *((char **)t5);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)1;
    xsi_driver_first_trans_fast(t4);
    goto LAB13;

}

static void work_a_0709634095_3212880686_p_4(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    static char *nl0[] = {&&LAB3, &&LAB4, &&LAB5};

LAB0:    xsi_set_current_line(220, ng0);
    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 11624);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(222, ng0);
    t4 = (t0 + 1672U);
    t5 = *((char **)t4);
    t6 = (4 - 4);
    t7 = (t6 * -1);
    t8 = (1U * t7);
    t9 = (0 + t8);
    t4 = (t5 + t9);
    t10 = *((unsigned char *)t4);
    t11 = (t10 == (unsigned char)3);
    if (t11 != 0)
        goto LAB6;

LAB8:    xsi_set_current_line(225, ng0);
    t1 = (t0 + 12536);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t12 = *((char **)t5);
    *((unsigned char *)t12) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB7:    goto LAB2;

LAB4:    xsi_set_current_line(228, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t6 = (4 - 4);
    t7 = (t6 * -1);
    t8 = (1U * t7);
    t9 = (0 + t8);
    t1 = (t2 + t9);
    t3 = *((unsigned char *)t1);
    t10 = (t3 == (unsigned char)2);
    if (t10 != 0)
        goto LAB9;

LAB11:    xsi_set_current_line(231, ng0);
    t1 = (t0 + 12536);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t12 = *((char **)t5);
    *((unsigned char *)t12) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);

LAB10:    goto LAB2;

LAB5:    xsi_set_current_line(234, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t6 = (4 - 4);
    t7 = (t6 * -1);
    t8 = (1U * t7);
    t9 = (0 + t8);
    t1 = (t2 + t9);
    t3 = *((unsigned char *)t1);
    t10 = (t3 == (unsigned char)3);
    if (t10 != 0)
        goto LAB12;

LAB14:    xsi_set_current_line(237, ng0);
    t1 = (t0 + 12536);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t12 = *((char **)t5);
    *((unsigned char *)t12) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB13:    goto LAB2;

LAB6:    xsi_set_current_line(223, ng0);
    t12 = (t0 + 12536);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)1;
    xsi_driver_first_trans_fast(t12);
    goto LAB7;

LAB9:    xsi_set_current_line(229, ng0);
    t4 = (t0 + 12536);
    t5 = (t4 + 56U);
    t12 = *((char **)t5);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    goto LAB10;

LAB12:    xsi_set_current_line(235, ng0);
    t4 = (t0 + 12536);
    t5 = (t4 + 56U);
    t12 = *((char **)t5);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)1;
    xsi_driver_first_trans_fast(t4);
    goto LAB13;

}

static void work_a_0709634095_3212880686_p_5(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(242, ng0);

LAB3:    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = (0 - 3);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 12600);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast(t8);

LAB2:    t13 = (t0 + 11640);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0709634095_3212880686_p_6(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(243, ng0);

LAB3:    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = (1 - 3);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 12664);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast(t8);

LAB2:    t13 = (t0 + 11656);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0709634095_3212880686_p_7(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(244, ng0);

LAB3:    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = (2 - 3);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 12728);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast(t8);

LAB2:    t13 = (t0 + 11672);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0709634095_3212880686_p_8(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(245, ng0);

LAB3:    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = (3 - 3);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 12792);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast(t8);

LAB2:    t13 = (t0 + 11688);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0709634095_3212880686_p_9(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    int t10;
    char *t11;
    int t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;

LAB0:    xsi_set_current_line(249, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 20893);
    t4 = xsi_mem_cmp(t1, t2, 4U);
    if (t4 == 1)
        goto LAB3;

LAB8:    t5 = (t0 + 20897);
    t7 = xsi_mem_cmp(t5, t2, 4U);
    if (t7 == 1)
        goto LAB4;

LAB9:    t8 = (t0 + 20901);
    t10 = xsi_mem_cmp(t8, t2, 4U);
    if (t10 == 1)
        goto LAB5;

LAB10:    t11 = (t0 + 20905);
    t13 = xsi_mem_cmp(t11, t2, 4U);
    if (t13 == 1)
        goto LAB6;

LAB11:
LAB7:    xsi_set_current_line(259, ng0);
    t1 = (t0 + 6312U);
    t2 = *((char **)t1);
    t1 = (t0 + 12856);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 5U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t1 = (t0 + 11704);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(251, ng0);
    t14 = (t0 + 20909);
    t16 = (t0 + 12856);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t14, 5U);
    xsi_driver_first_trans_fast_port(t16);
    goto LAB2;

LAB4:    xsi_set_current_line(253, ng0);
    t1 = (t0 + 5832U);
    t2 = *((char **)t1);
    t1 = (t0 + 12856);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 5U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB5:    xsi_set_current_line(255, ng0);
    t1 = (t0 + 5992U);
    t2 = *((char **)t1);
    t1 = (t0 + 12856);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 5U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB6:    xsi_set_current_line(257, ng0);
    t1 = (t0 + 6152U);
    t2 = *((char **)t1);
    t1 = (t0 + 12856);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 5U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB12:;
}

static void work_a_0709634095_3212880686_p_10(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(265, ng0);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 11720);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(266, ng0);
    t4 = (t0 + 6792U);
    t8 = *((char **)t4);
    t4 = (t0 + 12920);
    t9 = (t4 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t8, 4U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(267, ng0);
    t2 = (t0 + 6632U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 12984);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t1;
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

LAB5:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

}

static void work_a_0709634095_3212880686_p_11(char *t0)
{
    char t8[16];
    char t14[16];
    char t20[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t9;
    char *t10;
    char *t11;
    unsigned char t12;
    unsigned char t13;
    char *t15;
    char *t16;
    char *t17;
    unsigned char t18;
    unsigned char t19;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned char t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;

LAB0:    xsi_set_current_line(284, ng0);

LAB3:    t1 = (t0 + 5672U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t3);
    t1 = (t0 + 5512U);
    t5 = *((char **)t1);
    t6 = *((unsigned char *)t5);
    t7 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t6);
    t9 = ((IEEE_P_2592010699) + 4000);
    t1 = xsi_base_array_concat(t1, t8, t9, (char)99, t4, (char)99, t7, (char)101);
    t10 = (t0 + 5352U);
    t11 = *((char **)t10);
    t12 = *((unsigned char *)t11);
    t13 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t12);
    t15 = ((IEEE_P_2592010699) + 4000);
    t10 = xsi_base_array_concat(t10, t14, t15, (char)97, t1, t8, (char)99, t13, (char)101);
    t16 = (t0 + 5192U);
    t17 = *((char **)t16);
    t18 = *((unsigned char *)t17);
    t19 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t18);
    t21 = ((IEEE_P_2592010699) + 4000);
    t16 = xsi_base_array_concat(t16, t20, t21, (char)97, t10, t14, (char)99, t19, (char)101);
    t22 = (1U + 1U);
    t23 = (t22 + 1U);
    t24 = (t23 + 1U);
    t25 = (4U != t24);
    if (t25 == 1)
        goto LAB5;

LAB6:    t26 = (t0 + 13048);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memcpy(t30, t16, 4U);
    xsi_driver_first_trans_fast(t26);

LAB2:    t31 = (t0 + 11736);
    *((int *)t31) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(4U, t24, 0);
    goto LAB6;

}

static void work_a_0709634095_3212880686_p_12(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned char t7;
    unsigned int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    int t16;
    unsigned int t17;
    unsigned int t18;
    int t19;
    int t20;
    int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    static char *nl0[] = {&&LAB3, &&LAB4, &&LAB5, &&LAB6};

LAB0:    xsi_set_current_line(288, ng0);
    t1 = (t0 + 6472U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 11752);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(290, ng0);
    t4 = (t0 + 7112U);
    t5 = *((char **)t4);
    t4 = (t0 + 20914);
    t7 = 1;
    if (4U == 4U)
        goto LAB10;

LAB11:    t7 = 0;

LAB12:    if (t7 != 0)
        goto LAB7;

LAB9:    t1 = (t0 + 7112U);
    t2 = *((char **)t1);
    t16 = (0 - 3);
    t8 = (t16 * -1);
    t17 = (1U * t8);
    t18 = (0 + t17);
    t1 = (t2 + t18);
    t3 = *((unsigned char *)t1);
    t7 = (t3 == (unsigned char)3);
    if (t7 != 0)
        goto LAB16;

LAB17:    t1 = (t0 + 7112U);
    t2 = *((char **)t1);
    t16 = (1 - 3);
    t8 = (t16 * -1);
    t17 = (1U * t8);
    t18 = (0 + t17);
    t1 = (t2 + t18);
    t3 = *((unsigned char *)t1);
    t7 = (t3 == (unsigned char)3);
    if (t7 != 0)
        goto LAB18;

LAB19:    t1 = (t0 + 7112U);
    t2 = *((char **)t1);
    t16 = (2 - 3);
    t8 = (t16 * -1);
    t17 = (1U * t8);
    t18 = (0 + t17);
    t1 = (t2 + t18);
    t3 = *((unsigned char *)t1);
    t7 = (t3 == (unsigned char)3);
    if (t7 != 0)
        goto LAB20;

LAB21:    xsi_set_current_line(303, ng0);
    t1 = (t0 + 20934);
    t4 = (t0 + 13176);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(304, ng0);
    t1 = (t0 + 13112);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);

LAB8:    goto LAB2;

LAB4:    xsi_set_current_line(308, ng0);
    t1 = (t0 + 13112);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(309, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 13176);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t9 = *((char **)t6);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB5:    xsi_set_current_line(312, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 13176);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t9 = *((char **)t6);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(313, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t16 = (4 - 4);
    t8 = (t16 * -1);
    t17 = (1U * t8);
    t18 = (0 + t17);
    t1 = (t2 + t18);
    t3 = *((unsigned char *)t1);
    t7 = (t3 == (unsigned char)2);
    if (t7 != 0)
        goto LAB22;

LAB24:    xsi_set_current_line(317, ng0);
    t1 = (t0 + 13112);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB23:    goto LAB2;

LAB6:    xsi_set_current_line(321, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 20938);
    t16 = xsi_mem_cmp(t1, t2, 4U);
    if (t16 == 1)
        goto LAB26;

LAB30:    t5 = (t0 + 20942);
    t19 = xsi_mem_cmp(t5, t2, 4U);
    if (t19 == 1)
        goto LAB27;

LAB31:    t9 = (t0 + 20946);
    t20 = xsi_mem_cmp(t9, t2, 4U);
    if (t20 == 1)
        goto LAB28;

LAB32:
LAB29:    xsi_set_current_line(365, ng0);
    t1 = (t0 + 7112U);
    t2 = *((char **)t1);
    t16 = (0 - 3);
    t8 = (t16 * -1);
    t17 = (1U * t8);
    t18 = (0 + t17);
    t1 = (t2 + t18);
    t3 = *((unsigned char *)t1);
    t7 = (t3 == (unsigned char)3);
    if (t7 != 0)
        goto LAB55;

LAB57:    t1 = (t0 + 7112U);
    t2 = *((char **)t1);
    t16 = (1 - 3);
    t8 = (t16 * -1);
    t17 = (1U * t8);
    t18 = (0 + t17);
    t1 = (t2 + t18);
    t3 = *((unsigned char *)t1);
    t7 = (t3 == (unsigned char)3);
    if (t7 != 0)
        goto LAB58;

LAB59:    t1 = (t0 + 7112U);
    t2 = *((char **)t1);
    t16 = (2 - 3);
    t8 = (t16 * -1);
    t17 = (1U * t8);
    t18 = (0 + t17);
    t1 = (t2 + t18);
    t3 = *((unsigned char *)t1);
    t7 = (t3 == (unsigned char)3);
    if (t7 != 0)
        goto LAB60;

LAB61:    xsi_set_current_line(375, ng0);
    t1 = (t0 + 21010);
    t4 = (t0 + 13176);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(376, ng0);
    t1 = (t0 + 13112);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB56:
LAB25:    goto LAB2;

LAB7:    xsi_set_current_line(291, ng0);
    t11 = (t0 + 13112);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)0;
    xsi_driver_first_trans_fast(t11);
    xsi_set_current_line(292, ng0);
    t1 = (t0 + 20918);
    t4 = (t0 + 13176);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast(t4);
    goto LAB8;

LAB10:    t8 = 0;

LAB13:    if (t8 < 4U)
        goto LAB14;
    else
        goto LAB12;

LAB14:    t9 = (t5 + t8);
    t10 = (t4 + t8);
    if (*((unsigned char *)t9) != *((unsigned char *)t10))
        goto LAB11;

LAB15:    t8 = (t8 + 1);
    goto LAB13;

LAB16:    xsi_set_current_line(294, ng0);
    t4 = (t0 + 20922);
    t6 = (t0 + 13176);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 4U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(295, ng0);
    t1 = (t0 + 13112);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB8;

LAB18:    xsi_set_current_line(297, ng0);
    t4 = (t0 + 20926);
    t6 = (t0 + 13176);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 4U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(298, ng0);
    t1 = (t0 + 13112);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB8;

LAB20:    xsi_set_current_line(300, ng0);
    t4 = (t0 + 20930);
    t6 = (t0 + 13176);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 4U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(301, ng0);
    t1 = (t0 + 13112);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB8;

LAB22:    xsi_set_current_line(314, ng0);
    t4 = (t0 + 13112);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t4);
    goto LAB23;

LAB26:    xsi_set_current_line(323, ng0);
    t11 = (t0 + 7112U);
    t12 = *((char **)t11);
    t21 = (1 - 3);
    t8 = (t21 * -1);
    t17 = (1U * t8);
    t18 = (0 + t17);
    t11 = (t12 + t18);
    t3 = *((unsigned char *)t11);
    t7 = (t3 == (unsigned char)3);
    if (t7 != 0)
        goto LAB34;

LAB36:    t1 = (t0 + 7112U);
    t2 = *((char **)t1);
    t16 = (2 - 3);
    t8 = (t16 * -1);
    t17 = (1U * t8);
    t18 = (0 + t17);
    t1 = (t2 + t18);
    t3 = *((unsigned char *)t1);
    t7 = (t3 == (unsigned char)3);
    if (t7 != 0)
        goto LAB37;

LAB38:    t1 = (t0 + 7112U);
    t2 = *((char **)t1);
    t16 = (3 - 3);
    t8 = (t16 * -1);
    t17 = (1U * t8);
    t18 = (0 + t17);
    t1 = (t2 + t18);
    t3 = *((unsigned char *)t1);
    t7 = (t3 == (unsigned char)3);
    if (t7 != 0)
        goto LAB39;

LAB40:    xsi_set_current_line(333, ng0);
    t1 = (t0 + 20962);
    t4 = (t0 + 13176);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(334, ng0);
    t1 = (t0 + 13112);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB35:    goto LAB25;

LAB27:    xsi_set_current_line(337, ng0);
    t1 = (t0 + 7112U);
    t2 = *((char **)t1);
    t16 = (2 - 3);
    t8 = (t16 * -1);
    t17 = (1U * t8);
    t18 = (0 + t17);
    t1 = (t2 + t18);
    t3 = *((unsigned char *)t1);
    t7 = (t3 == (unsigned char)3);
    if (t7 != 0)
        goto LAB41;

LAB43:    t1 = (t0 + 7112U);
    t2 = *((char **)t1);
    t16 = (3 - 3);
    t8 = (t16 * -1);
    t17 = (1U * t8);
    t18 = (0 + t17);
    t1 = (t2 + t18);
    t3 = *((unsigned char *)t1);
    t7 = (t3 == (unsigned char)3);
    if (t7 != 0)
        goto LAB44;

LAB45:    t1 = (t0 + 7112U);
    t2 = *((char **)t1);
    t16 = (0 - 3);
    t8 = (t16 * -1);
    t17 = (1U * t8);
    t18 = (0 + t17);
    t1 = (t2 + t18);
    t3 = *((unsigned char *)t1);
    t7 = (t3 == (unsigned char)3);
    if (t7 != 0)
        goto LAB46;

LAB47:    xsi_set_current_line(347, ng0);
    t1 = (t0 + 20978);
    t4 = (t0 + 13176);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(348, ng0);
    t1 = (t0 + 13112);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB42:    goto LAB25;

LAB28:    xsi_set_current_line(351, ng0);
    t1 = (t0 + 7112U);
    t2 = *((char **)t1);
    t16 = (3 - 3);
    t8 = (t16 * -1);
    t17 = (1U * t8);
    t18 = (0 + t17);
    t1 = (t2 + t18);
    t3 = *((unsigned char *)t1);
    t7 = (t3 == (unsigned char)3);
    if (t7 != 0)
        goto LAB48;

LAB50:    t1 = (t0 + 7112U);
    t2 = *((char **)t1);
    t16 = (0 - 3);
    t8 = (t16 * -1);
    t17 = (1U * t8);
    t18 = (0 + t17);
    t1 = (t2 + t18);
    t3 = *((unsigned char *)t1);
    t7 = (t3 == (unsigned char)3);
    if (t7 != 0)
        goto LAB51;

LAB52:    t1 = (t0 + 7112U);
    t2 = *((char **)t1);
    t16 = (1 - 3);
    t8 = (t16 * -1);
    t17 = (1U * t8);
    t18 = (0 + t17);
    t1 = (t2 + t18);
    t3 = *((unsigned char *)t1);
    t7 = (t3 == (unsigned char)3);
    if (t7 != 0)
        goto LAB53;

LAB54:    xsi_set_current_line(361, ng0);
    t1 = (t0 + 20994);
    t4 = (t0 + 13176);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(362, ng0);
    t1 = (t0 + 13112);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB49:    goto LAB25;

LAB33:;
LAB34:    xsi_set_current_line(324, ng0);
    t13 = (t0 + 20950);
    t15 = (t0 + 13176);
    t22 = (t15 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memcpy(t25, t13, 4U);
    xsi_driver_first_trans_fast(t15);
    xsi_set_current_line(325, ng0);
    t1 = (t0 + 13112);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB35;

LAB37:    xsi_set_current_line(327, ng0);
    t4 = (t0 + 20954);
    t6 = (t0 + 13176);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 4U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(328, ng0);
    t1 = (t0 + 13112);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB35;

LAB39:    xsi_set_current_line(330, ng0);
    t4 = (t0 + 20958);
    t6 = (t0 + 13176);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 4U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(331, ng0);
    t1 = (t0 + 13112);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB35;

LAB41:    xsi_set_current_line(338, ng0);
    t4 = (t0 + 20966);
    t6 = (t0 + 13176);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 4U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(339, ng0);
    t1 = (t0 + 13112);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB42;

LAB44:    xsi_set_current_line(341, ng0);
    t4 = (t0 + 20970);
    t6 = (t0 + 13176);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 4U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(342, ng0);
    t1 = (t0 + 13112);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB42;

LAB46:    xsi_set_current_line(344, ng0);
    t4 = (t0 + 20974);
    t6 = (t0 + 13176);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 4U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(345, ng0);
    t1 = (t0 + 13112);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB42;

LAB48:    xsi_set_current_line(352, ng0);
    t4 = (t0 + 20982);
    t6 = (t0 + 13176);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 4U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(353, ng0);
    t1 = (t0 + 13112);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB49;

LAB51:    xsi_set_current_line(355, ng0);
    t4 = (t0 + 20986);
    t6 = (t0 + 13176);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 4U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(356, ng0);
    t1 = (t0 + 13112);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB49;

LAB53:    xsi_set_current_line(358, ng0);
    t4 = (t0 + 20990);
    t6 = (t0 + 13176);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 4U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(359, ng0);
    t1 = (t0 + 13112);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB49;

LAB55:    xsi_set_current_line(366, ng0);
    t4 = (t0 + 20998);
    t6 = (t0 + 13176);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 4U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(367, ng0);
    t1 = (t0 + 13112);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB56;

LAB58:    xsi_set_current_line(369, ng0);
    t4 = (t0 + 21002);
    t6 = (t0 + 13176);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 4U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(370, ng0);
    t1 = (t0 + 13112);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB56;

LAB60:    xsi_set_current_line(372, ng0);
    t4 = (t0 + 21006);
    t6 = (t0 + 13176);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 4U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(373, ng0);
    t1 = (t0 + 13112);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB56;

}


extern void work_a_0709634095_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0709634095_3212880686_p_0,(void *)work_a_0709634095_3212880686_p_1,(void *)work_a_0709634095_3212880686_p_2,(void *)work_a_0709634095_3212880686_p_3,(void *)work_a_0709634095_3212880686_p_4,(void *)work_a_0709634095_3212880686_p_5,(void *)work_a_0709634095_3212880686_p_6,(void *)work_a_0709634095_3212880686_p_7,(void *)work_a_0709634095_3212880686_p_8,(void *)work_a_0709634095_3212880686_p_9,(void *)work_a_0709634095_3212880686_p_10,(void *)work_a_0709634095_3212880686_p_11,(void *)work_a_0709634095_3212880686_p_12};
	xsi_register_didat("work_a_0709634095_3212880686", "isim/tb_Arbiter_isim_beh.exe.sim/work/a_0709634095_3212880686.didat");
	xsi_register_executes(pe);
}
