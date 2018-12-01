//////////// Standard Header file for the PIC24F08KM204 device ////////////////
///////////////////////////////////////////////////////////////////////////
////        (C) Copyright 1996, 2013 Custom Computer Services          ////
//// This source code may only be used by licensed users of the CCS C  ////
//// compiler.  This source code may only be distributed to other      ////
//// licensed users of the CCS C compiler.  No other use, reproduction ////
//// or distribution is permitted without written permission.          ////
//// Derivative programs created using this software in object code    ////
//// form are not restricted in any way.                               ////
///////////////////////////////////////////////////////////////////////////
#device PIC24F08KM204

#nolist
//////// Program memory: 2816x24  Data RAM: 2048  Stack: 31
//////// I/O: 46   Analog Pins: 22
//////// Data EEPROM: 512
//////// Fuses: WRTB,NOWRTB,BSSH1152,BSSS1152,NOBSS,WRT,NOWRT,PROTECT
//////// Fuses: NOPROTECT,FRC,FRC_PLL,PR,PR_PLL,SOSC,LPRC,LPFRC_DIV,FRC_DIV
//////// Fuses: SOSC_DIGITAL,SOSC_ANALOG,LPRCLOW,LPRCHIGH,NOIESO,IESO,EC,XT
//////// Fuses: HS,NOPR,OSCIO,NOOSCIO,POSCFREQ_L,POSCFREQ_M,POSCFREQ_H
//////// Fuses: SOSC_LOW,SOSC_HIGH,CKSFSM,CKSNOFSM,NOCKSFSM,WPOSTS1,WPOSTS2
//////// Fuses: WPOSTS3,WPOSTS4,WPOSTS5,WPOSTS6,WPOSTS7,WPOSTS8,WPOSTS9
//////// Fuses: WPOSTS10,WPOSTS11,WPOSTS12,WPOSTS13,WPOSTS14,WPOSTS15
//////// Fuses: WPOSTS16,WDT32,WDT128,NOWINDIS,WINDIS,NOWDT,WDT_NOSL,WDT_SW
//////// Fuses: WDT,NOBROWNOUT,BROWNOUT_SW,BROWNOUT_NOSL,BROWNOUT,NOPUT,PUT
//////// Fuses: ALTI2C1,NOALTI2C1,LPBORV,BORV_HIGH,BORV_MID,BORV_LOW,NOMCLR
//////// Fuses: MCLR,ICSP3,ICSP2,ICSP1,DEBUG,NODEBUG
//////// 
#if (!defined(__PCD__)||defined(__ISNT_CCS__))
#define _bif
#define int8 char
#define int16 int
#define int32 long
#define int48 long
#define int64 long long
#define float32 float
#define float48 float
#define float64 double
#define int1 char

#endif
////////////////////////////////////////////////////////////////// I/O
// Discrete I/O Functions: SET_TRIS_x(), OUTPUT_x(), INPUT_x(),
//                         SET_PULLUP(), INPUT(),
//                         OUTPUT_LOW(), OUTPUT_HIGH(),
//                         OUTPUT_FLOAT(), OUTPUT_BIT()
// Discrete I/O Prototypes:
_bif void set_tris_a(unsigned int16 value);  
_bif void set_tris_b(unsigned int16 value);  
_bif void set_tris_c(unsigned int16 value);  
_bif unsigned int16 get_tris_a(void);  
_bif unsigned int16 get_tris_b(void);  
_bif unsigned int16 get_tris_c(void);  
_bif void output_a(unsigned int16 value);  
_bif void output_b(unsigned int16 value);  
_bif void output_c(unsigned int16 value);  
_bif unsigned int16 input_a(void);  
_bif unsigned int16 input_b(void);  
_bif unsigned int16 input_c(void);  
_bif int1 input_change_a(void);  
_bif int1 input_change_b(void);  
_bif int1 input_change_c(void);  
_bif void set_pullup(int1 state);
_bif void set_pullup(int1 state, unsigned int16 pin);
_bif void set_pulldown(int1 state);
_bif void set_pulldown(int1 state, unsigned int16 pin);
_bif int1 input(unsigned int16 pin);
_bif int1 input_state(unsigned int16 pin);
_bif void output_low(unsigned int16 pin);
_bif void output_high(unsigned int16 pin);
_bif void output_toggle(unsigned int16 pin);
_bif void output_bit(unsigned int16 pin, int1 level);
_bif void output_float(unsigned int16 pin);
_bif void output_drive(unsigned int16 pin);
// Constants used to identify pins in the above are:

#define PIN_A0  5648
#define PIN_A1  5649
#define PIN_A2  5650
#define PIN_A3  5651
#define PIN_A4  5652
#define PIN_A5  5653
#define PIN_A6  5654
#define PIN_A7  5655
#define PIN_A8  5656
#define PIN_A9  5657
#define PIN_A10  5658
#define PIN_A11  5659

#define PIN_B0  5712
#define PIN_B1  5713
#define PIN_B2  5714
#define PIN_B3  5715
#define PIN_B4  5716
#define PIN_B5  5717
#define PIN_B6  5718
#define PIN_B7  5719
#define PIN_B8  5720
#define PIN_B9  5721
#define PIN_B10  5722
#define PIN_B11  5723
#define PIN_B12  5724
#define PIN_B13  5725
#define PIN_B14  5726
#define PIN_B15  5727

#define PIN_C0  5776
#define PIN_C1  5777
#define PIN_C2  5778
#define PIN_C3  5779
#define PIN_C4  5780
#define PIN_C5  5781
#define PIN_C6  5782
#define PIN_C7  5783
#define PIN_C8  5784
#define PIN_C9  5785

////////////////////////////////////////////////////////////////// Useful defines
#define FALSE 0
#define TRUE 1

#define BYTE unsigned int8
#define BOOLEAN int1

#define getc getch
#define fgetc getch
#define getchar getch
#define putc putchar
#define fputc putchar
#define fgets gets
#define fputs puts

////////////////////////////////////////////////////////////////// UART
// UART Prototypes:
_bif void setup_uart(unsigned int32 baud);
_bif void setup_uart(unsigned int32 baud, unsigned int8 stream);
_bif void setup_uart(unsigned int32 baud, unsigned int8 stream, unsigned int32 clock);
_bif void set_uart_speed(unsigned int32 baud);
_bif void set_uart_speed(unsigned int32 baud, unsigned int8 stream);
_bif void set_uart_speed(unsigned int32 baud, unsigned int8 stream, unsigned int32 clock);
// Constants used in setup_uart() are:
// FALSE - Turn UART off
// TRUE  - Turn UART on
#define UART_ADDRESS           2
#define UART_DATA              4
#define UART_AUTODETECT        8
#define UART_AUTODETECT_NOWAIT 9
#define UART_WAKEUP_ON_RDA     10
#define UART_SEND_BREAK        13

////////////////////////////////////////////////////////////////// WDT
// Watch Dog Timer Functions: SETUP_WDT() and RESTART_WDT()
// WDT Prototypes:
_bif void setup_wdt(unsigned int8 mode);
_bif void restart_wdt(void);
// Constants used for SETUP_WDT() are:
#define WDT_ON      1
#define WDT_OFF     0

#define  WDT_1MS    0x002
#define  WDT_2MS    0x003
#define  WDT_4MS    0x004
#define  WDT_8MS    0x005
#define  WDT_16MS    0x006
#define  WDT_32MS    0x007
#define  WDT_64MS    0x008
#define  WDT_128MS    0x009
#define  WDT_256MS    0x00A
#define  WDT_512MS    0x00B
#define  WDT_1S    0x00C
#define  WDT_2S    0x00D
#define  WDT_4S    0x00E
#define  WDT_8S    0x00F
#define  WDT_16S    0x010
#define  WDT_33S    0x011
#define  WDT_65S    0x030
#define  WDT_131S    0x031

////////////////////////////////////////////////////////////////// Control
// Control Functions:  RESET_CPU(), SLEEP(), RESTART_CAUSE()
// Prototypes:
_bif unsigned int8 restart_cause(void);
_bif void reset_cpu(void);
_bif void sleep(void);
_bif void sleep(unsigned int8 mode);
// Constants passed into RESTART_CAUSE() are:
#define RESTART_POWER_UP      0
#define RESTART_BROWNOUT      1
#define RESTART_WATCHDOG      4
#define RESTART_SOFTWARE      6
#define RESTART_MCLR          7
#define RESTART_ILLEGAL_OP    14
#define RESTART_TRAP_CONFLICT 15
//
// Constants passed into SLEEP() are:
#define SLEEP_FULL      0  // Default
#define SLEEP_IDLE      1  // Clock and peripherals don't stop

////////////////////////////////////////////////////////////////// INTERNAL RC
// Oscillator Prototypes:
_bif void setup_oscillator(unsigned int8 type, unsigned int32 target);
_bif void setup_oscillator(unsigned int8 type, unsigned int32 target, unsigned int32 source);
// Constants used in setup_oscillator() are:
#define OSC_INTERNAL     32
#define OSC_CRYSTAL       1
#define OSC_CLOCK         2
#define OSC_RC            3
#define OSC_SECONDARY    16

////////////////////////////////////////////////////////////////// Timer 1
// Timer Functions: SETUP_TIMER1, GET_TIMER1, SET_TIMER1
// Timer 1 Prototypes:
_bif void setup_timer1(unsigned int16 mode);
_bif void setup_timer1(unsigned int16 mode, unsigned int16 period);
_bif unsigned int16 get_timer1(void);
_bif void set_timer1(unsigned int16 value);
// Constants used for SETUP_TIMER1() are:
//      (or (via |) together constants from each group)
#define T1_INTERNAL       0x8000
#define T1_INTERNAL_LPRC  0x8202
#define T1_EXTERNAL_T1CK  0x8102
#define T1_EXTERNAL_SOSC  0x8002
#define T1_SYNC           0x0004
#define T1_GATE           0x0040

#define T1_HALT_IDLE      0x2000
#define T1_CONTINUE_IDLE  0x0000

#define T1_DIV_BY_1       0x0000
#define T1_DIV_BY_8       0x0010
#define T1_DIV_BY_64      0x0020
#define T1_DIV_BY_256     0x0030

////////////////////////////////////////////////////////////////// CCP
// CCP Functions: SETUP_CCPx, SET_PWMx_DUTY, SET_CCPx_COMPARE_TIME
//                SET_TIMER_PERIOD_CCPx, SET_TIMER_CCPx, GET_TIMER_CCPx
//                GET_CAPTURE_CCPx, GET_CAPTURE32_CCPx
// CCP Variables: CCP_x_ASEVT, CCP_x_TRSET, CCP_x_SSDG
// Constants used for SETUP_CCPx() first parameter are:
// Use one of the following:
#define CCP_OFF                             0
#define CCP_TIMER                           0x00008000
#define CCP_COMPARE_SET_ON_MATCH            0x00008001
#define CCP_COMPARE_CLR_ON_MATCH            0x00008002
#define CCP_COMPARE_TOGGLE                  0x00008003
#define CCP_COMPARE_PULSE                   0x00008004
#define CCP_PWM_EDGE                        0x00008005
#define CCP_PWM_CENTER                      0x00008006
#define CCP_VARIABLE_FREQ_PULSE             0x00008007
#define CCP_EXTERNAL                        0x0000800F
#define CCP_CAPTURE_EDGE_DETECT             0x00008010
#define CCP_CAPTURE_RE                      0x00008011
#define CCP_CAPTURE_FE                      0x00008012
#define CCP_CAPTURE_EE                      0x00008013
#define CCP_CAPTURE_DIV_4                   0x00008014
#define CCP_CAPTURE_DIV_16                  0x00008015

// OR (via |) one of the following with above:
#define CCP_DIV_BY_1                        0
#define CCP_DIV_BY_4                        0x00000040
#define CCP_DIV_BY_16                       0x00000080
#define CCP_DIV_BY_64                       0x000000C0

// OR (via |) one of the following with above:
#define CCP_SYSTEM_CLOCK                    0
#define CCP_FRC                             0x00000100
#define CCP_SOSC                            0x00000200
#define CCP_LPRC                            0x00000300
#define CCP_FOSC                            0x00000400
#define CCP_CLC1                            0x00000500
#define CCP_TCLKIB                          0x00000600
#define CCP_TCLKIA                          0x00000700

// OR (via |) any of the following with above:
#define CCP_TIMER_32_BIT                    0x00000020
#define CCP_SYNC_TIMER                      0x00000800
#define CCP_CONTINUE_SLEEP                  0x00001000
#define CCP_HALT_IDLE                       0x00002000

// OR (via |) one of the following with above:
#define CCP_SYNC_SOURCE_NONE                0
#define CCP_SYNC_SOURCE_CCP1                0x00010000
#define CCP_SYNC_SOURCE_CCP2                0x00020000
#define CCP_SYNC_SOURCE_CCP3                0x00030000
#define CCP_SYNC_SOURCE_CCP4                0x00040000
#define CCP_SYNC_SOURCE_CCP5                0x00050000
#define CCP_SYNC_SOURCE_EXT0                0x00080000
#define CCP_SYNC_SOURCE_EXT1                0x00090000
#define CCP_SYNC_SOURCE_EXT2                0x000A0000
#define CCP_SYNC_SOURCE_TIMER1              0x000B0000
#define CCP_SYNC_SOURCE_CLC1                0x00110000
#define CCP_SYNC_SOURCE_CLC2                0x00120000
#define CCP_SYNC_SOURCE_COMP1               0x00180000
#define CCP_SYNC_SOURCE_COMP2               0x00190000
#define CCP_SYNC_SOURCE_COMP3               0x001A0000
#define CCP_SYNC_SOURCE_ADC                 0x001B0000
#define CCP_SYNC_SOURCE_CTMU                0x001C0000

// OR (via |) any of the following with above:
#define CCP_ALT_SYNC                        0x00200000
#define CCP_ONE_SHOT_MODE                   0x00400000
#define CCP_TRIGGER_ENABLE                  0x00800000
#define CCP_RETRIGGER                       0x40000000
#define CCP_POSTSCALE_SCALES_TRIGGER        0x80000000
 
// OR (via |) one of the following with above:
#define CCP_INTERRUPT_EVERY_MATCH_CAPTURE   0
#define CCP_INTERRUPT_2ND_MATCH_CAPTURE     0x01000000
#define CCP_INTERRUPT_3RD_MATCH_CAPTURE     0x02000000
#define CCP_INTERRUPT_4TH_MATCH_CAPTURE     0x03000000
#define CCP_INTERRUPT_5TH_MATCH             0x04000000
#define CCP_INTERRUPT_6TH_MATCH             0x05000000
#define CCP_INTERRUPT_7TH_MATCH             0x06000000
#define CCP_INTERRUPT_8TH_MATCH             0x07000000
#define CCP_INTERRUPT_9TH_MATCH             0x08000000
#define CCP_INTERRUPT_10TH_MATCH            0x09000000
#define CCP_INTERRUPT_11TH_MATCH            0x0A000000
#define CCP_INTERRUPT_12TH_MATCH            0x0B000000
#define CCP_INTERRUPT_13TH_MATCH            0x0C000000
#define CCP_INTERRUPT_14TH_MATCH            0x0D000000
#define CCP_INTERRUPT_15TH_MATCH            0x0E000000
#define CCP_INTERRUPT_16TH_MATCH            0x0F000000

// Constants used for SETUP_CCPx() second parameter are:
// Use one of the following:
#define CCP_SHUTDOWN_ON_COMP1               0
#define CCP_SHUTDOWN_ON_COMP2               0x00000001
#define CCP_SHUTDOWN_ON_COMP3               0x00000002
#define CCP_SHUTDOWN_ON_CCP4                0x00000003
#define CCP_SHUTDOWN_ON_CCP5                0x00000004
#define CCP_SHUTDOWN_ON_CLC1                0x00000005
#define CCP_SHUTDOWN_ON_FAULTA              0x00000006
#define CCP_SHUTDOWN_ON_FAULTB              0x00000007

// OR (via |) any of the following with above:
#define CCP_SHUTDOWN_ON_TIME_BASE_RESET     0x00004000
#define CCP_SHUTDOWN_AUTO_RESTART           0x00008000

// OR (via |) one of the following with above:
#define CCP_IC_SOURCE_ICX_PIN               0
#define CCP_IC_SOURCE_COMP1                 0x00010000
#define CCP_IC_SOURCE_COMP2                 0x00020000
#define CCP_IC_SOURCE_COMP3                 0x00030000
#define CCP_IC_SOURCE_CLC1                  0x00050000
#define CCP_IC_SOURCE_CLC2                  0x00060000

// OR (via |) one of the following with above:
#define CCP_AUXILIARY_OUTPUT_DISABLED       0
#define CCP_AUXILIARY_OUTPUT_ROLLOVER       0x00080000
#define CCP_AUXILIARY_OUTPUT_SIGNAL         0x00100000
#define CCP_AUXILIARY_OUTPUT_IC_OC_EVENT    0x00180000

// OR (via |) one of the following with above:
#define CCP_IC_GATING_MODE_LEVEL_SENSING    0
#define CCP_IC_GATING_MODE_ONE_SHOOT_RE     0x00400000
#define CCP_IC_GATING_MODE_ONE_SHOOT_FE     0x00800000

// OR (via |) any of the following with above:
#define CCP_PULSE_STEERING_A                0x01000000
#define CCP_PULSE_STEERING_B                0x02000000
#define CCP_PULSE_STEERING_C                0x04000000
#define CCP_PULSE_STEERING_D                0x08000000
#define CCP_PULSE_STEERING_E                0x10000000
#define CCP_PULSE_STEERING_F                0x20000000
#define CCP_PULSE_STEERING_SYNC_ON_NEXT     0x80000000

// Constants used for SETUP_CCPx() third parameter are:
// Use one of the following:
#define CCP_SHUTDOWN_BDF_FLOAT              0
#define CCP_SHUTDOWN_BDF_INACTIVE           0x0002
#define CCP_SHUTDOWN_BDF_ACTIVE             0x0003

// OR (via |) one of the following with above:
#define CCP_SHUTDOWN_ACE_FLOAT              0
#define CCP_SHUTDOWN_ACE_INACTIVE           0x0008
#define CCP_SHUTDOWN_ACE_ACTIVE             0x000C

// OR (via |) one of the following with above:
#define CCP_PWM_H_H                         0       //A,C and E active-high, B,D and F active-high
#define CCP_PWM_H_L                         0x0010  //A,C and E active-high, B,D and F active-low
#define CCP_PWM_L_H                         0x0020  //A,C and E active-low, B,D and F active-high
#define CCP_PWM_L_L                         0x0030  //A,C and E active-low, B,D and F active-low

// OR (via |) one of the following with above:
#define CCP_PWM_SINGLE                      0
#define CCP_PWM_PUSH_PULL                   0x0100
#define CCP_PWM_HALF_BRIDGE                 0x0200
#define CCP_PWM_BRUSH_DC_REV                0x0400
#define CCP_PWM_BRUSH_DC                    0x0500
#define CCP_PWM_OUTPUT_SCAN                 0x0600

// OR (via |) one of the following with above:
#define CCP_ONE_SHOT_EVENT_1_TIME_PERIOD    0
#define CCP_ONE_SHOT_EVENT_2_TIME_PERIODS   0x1000
#define CCP_ONE_SHOT_EVENT_3_TIME_PERIODS   0x2000
#define CCP_ONE_SHOT_EVENT_4_TIME_PERIODS   0x3000
#define CCP_ONE_SHOT_EVENT_5_TIME_PERIODS   0x4000
#define CCP_ONE_SHOT_EVENT_6_TIME_PERIODS   0x5000
#define CCP_ONE_SHOT_EVENT_7_TIME_PERIODS   0x6000
#define CCP_ONE_SHOT_EVENT_8_TIME_PERIODS   0x7000

// OR (via |) the following with above
#define CCP_DRIVE_OUTPUTS_WHEN_TRIGGERED    0x8000

// Constants used for GET_TIMER_CCPx() are:
#define CCP_READ_TMRL                       0
#define CCP_READ_TMRH                       1

// CCP1 Prototypes:
_bif void setup_ccp1(unsigned int32 mode1);
_bif void setup_ccp1(unsigned int32 mode1, unsigned int32 mode2);
_bif void setup_ccp1(unsigned int32 mode1, unsigned int32 mode2, unsigned int16 mode3);
_bif void setup_ccp1(unsigned int32 mode1, unsigned int32 mode2, unsigned int16 mode3, unsigned int8 dead_time);
_bif void set_pwm1_duty(unsigned int16 period);
_bif void set_ccp1_compare_time(unsigned int32 time);
_bif void set_ccp1_compare_time(unsigned int16 timeA, unsigned int16 timeB);
_bif void set_timer_period_ccp1(unsigned int32 period);
_bif void set_timer_period_ccp1(unsigned int16 periodL, unsigned int16 periodH);
_bif void set_timer_ccp1(unsigned int32 time);
_bif void set_timer_ccp1(unsigned int16 timeL, unsigned int16 timeH);
_bif unsigned int32 get_timer_ccp1(void);
_bif unsigned int16 get_timer_ccp1(unsigned int8 which);
_bif unsigned int16 get_capture_ccp1(void);
_bif unsigned int16 get_capture_ccp1(int1 wait);
_bif unsigned int32 get_capture32_ccp1(void);
_bif unsigned int32 get_capture32_ccp1(int1 wait);

#bit CCP_1_ASEVT = getenv("SFR:CCP1STATL").4
#bit CCP_1_TRSET = getenv("SFR:CCP1STATL").6
#bit CCP_1_SSDG = getenv("SFR:CCP1CON2L").12

// CCP2 Prototypes:
_bif void setup_ccp2(unsigned int32 mode1);
_bif void setup_ccp2(unsigned int32 mode1, unsigned int32 mode2);
_bif void setup_ccp2(unsigned int32 mode1, unsigned int32 mode2, unsigned int16 mode3);
_bif void setup_ccp2(unsigned int32 mode1, unsigned int32 mode2, unsigned int16 mode3, unsigned int8 dead_time);
_bif void set_pwm2_duty(unsigned int16 period);
_bif void set_ccp2_compare_time(unsigned int32 time);
_bif void set_ccp2_compare_time(unsigned int16 timeA, unsigned int16 timeB);
_bif void set_timer_period_ccp2(unsigned int32 period);
_bif void set_timer_period_ccp2(unsigned int16 periodL, unsigned int16 periodH);
_bif void set_timer_ccp2(unsigned int32 time);
_bif void set_timer_ccp2(unsigned int16 timeL, unsigned int16 timeH);
_bif unsigned int32 get_timer_ccp2(void);
_bif unsigned int16 get_timer_ccp2(unsigned int8 which);
_bif unsigned int16 get_capture_ccp2(void);
_bif unsigned int16 get_capture_ccp2(int1 wait);
_bif unsigned int32 get_capture32_ccp2(void);
_bif unsigned int32 get_capture32_ccp2(int1 wait);

#bit CCP_2_ASEVT = getenv("SFR:CCP2STATL").4
#bit CCP_2_TRSET = getenv("SFR:CCP2STATL").6
#bit CCP_2_SSDG = getenv("SFR:CCP2CON2L").12

// CCP3 Prototypes:
_bif void setup_ccp3(unsigned int32 mode1);
_bif void setup_ccp3(unsigned int32 mode1, unsigned int32 mode2);
_bif void setup_ccp3(unsigned int32 mode1, unsigned int32 mode2, unsigned int16 mode3);
_bif void setup_ccp3(unsigned int32 mode1, unsigned int32 mode2, unsigned int16 mode3, unsigned int8 dead_time);
_bif void set_pwm3_duty(unsigned int16 period);
_bif void set_ccp3_compare_time(unsigned int32 time);
_bif void set_ccp3_compare_time(unsigned int16 timeA, unsigned int16 timeB);
_bif void set_timer_period_ccp3(unsigned int32 period);
_bif void set_timer_period_ccp3(unsigned int16 periodL, unsigned int16 periodH);
_bif void set_timer_ccp3(unsigned int32 time);
_bif void set_timer_ccp3(unsigned int16 timeL, unsigned int16 timeH);
_bif unsigned int32 get_timer_ccp3(void);
_bif unsigned int16 get_timer_ccp3(unsigned int8 which);
_bif unsigned int16 get_capture_ccp3(void);
_bif unsigned int16 get_capture_ccp3(int1 wait);
_bif unsigned int32 get_capture32_ccp3(void);
_bif unsigned int32 get_capture32_ccp3(int1 wait);

#bit CCP_3_ASEVT = getenv("SFR:CCP3STATL").4
#bit CCP_3_TRSET = getenv("SFR:CCP3STATL").6
#bit CCP_3_SSDG = getenv("SFR:CCP3CON2L").12

// CCP4 Prototypes:
_bif void setup_ccp4(unsigned int32 mode1);
_bif void setup_ccp4(unsigned int32 mode1, unsigned int32 mode2);
_bif void setup_ccp4(unsigned int32 mode1, unsigned int32 mode2, unsigned int16 mode3);
_bif void setup_ccp4(unsigned int32 mode1, unsigned int32 mode2, unsigned int16 mode3, unsigned int8 dead_time);
_bif void set_pwm4_duty(unsigned int16 period);
_bif void set_ccp4_compare_time(unsigned int32 time);
_bif void set_ccp4_compare_time(unsigned int16 timeA, unsigned int16 timeB);
_bif void set_timer_period_ccp4(unsigned int32 period);
_bif void set_timer_period_ccp4(unsigned int16 periodL, unsigned int16 periodH);
_bif void set_timer_ccp4(unsigned int32 time);
_bif void set_timer_ccp4(unsigned int16 timeL, unsigned int16 timeH);
_bif unsigned int32 get_timer_ccp4(void);
_bif unsigned int16 get_timer_ccp4(unsigned int8 which);
_bif unsigned int16 get_capture_ccp4(void);
_bif unsigned int16 get_capture_ccp4(int1 wait);
_bif unsigned int32 get_capture32_ccp4(void);
_bif unsigned int32 get_capture32_ccp4(int1 wait);

#bit CCP_4_ASEVT = getenv("SFR:CCP4STATL").4
#bit CCP_4_TRSET = getenv("SFR:CCP4STATL").6
#bit CCP_4_SSDG = getenv("SFR:CCP4CON2L").12

// CCP5 Prototypes:
_bif void setup_ccp5(unsigned int32 mode1);
_bif void setup_ccp5(unsigned int32 mode1, unsigned int32 mode2);
_bif void setup_ccp5(unsigned int32 mode1, unsigned int32 mode2, unsigned int16 mode3);
_bif void setup_ccp5(unsigned int32 mode1, unsigned int32 mode2, unsigned int16 mode3, unsigned int8 dead_time);
_bif void set_pwm5_duty(unsigned int16 period);
_bif void set_ccp5_compare_time(unsigned int32 time);
_bif void set_ccp5_compare_time(unsigned int16 timeA, unsigned int16 timeB);
_bif void set_timer_period_ccp5(unsigned int32 period);
_bif void set_timer_period_ccp5(unsigned int16 periodL, unsigned int16 periodH);
_bif void set_timer_ccp5(unsigned int32 time);
_bif void set_timer_ccp5(unsigned int16 timeL, unsigned int16 timeH);
_bif unsigned int32 get_timer_ccp5(void);
_bif unsigned int16 get_timer_ccp5(unsigned int8 which);
_bif unsigned int16 get_capture_ccp5(void);
_bif unsigned int16 get_capture_ccp5(int1 wait);
_bif unsigned int32 get_capture32_ccp5(void);
_bif unsigned int32 get_capture32_ccp5(int1 wait);

#bit CCP_5_ASEVT = getenv("SFR:CCP5STATL").4
#bit CCP_5_TRSET = getenv("SFR:CCP5STATL").6
#bit CCP_5_SSDG = getenv("SFR:CCP5CON2L").12

////////////////////////////////////////////////////////////////// SPI
// SPI Functions: SETUP_SPI, SPI_WRITE, SPI_READ, SPI_DATA_IN
// SPI Prototypes:
_bif void setup_spi(unsigned int16 mode);
_bif void spi_write(unsigned int8 data);
_bif unsigned int8 spi_read(void);
_bif unsigned int8 spi_read(unsigned int8 data);
_bif int1 spi_data_in(void);
_bif void setup_spi2(unsigned int16 mode);
_bif void spi_write2(unsigned int8 data);
_bif unsigned int8 spi_read2(void);
_bif unsigned int8 spi_read2(unsigned int8 data);
_bif int1 spi_data_in2(void);
// Constants used in SETUP_SPI() are:
//      (or (via |) together constants from each group)
#define SPI_DISABLED               0x0000
#define SPI_MASTER                 0x0020
#define SPI_SLAVE                  0x0024

#define SPI_SCK_IDLE_HIGH          0x0010
#define SPI_SCK_IDLE_LOW           0x0000

#define SPI_XMIT_L_TO_H            0x4000
#define SPI_XMIT_H_TO_L            0x0000

#define SPI_SAMPLE_AT_END          0x8000
#define SPI_SAMPLE_AT_MIDDLE       0x0000

//or (via |) on of the following when operating as SLAVE
#define SPI_SS_ENABLED             0x0000
#define SPI_SS_DISABLED            0x0001

//or (via |) one of the following when operating as MASTER
#define SPI_CLK_TMR2_DIV_2         0x0003
#define SPI_CLK_DIV_16             0x0002
#define SPI_CLK_DIV_4              0x0001
#define SPI_CLK_DIV_1              0x0000

//The following defines are provided for compatibility
#define SPI_L_TO_H         SPI_SCK_IDLE_LOW
#define SPI_H_TO_L         SPI_SCK_IDLE_HIGH

////////////////////////////////////////////////////////////////// ADC
// ADC Functions: SETUP_ADC(), SETUP_ADC_PORTS()
//                SET_ADC_CHANNEL(), READ_ADC()
// ADC Prototypes:
_bif void setup_adc(unsigned int32 mode);
_bif void setup_adc_ports(unsigned int32 pins);
_bif void setup_adc_ports(unsigned int32 pins, unsigned int16 reference);
_bif void set_adc_channel(unsigned int8);
_bif unsigned int16 read_adc(void);
_bif unsigned int16 read_adc(unsigned int8 mode);
_bif int1 adc_done(void);
// Constants used for SETUP_ADC() are:
// Clock is at ADCS<5:0> of ADCON3 Reg. (0x02A4)
// Tad = (Tcy/2)*(ADCS<5:0>+1)
#define ADC_OFF           0x10000
#define ADC_CLOCK          0x0000
#define ADC_CLOCK_DIV_2    0x0001
#define ADC_CLOCK_DIV_4    0x0003
#define ADC_CLOCK_DIV_8    0x0007
#define ADC_CLOCK_DIV_16   0x000F
#define ADC_CLOCK_DIV_32   0x001F
#define ADC_CLOCK_DIV_64   0x003F
#define ADC_CLOCK_INTERNAL 0x8000     // Internal

// The following may be OR'ed in with the above using |
// Auto-Sample Time bits
#define ADC_TAD_MUL_0      0x1F00
#define ADC_TAD_MUL_2      0x1D00
#define ADC_TAD_MUL_4      0x1B00
#define ADC_TAD_MUL_8      0x1700
#define ADC_TAD_MUL_16     0x0F00
#define ADC_TAD_MUL_31     0x0000

// Constants used in READ_ADC() are:
#define ADC_START_AND_READ 0x07
#define ADC_START_ONLY     0x01
#define ADC_READ_ONLY      0x06

// Constants used in SETUP_ADC_PORTS() are:
// First argument:
// OR together desired pins
#define NO_ANALOGS      0           // None
#define ALL_ANALOG      0xFFFFFFFF  // All
#define sAN0      0x00000001 //| A0
#define sAN1      0x00000002 //| A1
#define sAN2      0x00000004 //| B0
#define sAN3      0x00000008 //| B1
#define sAN4      0x00000010 //| B2
#define sAN5      0x00000020 //| B3
#define sAN6      0x00000040 //| C0
#define sAN7      0x00000080 //| C1
#define sAN8      0x00000100 //| C2
#define sAN9      0x00000200 //| B15
#define sAN10      0x00000400 //| B14
#define sAN11      0x00000800 //| B13
#define sAN12      0x00001000 //| B12
#define sAN13      0x00002000 //| A2
#define sAN14      0x00004000 //| A3
#define sAN15      0x00008000 //| B4
#define sAN16      0x00010000 //| A4
#define sAN17      0x00020000 //| B5
#define sAN18      0x00040000 //| B6
#define sAN19      0x00080000 //| B7
#define sAN20      0x00100000 //| B8
#define sAN21      0x00200000 //| B9

// Optional Second argument:
#define VSS_VDD            0x0000 // Range 0-Vdd
#define VSS_VREF           0x4000 // Range 0-VrefH
#define VSS_2VBG           0x8000 // Range 0-2*VBG
#define VSS_4VBG           0xC000 // Range 0-4*VBG
#define VREF_VDD           0x2000 // Range VrefL-Vdd
#define VREF_VREF          0x6000 // Range VrefL-VrefH
#define VREF_2VBG          0xA000 // Range VrefL-2*VBG
#define VREF_4VBG          0xE000 // Range VrefL-4*VBG

////////////////////////////////////////////////////////////////// COMP
// Comparator Functions: setup_comparator()
// Comparator Prototypes:
_bif void setup_comparator(unsigned int8 comparator, unsigned int16 mode);
// Constants used in setup_comparator() second param are: - first param is the comparator number.
#define NC_NC            0x00
#define CXINB_CXINA      0x8000
#define CXINC_CXINA      0x8001
#define CXIND_CXINA      0x8002
#define VBG2_CXINA       0x8003
#define CXINB_VREF       0x8010
#define CXINC_VREF       0x8011
#define CXIND_VREF       0x8012
#define VBG2_VREF        0x8013
      // OR in any of the following
#define COMP_INVERT      0x2000   // Invert output
#define COMP_OUTPUT      0x4000   // Output on pin
#define COMP_INTR        0x0040   // Generate interrupt on high
#define COMP_INTR_INV    0x0080   // Generate interrupt on low
#define COMP_INTR_CHANGE 0x00c0   // Generate interrupt on change

#bit C1OUT = 0x634.8
#bit C1ENV = 0x634.9  // User must clear
#bit C2OUT = 0x636.8
#bit C2ENV = 0x636.9  // User must clear
#bit C3OUT = 0x638.8
#bit C3ENV = 0x638.9  // User must clear

////////////////////////////////////////////////////////////////// VREF
// VREF Prototypes:
_bif void setup_vref(unsigned int16 mode);
// Constants used in setup_vref() are:
#define VREF_DISABLED  0x0000
#define VREF_VSS_VDD   0x0080
#define VREF_ANALOG    0x00A0
// The following maybe OR'ed in with the above using |
#define VREF_OUTPUT    0x0040
// Or (with |) the above with a number 0-31

////////////////////////////////////////////////////////////////// RTC
// RTC Functions: setup_rtc(), setup_rtc_alarm(), rtc_read(),
//                rtc_write(), rtc_alarm_read(), rtc_alarm_write()
// Structure used in read and write functions (pass pointer):
typedef struct {
   int8 tm_year;
   int8 tm_temp;  // Not used by built in functions, place holder only do not use
   int8 tm_mday;
   int8 tm_mon;
   int8 tm_hour;
   int8 tm_wday;
   int8 tm_sec;
   int8 tm_min;
   int8 tm_isdst; // Not used by built in functions
} rtc_time_t;
// RTC Protoyptes:
_bif void setup_rtc(unsigned int16 mode, unsigned int8 calibration);
_bif void setup_rtc_alarm(unsigned int16 mode, unsigned int16 mask, unsigned int8 repeat);
_bif void rtc_read(rtc_time_t *time);
_bif void rtc_write(rtc_time_t *time);
_bif void rtc_read_alarm(rtc_time_t *time);
_bif void rtc_write_alarm(rtc_time_t *time);
// Constants used in setup_rtc() are:  // Second param is calibration
#define RTC_ENABLE               0x00008000
#define RTC_DISABLE              0
#define RTC_CLOCK_EXT_60HZ       0x0C000000
#define RTC_CLOCK_EXT_50HZ       0x08000000
#define RTC_CLOCK_INT            0x04000000
#define RTC_CLOCK_SOSC           0
#define RTC_OUTPUT_PWC           0x03000400
#define RTC_OUTPUT_CLOCK         0x02000400
#define RTC_OUTPUT_SECONDS       0x01000400
#define RTC_OUTPUT_ALARM         0x0000400
// OR in any of the following:
#define RTC_PWC_ENABLE           0x80000000
#define RTC_PWC_HIGH             0x40000000
#define RTC_PWC_LOW              0
#define RTC_PWC_STAB_CLOCK_DIV2  0x20000000
#define RTC_PWC_STAB_CLOCK_DIV1  0
#define RTC_PWC_SAMP_CLOCK_DIV2  0x10000000
#define RTC_PWC_SAMP_CLOCK_DIV1  0

// Constants used in setup_rtc_alarm() first param are:  
#define RTC_ALARM_ENABLE         0x8000
#define RTC_ALARM_DISABLE        0
#define RTC_CHIME_ENABLE         0x4000
#define RTC_CHIME_DISABLE        0
// Constants used in setup_rtc_alarm() second param are:  // Third param is repeat#
#define RTC_ALARM_HALFSECOND     0x0000
#define RTC_ALARM_SECOND         0x0400
#define RTC_ALARM_10_SECONDS     0x0800
#define RTC_ALARM_MINUTE         0x0C00
#define RTC_ALARM_10_MINUTES     0x1000
#define RTC_ALARM_HOUR           0x1400
#define RTC_ALARM_DAY            0x1800
#define RTC_ALARM_WEEK           0x1C00
#define RTC_ALARM_MONTH          0x2000
#define RTC_ALARM_YEAR           0x2400

////////////////////////////////////////////////////////////////// DAC
// Digital to Analog Functions: SETUP_DAC(), DAC_WRITE()
// DAC Prototypes:
_bif void setup_dac(unsigned int8 module, unsigned int16 mode);
_bif void dac_write(unsigned int8 module, unsigned int8 value);
// Constants used in setup_dac() second parameter are:
#define DAC_OFF            0
#define DAC_ON             0x8000
#define DAC_HALT_IDLE      0x2000
#define DAC_NOHALT_SLEEP   0x1000
#define DAC_NO_SOFT_RESET  0x0200
#define DAC_USE_TRIGGER    0x0100
#define DAC_OUTPUT         0x0080
// One of the following defines maybe ORed | with above
#define DAC_REF_2v4        0x0003  //DACx Reference Source 2.4 internal band gap
#define DAC_REF_VDD        0x0002  //DACx Reference Source Vdd
#define DAC_REF_VREF       0x0001  //DACx Reference Source DVref+
#define DAC_REF_NC         0       //DACx Reference Source Not Connected
// One of the following defines maybe ORed | with above
#define DAC_TRIGGER_CCP1   0x0004
#define DAC_TRIGGER_CCP2   0x0008
#define DAC_TRIGGER_CCP3   0x000C
#define DAC_TRIGGER_CCP4   0x0010
#define DAC_TRIGGER_CCP5   0x0014
#define DAC_TRIGGER_EXT0   0x0020
#define DAC_TRIGGER_EXT1   0x0024
#define DAC_TRIGGER_EXT2   0x0028
#define DAC_TRIGGER_CLC1   0x0044
#define DAC_TRIGGER_CLC2   0x0048
#define DAC_TRIGGER_COMP1  0x0060
#define DAC_TRIGGER_COMP2  0x0064
#define DAC_TRIGGER_COMP3  0x0068
#define DAC_TRIGGER_ADC    0x006C
#define DAC_TRIGGER_CTMU   0x0070

////////////////////////////////////////////////////////////////// LVD
// Low Voltage Detect Functions: SETUP_LOW_VOLT_DETECT()
// LVD Prototypes:
_bif void setup_low_volt_detect(unsigned int16 mode);
// Constants used in SETUP_LOW_VOLT_DETECT() are:
#define LVD_ENABLE          0x8000
#define LVD_DISABLE         0x0000
#define LVD_HALT_IDLE       0x2000
#define LVD_TRIGGER_ABOVE   0x0080
#define LVD_TRIGGER_BELOW   0x0000
// OR a number 0-15 with the above using | or the following
//    refer to device's datasheet for trip point when using a number
#define LVD_LVDIN           0x000F

////////////////////////////////////////////////////////////////// OPAMP
// OPAMP Functions: SETUP_OPAMPx()
// OPAMP Prototypes:
_bif void setup_opamp1(unsigned int16 mode);
_bif void setup_opamp2(unsigned int16 mode);
// Constants used in SETUP_OPAMPx() are:
#define OPAMP_ENABLED                0x8000
#define OPAMP_DISABLED               0x0000
#define OPAMP_HALT_IDLE              0x2000
#define OPAMP_NOHALT_SLEEP           0x1000
#define OPAMP_HIGH_POWER_MODE        0x0080
#define OPAMP_LOW_POWER_MODE         0x0000
// One of the following may be OR'ed in with the above using |
#define OPAMP_PI_TO_VSS              0x0000 //Positive input connected to AVss
#define OPAMP_PI_TO_OAXINA           0x0001 //Positive input connected to OAxINA pin
#define OPAMP_PI_TO_OAXINC           0x0002 //Positive input connected to OAxINC pin
#define OPAMP_PI_TO_DAC              0x0005 //Positive input connected to DAC1 output for OA1 (DAC2 output for OA2)
#define OPAMP_PI_TO_ADC              0x0007 //Positive input connected to the output of the A/D input multiplexer
// One of the following may be OR'ed in with the above using |
#define OPAMP_NI_TO_VSS              0x0000 //Negative input connected to AVss
#define OPAMP_NI_TO_OAXINB           0x0008 //Negative input connected to OAxINB pin
#define OPAMP_NI_TO_OAXIND           0x0010 //Negative input connected to OAxIND pin
#define OPAMP_NI_TO_OUTPUT           0x0028 //Negative input connected to Op Amp's output (voltage follower)

////////////////////////////////////////////////////////////////// CLC
// CLC Functions: SETUP_CLCx(), CLCx_SETUP_INPUT(), 
//                CLCx_SETUP_GATE()
// CLC Prototypes:
_bif void setup_clc1(unsigned int16 mode);
_bif void setup_clc2(unsigned int16 mode);  
_bif void clc1_setup_input(unsigned int8 input, unsigned int8 selection);
_bif void clc2_setup_input(unsigned int8 input, unsigned int8 selection);  
_bif void clc1_setup_gate(unsigned int8 gate, unsigned int16 mode);
_bif void clc2_setup_gate(unsigned int8 gate, unsigned int16 mode);  
// Constants used in SETUP_CLCx() are:
#define CLC_ENABLED                         0x8000
#define CLC_DISABLED                        0
#define CLC_OUTPUT                          0x0080
#define CLC_INT_L_TO_H                      0x0800
#define CLC_INT_H_TO_L                      0x0400
#define CLC_OUTPUT_INVERTED                 0x0020
// One of the following may be OR'ed in with the above using |
#define CLC_MODE_AND_OR                     0x0000
#define CLC_MODE_OR_XOR                     0x0001
#define CLC_MODE_AND                        0x0002
#define CLC_MODE_SR_LATCH                   0x0003
#define CLC_MODE_1_INPUT_D_FLIP_FLOP        0x0004
#define CLC_MODE_2_INPUT_D_FLIP_FLOP        0x0005
#define CLC_MODE_JK_FLIP_FLOP               0x0006
#define CLC_MODE_1_INPUT_TRANSPARENT_LATCH  0x0007

// Constants used in CLCx_SETUP_INPUT() second param are: (first param is input 1-4)
#define CLC_INPUT_0                         0
#define CLC_INPUT_1                         0x01
#define CLC_INPUT_2                         0x02
#define CLC_INPUT_3                         0x03
#define CLC_INPUT_4                         0x04
#define CLC_INPUT_5                         0x05
#define CLC_INPUT_6                         0x06
#define CLC_INPUT_7                         0x07

// Constants used in CLCx_SETUP_GATE() second param are: (first param is gate 1-4)
#define CLC_GATE_AND                        0x155
#define CLC_GATE_NAND                       0x055
#define CLC_GATE_NOR                        0x1AA
#define CLC_GATE_OR                         0x0AA
#define CLC_GATE_CLEAR                      0
#define CLC_GATE_SET                        0x100

#bit LC1OUT = getenv("SFR:CLC1CONL").6
#bit LC2OUT = getenv("SFR:CLC2CONL").6  

////////////////////////////////////////////////////////////////// BIF
// Built In Functions Prototypes
//
// Math Prototypes:
_bif signed int8 abs(signed int8 x);
_bif signed int16 abs(signed int16 x);
_bif signed int32 abs(signed int32 x);
_bif float32 abs(float32 x);
_bif unsigned int16 _mul(unsigned int8, unsigned int8);
_bif signed int16 _mul(signed int8, signed int8);
_bif unsigned int32 _mul(unsigned int16, unsigned int16);
_bif signed int32 _mul(signed int16, signed int16);
_bif signed int48 abs(signed int48 x);
_bif signed int64 abs(signed int64 x);
_bif float48 abs(float48 x);
_bif float64 abs(float64 x);
_bif unsigned int64 _mul(unsigned int32, unsigned int32);
_bif signed int64 _mul(signed int32, signed int32);
_bif unsigned int64 _mul(unsigned int48, unsigned int48);
_bif signed int64 _mul(signed int48, signed int48);

// Memory Manipulation Prototypes:
_bif void strcpy(char* dest, char* src);
_bif void strcopy(char* dest, char* src);
_bif void memset(unsigned int8* destination, unsigned int8 value, unsigned int16 num);
_bif void memcpy(unsigned int8* destination, unsigned int8* source, unsigned int16 num);

// Data Manipulators Prototypes:
_bif int1 shift_left(unsigned int8* address, unsigned int8 bytes, int1 value);
_bif int1 shift_right(unsigned int8* address, unsigned int8 bytes, int1 value);
_bif void rotate_left(unsigned int8* address, unsigned int8 bytes);
_bif void rotate_right(unsigned int8* address, unsigned int8 bytes);
_bif void swap(unsigned int8 value);
_bif unsigned int8 make8(unsigned int16 var, unsigned int8 offset);
_bif unsigned int8 make8(unsigned int32 var, unsigned int8 offset);
_bif unsigned int16 make16(unsigned int8 varhigh, unsigned int8 varlow);
_bif unsigned int32 make32(unsigned int16 var1);
_bif unsigned int32 make32(unsigned int16 var1, unsigned int16 var2);
_bif unsigned int32 make32(unsigned int16 var1, unsigned int8 var2);
_bif unsigned int32 make32(unsigned int16 var1, unsigned int8 var2, unsigned int8 var3);
_bif unsigned int32 make32(unsigned int8 var1);
_bif unsigned int32 make32(unsigned int8 var1, unsigned int8 var2);
_bif unsigned int32 make32(unsigned int8 var1, unsigned int8 var2, unsigned int8 var3);
_bif unsigned int32 make32(unsigned int8 var1, unsigned int8 var2, unsigned int8 var3, unsigned int8 var4);
_bif unsigned int32 make32(unsigned int8 var1, unsigned int16 var2);
_bif unsigned int32 make32(unsigned int8 var1, unsigned int16 var2, unsigned int8 var3);
_bif unsigned int32 make32(unsigned int8 var1, unsigned int8 var2, unsigned int16 var3);
_bif void bit_set(unsigned int8 var, unsigned int8 bit);
_bif void bit_set(unsigned int16 var, unsigned int8 bit);
_bif void bit_set(unsigned int32 var, unsigned int8 bit);
_bif void bit_clear(unsigned int8 var, unsigned int8 bit);
_bif void bit_clear(unsigned int16 var, unsigned int8 bit);
_bif void bit_clear(unsigned int32 var, unsigned int8 bit);
_bif int1 bit_test(unsigned int8 var, unsigned int8 bit);
_bif int1 bit_test(unsigned int16 var, unsigned int8 bit);
_bif int1 bit_test(unsigned int32 var, unsigned int8 bit);
_bif void bit_set(unsigned int48 var, unsigned int8 bit);
_bif void bit_set(unsigned int64 var, unsigned int8 bit);
_bif void bit_clear(unsigned int48 var, unsigned int8 bit);
_bif void bit_clear(unsigned int64 var, unsigned int8 bit);
_bif int1 bit_test(unsigned int48 var, unsigned int8 bit);
_bif int1 bit_test(unsigned int64 var, unsigned int8 bit);
_bif unsigned int8 bit_first(int1 value, unsigned int16 var);
_bif unsigned int8 bit_last(int16 var);
_bif unsigned int8 bit_last(int1 value, int16 var);

// #use delay() Prototypes:
_bif void delay_cycles(unsigned int16 count);
_bif void delay_ms(unsigned int16 time);
_bif void delay_us(unsigned int16 time);

// #use rs232() Prototypes:
_bif void putchar(char cdata);
_bif void putchar(char cdata, unsigned int8 stream);
_bif void puts(char* string);
_bif void puts(char* string, unsigned int8 stream);
_bif char getch(void);
_bif char getch(unsigned int8 stream);
_bif void gets(char* string);
_bif void gets(char* string, unsigned int8 stream);
_bif int1 kbhit(void);
_bif int1 kbhit(unsigned int8 stream);
_bif void printf(char* string, ...);
_bif void fprintf(unsigned int8 stream, char* string, ...);
_bif void putc_send(void);
_bif void fputc_send(unsigned int8 stream);
_bif int1 rcv_buffer_full(void);
_bif int1 rcv_buffer_full(unsigned int8 stream);
_bif unsigned int16 rcv_buffer_bytes(void);
_bif unsigned int16 rcv_buffer_bytes(unsigned int8 stream);
_bif int1 tx_buffer_full(void);
_bif int1 tx_buffer_full(unsigned int8 stream);
_bif unsigned int16 tx_buffer_bytes(void);
_bif unsigned int16 tx_buffer_bytes(unsigned int8 stream);

// #use i2c() Prototypes:
_bif unsigned int8 i2c_read(void);
_bif unsigned int8 i2c_read(unsigned int8 stream);
_bif unsigned int8 i2c_read(unsigned int8 stream, int1 ack);
_bif int1 i2c_write(unsigned int8 data);
_bif int1 i2c_write(unsigned int8 stream, unsigned int8 data);
_bif void i2c_start(void);
_bif void i2c_start(unsigned int8 stream);
_bif void i2c_start(unsigned int8 stream, unsigned int8 restart);
_bif void i2c_stop(void);
_bif void i2c_stop(unsigned int8 stream);
_bif int8 i2c_isr_state(void);
_bif void i2c_slaveaddr(unsigned int8 addr);
_bif void i2c_slaveaddr(unsigned int8 stream, unsigned int8 addr);
_bif int1 i2c_poll(void);
_bif int1 i2c_poll(unsigned int8 stream);
_bif void i2c_init(unsigned int32 baud);
_bif void i2c_init(unsigned int8 stream, unsigned int32 baud);

// #use spi() Prototypes:
_bif unsigned int8 spi_xfer(void);
_bif unsigned int16 spi_xfer(void);
_bif unsigned int32 spi_xfer(void);
_bif unsigned int8 spi_xfer(unsigned int8 data);
_bif unsigned int16 spi_xfer(unsigned int16 data);
_bif unsigned int32 spi_xfer(unsigned int32 data);
_bif unsigned int8 spi_xfer(unsigned int8 stream, unsigned int8 data);
_bif unsigned int16 spi_xfer(unsigned int8 stream, unsigned int16 data);
_bif unsigned int32 spi_xfer(unsigned int8 stream, unsigned int32 data);
_bif unsigned int8 spi_xfer(unsigned int8 stream, unsigned int8 data, unsigned int8 bits);
_bif unsigned int16 spi_xfer(unsigned int8 stream, unsigned int16 data, unsigned int8 bits);
_bif unsigned int32 spi_xfer(unsigned int8 stream, unsigned int32 data, unsigned int8 bits);
_bif void spi_init(unsigned int32 baud);
_bif void spi_init(unsigned int8 stream, unsigned int32 baud);
_bif void spi_speed(unsigned int32 baud);
_bif void spi_speed(unsigned int8 stream, unsigned int32 baud);
_bif void spi_speed(unsigned int8 stream, unsigned int32 baud, unsigned int32 clock);
_bif void spi_prewrite(unsigned int8 data);
_bif void spi_prewrite(unsigned int16 data);
_bif void spi_prewrite(unsigned int32 data);
_bif void spi_prewrite(unsigned int8, unsigned int8 data);
_bif void spi_prewrite(unsigned int8, unsigned int16 data);
_bif void spi_prewrite(unsigned int8, unsigned int32 data);
_bif unsigned int8 spi_xfer_in(void);
_bif unsigned int16 spi_xfer_in(void);
_bif unsigned int32 spi_xfer_in(void);
_bif unsigned int8 spi_xfer_in(unsigned int8 bits);
_bif unsigned int16 spi_xfer_in(unsigned int8 bits);
_bif unsigned int32 spi_xfer_in(unsigned int8 bits);
_bif unsigned int8 spi_xfer_in(unsigned int8 stream, unsigned int8 bits);
_bif unsigned int16 spi_xfer_in(unsigned int8 stream, unsigned int8 bits);
_bif unsigned int32 spi_xfer_in(unsigned int8 stream, unsigned int8 bits);

// #use rtos() Prototypes:
_bif void rtos_run(void);
_bif void rtos_yield(void);
_bif void rtos_enable(unsigned int8 task);
_bif void rtos_disable(unsigned int8 task);
_bif void rtos_terminate(void);
_bif void rtos_await(int1 flag);
_bif void rtos_wait(unsigned int8 sem);
_bif void rtos_signal(unsigned int8 sem);
_bif void rtos_msg_send(unsigned int8 task, unsigned int8 msg);
_bif unsigned int8 rtos_msg_read(void);
_bif unsigned int8 rtos_msg_poll(void);
_bif int1 rtos_overrun(unsigned int8 task);
_bif void rtos_stats(unsigned int8 task, unsigned int8* stat);

// #use timer() Prototypes:
_bif unsigned int8 get_ticks(void);
_bif unsigned int16 get_ticks(void);
_bif unsigned int32 get_ticks(void);
_bif unsigned int64 get_ticks(void);
_bif unsigned int8 get_ticks(unsigned int8 stream);
_bif unsigned int16 get_ticks(unsigned int8 stream);
_bif unsigned int32 get_ticks(unsigned int8 stream);
_bif unsigned int64 get_ticks(unsigned int8 stream);
_bif void set_ticks(unsigned int8 value);
_bif void set_ticks(unsigned int16 value);
_bif void set_ticks(unsigned int32 value);
_bif void set_ticks(unsigned int64 value);
_bif void set_ticks(unsigned int8 stream, unsigned int8 value);
_bif void set_ticks(unsigned int8 stream, unsigned int16 value);
_bif void set_ticks(unsigned int8 stream, unsigned int32 value);
_bif void set_ticks(unsigned int8 stream, unsigned int64 value);

// #use pwm() Prototypes:
_bif void pwm_on(void);
_bif void pwm_on(unsigned int8 stream);
_bif void pwm_off(void);
_bif void pwm_off(unsigned int8 stream);
_bif void pwm_set_duty(unsigned int16 duty);
_bif void pwm_set_duty(unsigned int8 stream, unsigned int16 duty);
_bif void pwm_set_duty_percent(unsigned int16 percent);
_bif void pwm_set_duty_percent(unsigned int8 stream, unsigned int16 percent);
_bif void pwm_set_frequency(unsigned int32 frequency);
_bif void pwm_set_frequency(unsigned int8 stream, unsigned int32 frequency);

// #use capture() Prototypes:
_bif unsigned int16 get_capture_time(void);
_bif unsigned int16 get_capture_time(unsigned int8 stream);
_bif int1 get_capture_event(void);
_bif int1 get_capture_event(unsigned int8 stream);

// Enviroment Prototypes:
//_bif unsigned int8 getenv(char* cstring);

// Address Prototypes:
#ifndef __ADDRESS__
 typedef unsigned int32 __ADDRESS__;
#endif
_bif void goto_address(__ADDRESS__ address);
_bif __ADDRESS__ label_address(__ADDRESS__ label);

// Program Memory Prototypes:
_bif void read_program_memory(__ADDRESS__ address, unsigned int8* dataptr, unsigned int16 count);
_bif void erase_program_memory(__ADDRESS__ address);
_bif void write_program_memory(__ADDRESS__ address, unsigned int8* dataptr, unsigned int16 count);
_bif void read_configuration_memory(unsigned int8* dataptr, unsigned int8 count);
_bif void write_configuration_memory(unsigned int8* dataptr, unsigned int8 count);

// EEPROM Prototypes:
#ifndef __EEADDRESS__
 #if getenv("DATA_EEPROM")>=0x100
  typedef unsigned int16 __EEADDRESS__;
 #else
  typedef unsigned int8 __EEADDRESS__;
 #endif
#endif
_bif unsigned int16 read_eeprom(__EEADDRESS__ address);
_bif unsigned int16 read_eeprom(__EEADDRESS__ address, unsigned int8 bytes);
_bif void read_eeprom(__EEADDRESS__ address, unsigned int8* dataptr, unsigned int16 bytes);
_bif void write_eeprom(__EEADDRESS__ address, unsigned int16 value);
_bif void write_eeprom(__EEADDRESS__ address, unsigned int8* dataptr, unsigned int16 bytes);

// #use touchpad() Prototypes:
_bif void touchpad_state(unsigned int8 state);
_bif char touchpad_getc(void);
_bif int1 touchpad_hit(void);
////////////////////////////////////////////////////////////////// INT
// Interrupt Functions: ENABLE_INTERRUPTS(), DISABLE_INTERRUPTS(),
//                      CLEAR_INTERRUPT(), INTERRUPT_ACTIVE(),
//                      EXT_INT_EDGE()
// INT Prototypes:
_bif void enable_interrupts(unsigned int16 interrupt);
_bif void disable_interrupts(unsigned int16 interrupt);
_bif void clear_interrupt(unsigned int16 interrupt);
_bif int1 interrupt_active(unsigned int16 interrupt);
_bif int1 interrupt_enabled(unsigned int16 interrupt);
_bif void ext_int_edge(unsigned int8 source, unsigned int8 edge);
_bif void jump_to_isr(unsigned int16 address);
// Constants used in EXT_INT_EDGE() are:
#define L_TO_H              0x40
#define H_TO_L                 0
//
// Constants used in other interrupt functions are:
#define INTR_GLOBAL               0x400
#define GLOBAL                    0x400  // For compatibility with PIC16/18
#define INTR_NORMAL               0x100	
#define INTR_ALTERNATE            0x200 
#define INTR_LEVEL0               0x500
#define INTR_LEVEL1               0x501
#define INTR_LEVEL2               0x502
#define INTR_LEVEL3               0x503
#define INTR_LEVEL4               0x504
#define INTR_LEVEL5               0x505
#define INTR_LEVEL6               0x506
#define INTR_LEVEL7               0x507

#define INTR_CN_PIN              0x8000  // or in a PIN_xx constant

#define INT_OSCFAIL               1
#define INT_ADDRERR               2
#define INT_STACKERR              3
#define INT_MATHERR               4
#define INT_EXT0                  6
#define INT_TIMER1                9
#define INT_RDA                   76
#define INT_TBE                   77
#define INT_ADC1                  78
#define INT_NVM                   80
#define INT_CNI                   84
#define INT_EXT1                  85
#define INT_EXT2                  94
#define INT_RDA2                  95
#define INT_TBE2                  96
#define INT_UART1E                130
#define INT_UART2E                131
#define INT_COMP                  152
#define INT_RTC                   173
#define INT_CTMU                  176
#define INT_LVD                   179
#define INT_ULPWU                 192
#define INT_BUSCOL                229
#define INT_SSP                   230
#define INT_BUSCOL2               231
#define INT_CLC1                  233
#define INT_CLC2                  234
#define INT_DAC1                  235
#define INT_DAC2                  236
#define INT_CCP1                  237
#define INT_CCP2                  238
#define INT_CCP3                  239
#define INT_CCP4                  240
#define INT_CCP5                  241
#define INT_TIMERCCP1             242
#define INT_TIMERCCP2             243
#define INT_TIMERCCP3             244
#define INT_TIMERCCP4             245
#define INT_TIMERCCP5             246

#list
