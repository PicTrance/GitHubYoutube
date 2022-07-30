/* #include <servo_st.c>
*
* Creada por: Ing. Abiezer Hernandez O.
* Fecha de creacion: 26/05/2020
* Electronica y Circuitos
*
*/

#define v_min 7
#define v_max 28
#define SERVO_HARDWARE

int i[11];
int data_s[11];

#ifdef SERVO_HARDWARE
#INT_TIMER0
void timer_0()
{
	#ifdef use_servo_1
	i[0]++;
    if(i[0] == 0) output_high(servo_1);
    if(i[0] == data_s[0]) output_low(servo_1);
    #endif

    #ifdef use_servo_2
	i[1]++;
    if(i[1] == 0) output_high(servo_2);
    if(i[1] == data_s[1]) output_low(servo_2);
    #endif

    #ifdef use_servo_3
	i[2]++;
    if(i[2] == 0) output_high(servo_3);
    if(i[2] == data_s[2]) output_low(servo_3);
    #endif

    #ifdef use_servo_4
	i[3]++;
    if(i[3] == 0) output_high(servo_4);
    if(i[3] == data_s[3]) output_low(servo_4);
    #endif

    #ifdef use_servo_5
	i[4]++;
    if(i[4] == 0) output_high(servo_5);
    if(i[4] == data_s[4]) output_low(servo_5);
    #endif

    #ifdef use_servo_6
	i[5]++;
    if(i[5] == 0) output_high(servo_6);
    if(i[5] == data_s[5]) output_low(servo_6);
    #endif

    #ifdef use_servo_7
	i[6]++;
    if(i[6] == 0) output_high(servo_7);
    if(i[6] == data_s[6]) output_low(servo_7);
    #endif

    #ifdef use_servo_8
	i[7]++;
    if(i[7] == 0) output_high(servo_8);
    if(i[7] == data_s[7]) output_low(servo_8);
    #endif

    #ifdef use_servo_9
	i[8]++;
    if(i[8] == 0) output_high(servo_9);
    if(i[8] == data_s[8]) output_low(servo_9);
    #endif

    #ifdef use_servo_10
	i[9]++;
    if(i[9] == 0) output_high(servo_10);
    if(i[9] == data_s[9]) output_low(servo_10);
    #endif
    set_timer0(158);
}
#endif

void servo_init()
{
    setup_timer_0(RTCC_INTERNAL | RTCC_DIV_4);
    set_timer0(158);
    enable_interrupts(INT_TIMER0);
    enable_interrupts(GLOBAL);
}

long map_int(int16 vl, int16 eMin, int16 eMax, int16 sMin, int16 sMax)
{
   return((((vl-eMin)*(sMax-sMin))/(eMax-eMin))+sMin);
}

#ifdef use_servo_1
void servo_1_write(int angle1)
{
   data_s[0] = map_int(angle1, 0, 180, v_min, v_max);
}
#endif

#ifdef use_servo_2
void servo_2_write(int angle2)
{
   data_s[1] = map_int(angle2, 0, 180, v_min, v_max);
}
#endif

#ifdef use_servo_3
void servo_3_write(int angle3)
{
   data_s[2] = map_int(angle3, 0, 180, v_min, v_max);
}
#endif

#ifdef use_servo_4
void servo_4_write(int angle4)
{
   data_s[3] = map_int(angle4, 0, 180, v_min, v_max);
}
#endif

#ifdef use_servo_5
void servo_5_write(int angle5)
{
   data_s[4] = map_int(angle5, 0, 180, v_min, v_max);
}
#endif

#ifdef use_servo_6
void servo_6_write(int angle6)
{
   data_s[5] = map_int(angle6, 0, 180, v_min, v_max);
}
#endif

#ifdef use_servo_7
void servo_7_write(int angle7)
{
   data_s[6] = map_int(angle7, 0, 180, v_min, v_max);
}
#endif

#ifdef use_servo_8
void servo_8_write(int angle8)
{
   data_s[7] = map_int(angle8, 0, 180, v_min, v_max);
}
#endif

#ifdef use_servo_9
void servo_9_write(int angle9)
{
   data_s[8] = map_int(angle9, 0, 180, v_min, v_max);
}
#endif

#ifdef use_servo_10
void servo_10_write(int angle10)
{
   data_s[9] = map_int(angle10, 0, 180, v_min, v_max);
}
#endif