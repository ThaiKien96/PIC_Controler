//////////// Standard Header file for the PIC24F04KL100 device ////////////////
///////////////////////////////////////////////////////////////////////////
////        (C) Copyright 1996, 2013 Custom Computer Services          ////
//// This source code may only be used by licensed users of the CCS C  ////
//// compiler.  This source code may only be distributed to other      ////
//// licensed users of the CCS C compiler.  No other use, reproduction ////
//// or distribution is permitted without written permission.          ////
//// Derivative programs created using this software in object code    ////
//// form are not restricted in any way.                               ////
///////////////////////////////////////////////////////////////////////////
#device PIC24F04KL100

#nolist
//////// Program memory: 1408x24  Data RAM: 512  Stack: 31
//////// I/O: 20   Analog Pins: 0
//////// Fuses: WRTB,NOWRTB,BSSH1152,BSSS1152,NOBSS,WRT,NOWRT,PROTECT
//////// Fuses: NOPROTECT,FRC,FRC_PLL,PR,PR_PLL,SOSC,LPRC,LPRC_DIV,FRC
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
_bif unsigned int16 get_tris_a(void);  
_bif unsigned int16 get_tris_b(void);  
_bif void output_a(unsigned int16 value);  
_bif void output_b(unsigned int16 value);  
_bif unsigned int16 input_a(void);  
_bif unsigned int16 input_b(void);  
_bif int1 input_change_a(void);  
_bif int1 input_change_b(void);  
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

#define PIN_B4  5716
#define PIN_B8  5720
#define PIN_B9  5721
#define PIN_B14  5726
#define PIN_B15  5727

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

////////////////////////////////////////////////////////////////// Timer 2
// Timer Functions: SETUP_TIMER2, GET_TIMER2, SET_TIMER2
// Timer 2 Prototypes:
_bif void setup_timer2(unsigned int8 mode, unsigned int8 period, unsigned int8 postscale);
_bif unsigned int8 get_timer2(void);
_bif void set_timer2(unsigned int8 value);
// Constants used for SETUP_TIMER2() are:
#define T2_DISABLED         0x00
#define T2_DIV_BY_1         0x04
#define T2_DIV_BY_4         0x05
#define T2_DIV_BY_16        0x06

////////////////////////////////////////////////////////////////// Timer 3
// Timer Functions: SETUP_TIMER3, GET_TIMER3, SET_TIMER3
// Timer 3 Prototypes:
_bif void setup_timer3(unsigned int16 mode);
_bif unsigned int16 get_timer3(void);
_bif void set_timer3(unsigned int16 value);
// Constants used for SETUP_TIMER3() are:
//      (or (via |) together constants from each group)
#define T3_INTERNAL_FOSC        0x01
#define T3_INTERNAL_FOSC_DIV_2  0x41
#define T3_EXTERNAL_T3CK        0x81
#define T3_EXTERNAL_SOSC        0x89
#define T3_INTERNAL_LPRC        0xC1

#define T3_SYNC                 0x00
#define T2_NOSYNC               0x04

#define T3_DIV_BY_1             0x00
#define T3_DIV_BY_2             0x10
#define T3_DIV_BY_4             0x20
#define T3_DIV_BY_8             0x30

#define T3_GATE                 0x8000
#define T3_GATE_INVERTED        0xC000
#define T3_GATE_TOGGLE          0xA000
#define T3_GATE_SINGLE          0x9000
#define T3_GATE_TIMER2          0x8100
#define T3_GATE_COMP1           0x8200
#define T3_GATE_COMP2           0x8300

////////////////////////////////////////////////////////////////// CCP
// CCP Functions: SETUP_CCPx, SET_PWMx_DUTY
// CCP Variables: CCP_x_LOW, CCP_x_HIGH
// Constants used for SETUP_CCPx() are:
#define CCP_OFF                         0
#define CCP_COMPARE_INT_AND_TOGGLE      0x2
#define CCP_CAPTURE_FE                  0x4
#define CCP_CAPTURE_RE                  0x5
#define CCP_CAPTURE_DIV_4               0x6
#define CCP_CAPTURE_DIV_16              0x7
#define CCP_COMPARE_SET_ON_MATCH        0x8
#define CCP_COMPARE_CLR_ON_MATCH        0x9
#define CCP_COMPARE_INT                 0xA
#define CCP_COMPARE_RESET_TIMER         0xB
#define CCP_PWM                         0xC









// CCP1 Prototypes:
_bif void setup_ccp1(unsigned int32 mode);
_bif void setup_ccp1(unsigned int32 mode, unsigned int8 pwm);
_bif void set_pwm1_duty(unsigned int8 duty);

#byte   CCP_1_LOW   =                   getenv("SFR:CCPR1L")
#byte   CCP_1_HIGH  =                   getenv("SFR:CCPR1H")

// CCP2 Prototypes:
_bif void setup_ccp2(unsigned int32 mode);
_bif void setup_ccp2(unsigned int32 mode, unsigned int8 pwm);
_bif void set_pwm2_duty(unsigned int8 duty);

#byte   CCP_2_LOW   =                   getenv("SFR:CCPR2L")
#byte   CCP_2_HIGH  =                   getenv("SFR:CCPR2H")
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
#define INT_TIMER2                72
#define INT_TIMER3                73
#define INT_RDA                   76
#define INT_TBE                   77
#define INT_NVM                   80
#define INT_CNI                   84
#define INT_EXT1                  85
#define INT_EXT2                  94
#define INT_UART1E                130
#define INT_COMP                  152
#define INT_LVD                   179
#define INT_ULPWU                 192
#define INT_CCP1                  226
#define INT_CCP2                  227
#define INT_BUSCOL                229
#define INT_SSP                   230

#list
