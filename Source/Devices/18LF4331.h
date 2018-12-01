//////////// Standard Header file for the PIC18LF4331 device ////////////////
///////////////////////////////////////////////////////////////////////////
////        (C) Copyright 1996, 2013 Custom Computer Services          ////
//// This source code may only be used by licensed users of the CCS C  ////
//// compiler.  This source code may only be distributed to other      ////
//// licensed users of the CCS C compiler.  No other use, reproduction ////
//// or distribution is permitted without written permission.          ////
//// Derivative programs created using this software in object code    ////
//// form are not restricted in any way.                               ////
///////////////////////////////////////////////////////////////////////////
#device PIC18LF4331

#nolist
//////// Program memory: 4096x16  Data RAM: 768  Stack: 31
//////// I/O: 36   Analog Pins: 9
//////// Data EEPROM: 256
//////// C Scratch area: 00   ID Location: 200000
//////// Fuses: LP,XT,HS,RC,EC,EC_IO,H4,RC_IO,INTRC_IO,INTRC,RC,RC,NOFCMEN
//////// Fuses: FCMEN,NOIESO,IESO,PUT,NOPUT,NOBROWNOUT,BROWNOUT,BORV45
//////// Fuses: BORV42,BORV27,BORV20,NOWDT,WDT,WDT1,WDT2,WDT4,WDT8,WDT16
//////// Fuses: WDT32,WDT64,WDT128,WDT256,WDT512,WDT1024,WDT2048,WDT4096
//////// Fuses: WDT8192,WDT16384,WDT32768,WINEN,NOWINEN,PWMPIN,NOPWMPIN
//////// Fuses: LPOL_LOW,LPOL_HIGH,HPOL_LOW,HPOL_HIGH,T1STANDARD,T1LOWPOWER
//////// Fuses: FLTAD4,FLTAC1,SSP_RD,SSP_RC,PWM4D5,PWM4B5,EXCLKD0,EXCLKC3
//////// Fuses: NOMCLR,MCLR,NOSTVREN,STVREN,NOLVP,LVP,DEBUG,NODEBUG,PROTECT
//////// Fuses: NOPROTECT,CPB,NOCPB,CPD,NOCPD,WRT,NOWRT,WRTC,NOWRTC,WRTB
//////// Fuses: NOWRTB,WRTD,NOWRTD,EBTR,NOEBTR,NOEBTRB
//////// 
#if (!defined(__PCH__)||defined(__ISNT_CCS__))
#define _bif
#define int8 char
#define int16 long
#define int32 long long
#define float32 float
#define int1 char

#endif
////////////////////////////////////////////////////////////////// I/O
// Discrete I/O Functions: SET_TRIS_x(), OUTPUT_x(), INPUT_x(),
//                         PORT_x_PULLUPS(), INPUT(),
//                         OUTPUT_LOW(), OUTPUT_HIGH(),
//                         OUTPUT_FLOAT(), OUTPUT_BIT()
// Discrete I/O Prototypes:
_bif void set_tris_a(int8 value);  
_bif void set_tris_b(int8 value);  
_bif void set_tris_c(int8 value);  
_bif void set_tris_d(int8 value);  
_bif void set_tris_e(int8 value);  
_bif int8 get_tris_a(void);  
_bif int8 get_tris_b(void);  
_bif int8 get_tris_c(void);  
_bif int8 get_tris_d(void);  
_bif int8 get_tris_e(void);  
_bif void output_a(int8 value);  
_bif void output_b(int8 value);  
_bif void output_c(int8 value);  
_bif void output_d(int8 value);  
_bif void output_e(int8 value);  
_bif int8 input_a(void);  
_bif int8 input_b(void);  
_bif int8 input_c(void);  
_bif int8 input_d(void);  
_bif int8 input_e(void);  
_bif int1 input_change_a(void);  
_bif int1 input_change_b(void);  
_bif int1 input_change_c(void);  
_bif int1 input_change_d(void);  
_bif int1 input_change_e(void);  
_bif int1 input(int16 pin);
_bif int1 input_state(int16 pin);
_bif void output_low(int16 pin);
_bif void output_high(int16 pin);
_bif void output_toggle(int16 pin);
_bif void output_bit(int16 pin, int1 level);
_bif void output_float(int16 pin);
_bif void output_drive(int16 pin);

// Constants used to identify pins in the above are:

#define PIN_A0  31744
#define PIN_A1  31745
#define PIN_A2  31746
#define PIN_A3  31747
#define PIN_A4  31748
#define PIN_A5  31749
#define PIN_A6  31750
#define PIN_A7  31751

#define PIN_B0  31752
#define PIN_B1  31753
#define PIN_B2  31754
#define PIN_B3  31755
#define PIN_B4  31756
#define PIN_B5  31757
#define PIN_B6  31758
#define PIN_B7  31759

#define PIN_C0  31760
#define PIN_C1  31761
#define PIN_C2  31762
#define PIN_C3  31763
#define PIN_C4  31764
#define PIN_C5  31765
#define PIN_C6  31766
#define PIN_C7  31767

#define PIN_D0  31768
#define PIN_D1  31769
#define PIN_D2  31770
#define PIN_D3  31771
#define PIN_D4  31772
#define PIN_D5  31773
#define PIN_D6  31774
#define PIN_D7  31775

#define PIN_E0  31776
#define PIN_E1  31777
#define PIN_E2  31778
#define PIN_E3  31779

////////////////////////////////////////////////////////////////// Useful defines
#define FALSE 0
#define TRUE 1

#define BYTE int8
#define BOOLEAN int1

#define getc getch
#define fgetc getch
#define getchar getch
#define putc putchar
#define fputc putchar
#define fgets gets
#define fputs puts

////////////////////////////////////////////////////////////////// Control
// Control Functions:  RESET_CPU(), SLEEP(), RESTART_CAUSE()
// Prototypes:
_bif int8 restart_cause(void);
_bif void reset_cpu(void);
_bif void sleep(void);
_bif void sleep(int8 type); 
// Constants returned from RESTART_CAUSE() are:
#define WDT_TIMEOUT       7    
#define MCLR_FROM_SLEEP  11    
#define MCLR_FROM_RUN    15    
#define NORMAL_POWER_UP  12    
#define BROWNOUT_RESTART 14    
#define WDT_FROM_SLEEP    3    
#define RESET_INSTRUCTION 0    

// Constants for calls to sleep() are:
#define SLEEP_FULL       0  // Default
#define SLEEP_IDLE       1  // Clock and peripherals don't stop

////////////////////////////////////////////////////////////////// Timer 0
// Timer 0 (AKA RTCC)Functions: SETUP_COUNTERS() or SETUP_TIMER_0(),
//                              SET_TIMER0() or SET_RTCC(),
//                              GET_TIMER0() or GET_RTCC()
// Timer 0 Prototypes:
_bif void setup_timer_0(int8 mode);
_bif void set_timer0(int16 value);     
_bif int16 get_timer0(void);           
_bif void setup_counters(int8 mode, int8 prescaler);
_bif void set_rtcc(int16 value);       
_bif int16 get_rtcc(void);             
// Constants used for SETUP_TIMER_0() are:
#define T0_INTERNAL   0   
#define T0_EXT_L_TO_H 32
#define T0_EXT_H_TO_L 48

#define T0_DIV_1      8
#define T0_DIV_2      0
#define T0_DIV_4      1
#define T0_DIV_8      2
#define T0_DIV_16     3
#define T0_DIV_32     4
#define T0_DIV_64     5
#define T0_DIV_128    6
#define T0_DIV_256    7

#define T0_OFF        0x80  

#define T0_8_BIT      0x40  

#define RTCC_INTERNAL   0      // The following are provided for compatibility
#define RTCC_EXT_L_TO_H 32     // with older compiler versions
#define RTCC_EXT_H_TO_L 48
#define RTCC_DIV_1      8
#define RTCC_DIV_2      0
#define RTCC_DIV_4      1
#define RTCC_DIV_8      2
#define RTCC_DIV_16     3
#define RTCC_DIV_32     4
#define RTCC_DIV_64     5
#define RTCC_DIV_128    6
#define RTCC_DIV_256    7
#define RTCC_OFF        0x80  
#define RTCC_8_BIT      0x40  

// Constants used for SETUP_COUNTERS() are the above
// constants for the 1st param and the following for
// the 2nd param:

////////////////////////////////////////////////////////////////// WDT
// Watch Dog Timer Functions: SETUP_WDT() or SETUP_COUNTERS() (see above)
//                            RESTART_WDT()
// WDT base is 4ms
// WDT Prototypes:
_bif void setup_wdt(int16 mode);
_bif void restart_wdt(void);
// Constants used for SETUP_WDT() are:
#define WDT_ON        0x100
#define WDT_OFF       0

#define WDT_4MS    0x300  
#define WDT_8MS    0x500  
#define WDT_16MS   0x700  
#define WDT_32MS   0x900  
#define WDT_64MS   0xB00  
#define WDT_128MS  0xD00  
#define WDT_256MS  0xF00  
#define WDT_512MS  0x1100  
#define WDT_1S     0x1300  
#define WDT_2S     0x1500  
#define WDT_4S     0x1700  
#define WDT_8S     0x1900  
#define WDT_16     0x1B00  
#define WDT_32S    0x1D00  
#define WDT_64S    0x1F00  
#define WDT_128S   0x2100  


////////////////////////////////////////////////////////////////// Timer 1
// Timer 1 Functions: SETUP_TIMER_1, GET_TIMER1, SET_TIMER1
// Timer 1 Prototypes:
_bif void setup_timer_1(int16 mode);
_bif int16 get_timer1(void);
_bif void set_timer1(int16 value);
// Constants used for SETUP_TIMER_1() are:
//      (or (via |) together constants from each group)
#define T1_DISABLED         0
#define T1_INTERNAL         0x85
#define T1_EXTERNAL         0x87
#define T1_EXTERNAL_SYNC    0x83

#define T1_CLK_OUT          8

#define T1_DIV_BY_1         0
#define T1_DIV_BY_2         0x10
#define T1_DIV_BY_4         0x20
#define T1_DIV_BY_8         0x30

////////////////////////////////////////////////////////////////// Timer 2
// Timer 2 Functions: SETUP_TIMER_2, GET_TIMER2, SET_TIMER2
// Timer 2 Prototypes:
_bif void setup_timer_2(int8 mode, int8 period, int8 postscale); 
_bif int8 get_timer2(void);
_bif void set_timer2(int8 value);
// Constants used for SETUP_TIMER_2() are:
#define T2_DISABLED         0
#define T2_DIV_BY_1         4
#define T2_DIV_BY_4         5
#define T2_DIV_BY_16        6 

////////////////////////////////////////////////////////////////// Timer 5
// Timer 5 Functions: SETUP_TIMER_5, GET_TIMER5, SET_TIMER5
// Timer 5 Prototypes:
_bif void setup_timer_5(int8 mode);
_bif int16 get_timer5(void);
_bif void set_timer5(int16 value);
// Constants used for SETUP_TIMER_5() are:
//      (or (via |) together constants from each group)
#define T5_DISABLED         0
#define T5_INTERNAL         0x01
#define T5_EXTERNAL         0x07
#define T5_EXTERNAL_SYNC    0x03

#define T5_DIV_BY_1         0
#define T5_DIV_BY_2         0x08
#define T5_DIV_BY_4         0x10
#define T5_DIV_BY_8         0x18

#define T5_ONE_SHOT         0x20

#define T5_DISABLE_SE_RESET 0x40

#define T5_ENABLE_DURING_SLEEP 0x80

////////////////////////////////////////////////////////////////// CCP
// CCP Functions: SETUP_CCPx, SET_PWMx_DUTY
// CCP Variables: CCP_x, CCP_x_LOW, CCP_x_HIGH
// CCP1 Prototypes:
_bif void setup_ccp1(int32 mode);
_bif void setup_ccp1(int32 mode, int8 pwm);
_bif void set_pwm1_duty(int16 value);
// Constants used for SETUP_CCPx() are:
#define CCP_OFF                         0
#define CCP_CAPTURE_FE                  4
#define CCP_CAPTURE_RE                  5
#define CCP_CAPTURE_DIV_4               6
#define CCP_CAPTURE_DIV_16              7
#define CCP_COMPARE_SET_ON_MATCH        8
#define CCP_COMPARE_CLR_ON_MATCH        9
#define CCP_COMPARE_INT                 0xA
#define CCP_COMPARE_INT_AND_TOGGLE      0x2       
#define CCP_COMPARE_RESET_TIMER         0xB
#define CCP_PWM                         0xC
#define CCP_PWM_PLUS_1                  0x1c  
#define CCP_PWM_PLUS_2                  0x2c
#define CCP_PWM_PLUS_3                  0x3c
//#define CCP_USE_TIMER3                0x100  OBSOLETE, SEE TIMER-3     
#word   CCP_1       =                   getenv("SFR:CCPR1L")
#byte   CCP_1_LOW   =                   getenv("SFR:CCPR1L")
#byte   CCP_1_HIGH  =                   getenv("SFR:CCPR1H")

// CCP2 Prototypes:
_bif void setup_ccp2(int32 mode);
_bif void setup_ccp2(int32 mode, int8 pwm);
_bif void set_pwm2_duty(int16 value);
#word   CCP_2       =                   getenv("SFR:CCPR2L")
#byte   CCP_2_LOW   =                   getenv("SFR:CCPR2L")
#byte   CCP_2_HIGH  =                   getenv("SFR:CCPR2H")
////////////////////////////////////////////////////////////////// SPI
// SPI Functions: SETUP_SPI, SPI_WRITE, SPI_READ, SPI_DATA_IN
// SPI Prototypes:
_bif void setup_spi(int32 mode);
_bif void spi_write(int8 value);
_bif int8 spi_read(void);
_bif int8 spi_read(int8 value);
_bif int1 spi_data_in(void);
_bif void setup_spi2(int32 mode);  
_bif void spi_write2(int8 value);  
_bif int8 spi_read2(void);  
_bif int8 spi_read2(int8 value);  
_bif int1 spi_data_in2(void);  
// Constants used in SETUP_SPI() are:
#define SPI_DISABLED             0x00
#define SPI_MASTER               0x20
#define SPI_SLAVE                0x24
#define SPI_SCK_IDLE_HIGH        0x10
#define SPI_SCK_IDLE_LOW         0x00
#define SPI_CLK_DIV_4            0x00
#define SPI_CLK_DIV_16           0x01
#define SPI_CLK_DIV_64           0x02
#define SPI_CLK_T2               0x03
#define SPI_SS_DISABLED          0x01

#define SPI_XMIT_L_TO_H          0x4000
#define SPI_XMIT_H_TO_L          0x0000

#define SPI_SAMPLE_AT_MIDDLE     0x0000
#define SPI_SAMPLE_AT_END        0x8000

//The following are provided for compatibility
#define SPI_L_TO_H       SPI_SCK_IDLE_LOW
#define SPI_H_TO_L       SPI_SCK_IDLE_HIGH

////////////////////////////////////////////////////////////////// UART
// UART Prototypes:
_bif void setup_uart(int32 baud);
_bif void setup_uart(int32 baud, int8 stream);
_bif void setup_uart(int32 baud, int8 stream, int32 clock);
_bif void set_uart_speed(int32 baud);
_bif void set_uart_speed(int32 baud, int8 stream);
_bif void set_uart_speed(int32 baud, int8 stream, int32 clock);
// Constants used in setup_uart() are:
// FALSE - Turn UART off
// TRUE  - Turn UART on
#define UART_ADDRESS           2
#define UART_DATA              4
#define UART_AUTODETECT        8
#define UART_AUTODETECT_NOWAIT 9
#define UART_WAKEUP_ON_RDA     10
#define UART_SEND_BREAK        13
////////////////////////////////////////////////////////////////// VREF
// LVD Prototypes:
_bif void setup_low_volt_detect(int8 mode);
// Constants used in setup_low_volt_detect() are:
#define LVD_LVDIN   0x1F
#define LVD_42 0x1E
#define LVD_39 0x1D
#define LVD_38 0x1C
#define LVD_36 0x1B
#define LVD_34 0x1A
#define LVD_33 0x19
#define LVD_31 0x18
#define LVD_28 0x17
#define LVD_27 0x16
#define LVD_26 0x15
#define LVD_24 0x14
#define LVD_23 0x13
#define LVD_21 0x12

////////////////////////////////////////////////////////////////// QEI
// QEI Functions: setup_qei(), qei_set_count(), qei_get_count(),
//                qei_status()
// QEI Prototypes:
_bif void setup_qei(int8 mode);
_bif void setup_qei(int8 mode, int8 filter);
_bif void setup_qei(int8 mode, int8 filter, int16 max_count);
_bif void qei_set_count(int16 value);
_bif int16 qei_get_count(void);
_bif int16 qei_get_count(int8 which);
_bif int8 qei_status(void);
// Constants used in setup_qei() first param are:
#define QEI_DISABLED                 0x00
#define QEI_MODE_X2_RESET_WITH_INDX  0x04
#define QEI_MODE_X2_RESET_ON_MATCH   0x08
#define QEI_MODE_X4_RESET_WITH_INDX  0x14
#define QEI_MODE_X4_RESET_ON_MATCH   0x18
#define QEI_VELOCITY_MODE_ENABLED    0x00
#define QEI_VELOCITY_MODE_DISABLED   0x80
#define QEI_VELOCITY_PULSE_DIV_1     0x00
#define QEI_VELOCITY_PULSE_DIV_4     0x01
#define QEI_VELOCITY_PULSE_DIV_16    0x02
#define QEI_VELOCITY_PULSE_DIV_64    0x03

// Constants used in setup_qei() second param are:  // Third param is MAXCOUNT
#define QEI_FILTER_DISABLED          0x00
#define QEI_FILTER_ENABLE_T5CKI      0x40
#define QEI_FILTER_ENABLE_QEB        0x20
#define QEI_FILTER_ENABLE_QEA        0x10
#define QEI_FILTER_ENABLE_INDX       0x08
#define QEI_FILTER_DIV_1             0x00
#define QEI_FILTER_DIV_2             0x01
#define QEI_FILTER_DIV_4             0x02
#define QEI_FILTER_DIV_16            0x03
#define QEI_FILTER_DIV_32            0x04
#define QEI_FILTER_DIV_64            0x05
#define QEI_FILTER_DIV_128           0x06

//Constants used in qei_get_count() are:
#define QEI_GET_POSITION_COUNT          0
#define QEI_GET_VELOCITY_COUNT          1

// Constants returned from qei_status() are:
#define QEI_ERROR                    0x40
#define QEI_FORWARD                  0x20


////////////////////////////////////////////////////////////////// INTERNAL RC
// Oscillator Prototypes:
_bif int8 setup_oscillator(int8 mode);
_bif int8 setup_oscillator(int8 mode, signed int8 tune);
// Constants used in setup_oscillator() are:
#define OSC_31KHZ   0
#define OSC_125KHZ  0x10
#define OSC_250KHZ  0x20
#define OSC_500KHZ  0x30
#define OSC_1MHZ    0x40
#define OSC_2MHZ    0x50
#define OSC_4MHZ    0x60
#define OSC_8MHZ    0x70
// The following may be OR'ed in with the above using |
#define OSC_TIMER1  1
#define OSC_INTRC   2
#define OSC_NORMAL  0
// The following may be OR'ed in with the above using |
#define OSC_IDLE_MODE  0x80
// A second optional parameter may be used with this part to fine
// tune the speed (signed int,-32 to 31)
// Result may be (ignore all other bits)
#define OSC_STATE_STABLE 4
#define OSC_STATE_EXT_RUNNING 8

////////////////////////////////////////////////////////////////// POWER PWM
// Power PWM Functions: SETUP_POWER_PWM(), SET_POWER_PWMx_DUTY(), 
//                      SETUP_POWER_PWM_PINS(), SETUP_POWER_PWM_FAULTS()
// Power PWM Prototypes:
_bif void setup_power_pwm(int32 mode, int8 postscale, int16 time_base, int16 period, int8 compare, int8 compare_postscale, int8 dead_time);
_bif void set_power_pwm0_duty(int16 duty);
_bif void set_power_pwm2_duty(int16 duty);
_bif void set_power_pwm4_duty(int16 duty);
_bif void set_power_pwm6_duty(int16 duty);
_bif void setup_power_pwm_pins(int8 module0, int8 module1, int8 module2, int8 module3);
_bif void setup_power_pwm_faults(int8 mode);
// Constants used for SETUP_POWER_PWM() are:
#define PWM_CLOCK_DIV_4   0x00
#define PWM_CLOCK_DIV_16  0x04
#define PWM_CLOCK_DIV_64  0x08
#define PWM_CLOCK_DIV_128 0x0C

#define PWM_DISABLED      0x0000
#define PWM_FREE_RUN      0x8000
#define PWM_SINGLE_SHOT   0x8001
#define PWM_UP_DOWN       0x8002
#define PWM_UP_DOWN_INT   0x8003

#define PWM_OVERRIDE_SYNC  0x10000

#define PWM_UP_TRIGGER     0x00000
#define PWM_DOWN_TRIGGER   0x80000

#define PWM_DEAD_CLOCK_DIV_2  0x000000
#define PWM_DEAD_CLOCK_DIV_4  0x100000
#define PWM_DEAD_CLOCK_DIV_8  0x200000
#define PWM_DEAD_CLOCK_DIV_16 0x300000

// Constants used for SET_POWER_PWMx_DUTY() are:
#define PWM_UPDATE_DISABLE 0x20000
#define PWM_UPDATE_ENABLE  0x00000

// Constants used for SETUP_POWER_PWM_PINS() are:
#define PWM_PINS_DISABLED  0
#define PWM_ODD_ON         1
#define PWM_BOTH_ON        2
#define PWM_COMPLEMENTARY  3

// Constants used for SETUP_POWER_PWM_FAULTS() are:
#define PWM_ENABLE_FLTA          0x01
#define PWM_AUTO_CLEAR_FLTA      0x02
#define PWM_FLTA_FLTB_ALL        0x08  
#define PWM_ENABLE_FLTB          0x10  
#define PWM_AUTO_CLEAR_FLTB      0x20  
#define PWM_FAULT_ON_BREAKPOINT  0x80

#bit FLTA=getenv("BIT:FLTAS")
#bit FLTB=getenv("BIT:FLTBS")  


////////////////////////////////////////////////////////////////// ADC
// ADC Functions: SETUP_ADC(), SETUP_ADC_PORTS() (aka SETUP_PORT_A),
//                SET_ADC_CHANNEL(), READ_ADC()
// ADC Prototypes:
_bif void setup_adc(int32 mode);
_bif int8 read_adc(void);
_bif int8 read_adc(int8 mode);
_bif int16 read_adc(void);
_bif int16 read_adc(int8 mode);
_bif int1 adc_done(void);
// Constants used for SETUP_ADC() are:
#define ADC_OFF                      0  // ADC Off
#define ADC_CLOCK_DIV_2      0x1000000
#define ADC_CLOCK_DIV_4         0x0400
#define ADC_CLOCK_DIV_8         0x0100
#define ADC_CLOCK_DIV_16        0x0500
#define ADC_CLOCK_DIV_32        0x0200
#define ADC_CLOCK_DIV_64        0x0600
#define ADC_CLOCK_INTERNAL      0x0700  // Internal 2-6us

// The following may be OR'ed in with the above using |
#define ADC_TAD_MUL_0           0x0000
#define ADC_TAD_MUL_2           0x0800
#define ADC_TAD_MUL_4           0x1000
#define ADC_TAD_MUL_6           0x1800
#define ADC_TAD_MUL_8           0x2000
#define ADC_TAD_MUL_10          0x2800
#define ADC_TAD_MUL_12          0x3000
#define ADC_TAD_MUL_16          0x3800
#define ADC_TAD_MUL_20          0x4000
#define ADC_TAD_MUL_24          0x4800
#define ADC_TAD_MUL_28          0x5000
#define ADC_TAD_MUL_32          0x5800
#define ADC_TAD_MUL_36          0x6000
#define ADC_TAD_MUL_40          0x6800
#define ADC_TAD_MUL_48          0x7000
#define ADC_TAD_MUL_64          0x7800

// One of the following may be OR'ed in with the above using |
#define ADC_SINGLE_SHOT_A	    0x00 // Single conversion of Channels A
#define ADC_SINGLE_SHOT_B       0x04 // Single conversion of Channels B
#define ADC_SINGLE_SHOT_C       0x08 // Single conversion of Channels C 
#define ADC_SINGLE_SHOT_D       0x0C // Single conversion of Channels D

#define ADC_SINGLE_SHOT_A_B     0x10 // Single conversion of Channels A and B, sampling done sequentially 
#define ADC_SINGLE_SHOT_A_B_C_D 0x14 // Single conversion of Channels A, B, C and D, sampling done sequentially
#define ADC_SINGLE_SHOT_AB      0x18 // Single conversion of Channels A and B, sampling done simultaneously
#define ADC_SINGLE_SHOT_AB_CD   0x1C // Single conversion of Channels A, B, C and D, sampling A and B simultaneously then C and D simultaneously

#define ADC_CONT_A              0x20 // Channel A converted continuously
#define ADC_CONT_B              0x24 // Channel A converted continuously
#define ADC_CONT_C              0x28 // Channel A converted continuously
#define ADC_CONT_D              0x2C // Channel A converted continuously

#define ADC_CONT_A_B            0x30 // Channels A and B converted continuously, sampling done sequentially
#define ADC_CONT_A_B_C_D        0x34 // Channels A, B, C and D converted continuously, sampling done sequentially
#define ADC_CONT_AB             0x38 // Channels A and B converted continuously, sampling done simultaneously
#define ADC_CONT_AB_CD          0x3C // Channels A, B, C and D converted continuously, sampling A and B simultaneously then C and D simultaneously

// The following may be OR'ed in with the above using |
#define ADC_FIFO_DISABLED       0x00000000 // ADC FIFO Buffer not used
#define ADC_FIFO_ENABLED        0x80000000 // ADC FIFO Buffer used, should be used if converting more then one channel or if continuous conversion 
                                           // mode is used on a single channel and interrupt is set to anything other then every time 

// One of the following may be OR'ed in with the above using |
#define ADC_WHEN_INT0           0x010000
#define ADC_WHEN_TIMER5         0x020000
#define ADC_WHEN_IC1            0x040000
#define ADC_WHEN_CCP2           0x080000
#define ADC_WHEN_PPWM           0x100000

// One of the following may be OR'ed in with the above using |
#define ADC_INT_EVERY_TIME      0x000000 // These options are 
#define ADC_INT_EVERY_OTHER     0x400000 // ignored in single
#define ADC_INT_EVERY_FOUR      0x800000 // shot mode.

// This device allows 4 params to set_adc_channel to set the channel
// for each group A,B,C,D

//ADC Prototypes:
_bif void setup_adc_ports(int32 pins);
_bif void setup_adc_ports(int32 pins, int32 reference);
_bif void set_adc_channel(int8 channel);
// Constants used in SETUP_ADC_PORTS() are:
// First argument:
// OR together desired pins
#define sAN0            1       //| A0
#define sAN1            2       //| A1
#define sAN2            4       //| A2
#define sAN3            8       //| A3
#define sAN4            16      //| A4
#define sAN5            32      //| A5      
#define sAN6            64      //| E0      
#define sAN7            128     //| E1      
#define sAN8        0x10000     //| E2      
#define NO_ANALOGS      0       // None
#define ALL_ANALOG  0x100FF     // A0 A1 A2 A3 A4 A5 E0 E1 E2 

// Optional Second argument:
#define VSS_VDD               0x0000   //| Range 0-Vdd
#define VREF_VREF             0xC000   //| Range VrefL-VrefH
#define VSS_VREF              0x4000   //| Range 0-VrefH
#define VREF_VDD              0x8000   //| Range VrefL-Vdd

// Constants used in READ_ADC() are:
#define ADC_START_AND_READ     7   // This is the default if nothing is specified
#define ADC_START_ONLY         1
#define ADC_READ_ONLY          6
#define ADC_READ_ONLY_FROM_INT 4 

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

// Memory Manipulation Prototypes:
_bif int8 read_bank(int8 bank, int8 offset);
_bif void write_bank(int8 bank, int8 offset, int8 value);
_bif void strcpy(char* dest, char* src);
_bif void strcopy(char* dest, char* src);
_bif void memset(unsigned int8* destination, unsigned int8 value, unsigned int16 num);
_bif void memcpy(unsigned int8* destination, unsigned int8* source, unsigned int16 num);

// String Prototypes:
_bif char toupper(char cvalue);
_bif char tolower(char cvalue);
_bif void sprintf(char* string, char* cstring, ...);

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

// #use delay() Prototypes:
_bif void delay_cycles(unsigned int8 count);
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
_bif unsigned int8 get_ticks(unsigned int8 stream);
_bif unsigned int16 get_ticks(unsigned int8 stream);
_bif unsigned int32 get_ticks(unsigned int8 stream);
_bif void set_ticks(unsigned int8 value);
_bif void set_ticks(unsigned int16 value);
_bif void set_ticks(unsigned int32 value);
_bif void set_ticks(unsigned int8 stream, unsigned int8 value);
_bif void set_ticks(unsigned int8 stream, unsigned int16 value);
_bif void set_ticks(unsigned int8 stream, unsigned int32 value);

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
 #if defined(__PCM__) || define(__PCB__)
  typedef unsigned int16 __ADDRESS__;
 #else
  typedef unsigned int32 __ADDRESS__;
 #endif
#endif
_bif void goto_address(__ADDRESS__ address);
_bif __ADDRESS__ label_address(__ADDRESS__ label);

// Program Memory Prototypes:
_bif void read_program_memory(__ADDRESS__ address, unsigned int8* dataptr, unsigned int16 count);
_bif unsigned int16 read_program_eeprom(__ADDRESS__ address);
_bif void erase_program_eeprom(__ADDRESS__ address);
_bif void write_program_memory(__ADDRESS__ address, unsigned int8* dataptr, unsigned int16 count);
_bif void write_program_eeprom(__ADDRESS__ address, unsigned int16 data);

// EEPROM Prototypes:
#ifndef __EEADDRESS__
 #if getenv("DATA_EEPROM")>=0x100
  typedef unsigned int16 __EEADDRESS__;
 #else
  typedef unsigned int8 __EEADDRESS__;
 #endif
#endif
_bif unsigned int8 read_eeprom(__EEADDRESS__ address);
_bif void write_eeprom(__EEADDRESS__ address, unsigned int8 value);

////////////////////////////////////////////////////////////////// INT
// Interrupt Functions: ENABLE_INTERRUPTS(), DISABLE_INTERRUPTS(),
//                      CLEAR_INTERRUPT(), INTERRUPT_ACTIVE(),
//                      EXT_INT_EDGE()
// INT Prototypes:
_bif void enable_interrupts(int32 interrupt);
_bif void disable_interrupts(int32 interrupt);
_bif void clear_interrupt(int32 interrupt);
_bif int1 interrupt_active(int32 interrupt);
_bif int1 interrupt_enabled(int32 interrupt);
_bif void ext_int_edge(int8 source, int8 edge);
_bif void jump_to_irs(int16 address);
// Constants used in EXT_INT_EDGE() are:
#define L_TO_H              0x40
#define H_TO_L                 0
// Constants used in ENABLE/DISABLE_INTERRUPTS() are:
#define GLOBAL                    0xF2C0
#define PERIPH                    0xF240
#define INT_RTCC                  0x00F220
#define INT_TIMER0                0x00F220
#define INT_TIMER1                0x009D01
#define INT_TIMER2                0x009D02
#define INT_EXT_L2H               0x5000F210
#define INT_EXT_H2L               0x6000F210
#define INT_EXT                   0x00F210
#define INT_EXT1_L2H              0x5001F008
#define INT_EXT1_H2L              0x6001F008
#define INT_EXT1                  0x00F008
#define INT_EXT2_L2H              0x5002F010
#define INT_EXT2_H2L              0x6002F010
#define INT_EXT2                  0x00F010
#define INT_RB                    0x00FFF208
#define INT_AD                    0x009D40
#define INT_RDA                   0x009D20
#define INT_TBE                   0x009D10
#define INT_SSP                   0x009D08
#define INT_CCP1                  0x009D04
#define INT_CCP2                  0x00A001
#define INT_LOWVOLT               0x00A004
#define INT_EEPROM                0x00A010
#define INT_OSCF                  0x00A080
#define INT_PWMTB                 0x00A310
#define INT_IC3DR                 0x00A308
#define INT_IC2QEI                0x00A304
#define INT_IC1                   0x00A302
#define INT_TIMER5                0x00A301

#list