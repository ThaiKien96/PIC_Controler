//////////// Standard Header file for the PIC18LF1230 device ////////////////
///////////////////////////////////////////////////////////////////////////
////        (C) Copyright 1996, 2013 Custom Computer Services          ////
//// This source code may only be used by licensed users of the CCS C  ////
//// compiler.  This source code may only be distributed to other      ////
//// licensed users of the CCS C compiler.  No other use, reproduction ////
//// or distribution is permitted without written permission.          ////
//// Derivative programs created using this software in object code    ////
//// form are not restricted in any way.                               ////
///////////////////////////////////////////////////////////////////////////
#device PIC18LF1230

#nolist
//////// Program memory: 2048x16  Data RAM: 256  Stack: 31
//////// I/O: 16   Analog Pins: 4
//////// Data EEPROM: 128
//////// C Scratch area: 00   ID Location: 200000
//////// Fuses: LP,XT,HS,RC,EC,EC_IO,H4,RC_IO,INTRC_IO,INTRC,NOFCMEN,FCMEN
//////// Fuses: NOIESO,IESO,PUT,NOPUT,NOBROWNOUT,BROWNOUT_SW,BROWNOUT_NOSL
//////// Fuses: BROWNOUT,BORV45,BORV43,BORV27,BORV21,NOWDT,WDT,WDT1,WDT2
//////// Fuses: WDT4,WDT8,WDT16,WDT32,WDT64,WDT128,WDT256,WDT512,WDT1024
//////// Fuses: WDT2048,WDT4096,WDT8192,WDT16384,WDT32768,PWMPIN,NOPWMPIN
//////// Fuses: LPOL_LOW,LPOL_HIGH,HPOL_LOW,HPOL_HIGH,FLTAA7,FLTAA5,T1OSCB2
//////// Fuses: T1OSCA6,NOMCLR,MCLR,NOSTVREN,STVREN,BBSIZ256,BBSIZ512
//////// Fuses: NOXINST,XINST,DEBUG,NODEBUG,PROTECT,NOPROTECT,CPB,NOCPB,CPD
//////// Fuses: NOCPD,WRT,NOWRT,WRTC,NOWRTC,WRTB,NOWRTB,WRTD,NOWRTD,EBTR
//////// Fuses: NOEBTR,EBTRB,NOEBTRB
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
_bif int8 get_tris_a(void);  
_bif int8 get_tris_b(void);  
_bif void output_a(int8 value);  
_bif void output_b(int8 value);  
_bif int8 input_a(void);  
_bif int8 input_b(void);  
_bif int1 input_change_a(void);  
_bif int1 input_change_b(void);  
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
////////////////////////////////////////////////////////////////// COMP
// Comparator Variables: C1OUT, C2OUT, C3OUT
// Comparator Prototypes:
_bif void setup_comparator(int32 mode);
// Constants used in setup_comparator() are:
//
#define NC_NC_NC   0x00
//or any of the following
#define CP1_A0_VREF 0x21
#define CP2_B3_VREF 0x42
#define CP1_B2_VREF 0x84
#define CP1_INVERT 0x01
#define CP2_INVERT 0x02
#define CP3_INVERT 0x04

#bit C1OUT = 0xFB4.5
#bit C2OUT = 0xFB4.6
#bit C3OUT = 0xFB4.7

////////////////////////////////////////////////////////////////// VREF
// VREF Prototypes:
_bif void setup_vref(int8 mode);
// Constants used in setup_vref() are:
#define VREF_LOW  0xa0
#define VREF_HIGH 0x80
// Or (with |) the above with a number 0-15
#define VREF_F5   0x40
#define VREF_COMP 0x10

////////////////////////////////////////////////////////////////// VREF
// LVD Prototypes:
_bif void setup_low_volt_detect(int8 mode);
// Constants used in setup_low_volt_detect() are:
#define LVD_LVDIN   0x1F
#define LVD_45 0x1E
#define LVD_42 0x1D
#define LVD_40 0x1C
#define LVD_38 0x1B
#define LVD_36 0x1A
#define LVD_35 0x19
#define LVD_33 0x18
#define LVD_30 0x17
#define LVD_28 0x16
#define LVD_27 0x15
#define LVD_25 0x14
#define LVD_24 0x13
#define LVD_23 0x12
#define LVD_22 0x11
#define LVD_21 0x10


////////////////////////////////////////////////////////////////// INTERNAL RC
// Oscillator Prototypes:
_bif int8 setup_oscillator(int8 mode);
_bif int8 setup_oscillator(int8 mode, signed int8 tune);
// Constants used in setup_oscillator() are:
// First param:
#define OSC_31KHZ   0
#define OSC_125KHZ  0x10
#define OSC_250KHZ  0x20
#define OSC_500KHZ  0x30
#define OSC_1MHZ    0x40
#define OSC_2MHZ    0x50
#define OSC_4MHZ    0x60
#define OSC_8MHZ    0x70
#define OSC_16MHZ   0x4060
#define OSC_32MHZ   0x4070
// The following may be OR'ed in with the above using |
#define OSC_TIMER1  1
#define OSC_INTRC   2
#define OSC_NORMAL  0
// The following may be OR'ed in with the above using |
#define OSC_IDLE_MODE  0x80
#define OSC_31250   0x8000
#define OSC_PLL_ON  0x4000
#define OSC_PLL_OFF 0
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
#define PWM_FAULT_ON_BREAKPOINT  0x80

#bit FLTA=getenv("BIT:FLTAS")


////////////////////////////////////////////////////////////////// ADC
// ADC Functions: SETUP_ADC(), SETUP_ADC_PORTS() (aka SETUP_PORT_A),
//                SET_ADC_CHANNEL(), READ_ADC()
// ADC Prototypes:
_bif void setup_adc(int16 mode);
_bif int8 read_adc(void);
_bif int8 read_adc(int8 mode);
_bif int16 read_adc(void);
_bif int16 read_adc(int8 mode);
_bif int1 adc_done(void);
// Constants used for SETUP_ADC() are:
#define ADC_OFF               0           // ADC Off
#define ADC_CLOCK_DIV_2   0x100
#define ADC_CLOCK_DIV_4    0x04
#define ADC_CLOCK_DIV_8    0x01
#define ADC_CLOCK_DIV_16   0x05
#define ADC_CLOCK_DIV_32   0x02
#define ADC_CLOCK_DIV_64   0x06
#define ADC_CLOCK_INTERNAL 0x07           // Internal 2-6us
// The following may be OR'ed in with the above using |
#define ADC_TAD_MUL_0      0x00
#define ADC_TAD_MUL_2      0x08
#define ADC_TAD_MUL_4      0x10
#define ADC_TAD_MUL_6      0x18
#define ADC_TAD_MUL_8      0x20
#define ADC_TAD_MUL_12     0x28
#define ADC_TAD_MUL_16     0x30
#define ADC_TAD_MUL_20     0x38

//ADC Prototypes:
_bif void setup_adc_ports(int8 pins);
_bif void setup_adc_ports(int8 pins, int8 reference);
_bif void set_adc_channel(int8 channel);
// Constants used in SETUP_ADC_PORTS() are:
// First argument:
#define ALL_ANALOG   0x0        // A0 A1 A4 A6
#define AN1_AN2_AN3     1       // A1 A4 A6
#define AN0_AN2_AN3     2       // A0 A4 A6
#define AN2_AN3         3       // A4 A6
#define AN0_AN1_AN3     4       // A0 A1 A6 
#define AN1_AN3         5       // A1 A6 
#define AN0_AN3         6       // A0 A6
#define AN3             7       // A6
#define AN0_AN1_AN2     8       // A0 A1 A4 
#define AN1_AN2         9       // A1 A4
#define AN0_AN2         0xa     // A0 A4 
#define AN2             0xb     // A4 
#define AN0_AN1         0xc     // A0 A1
#define AN1             0xd     // A1
#define AN0             0xe     // A0
#define NO_ANALOGS      0xf     // None

// Optional Second argument:
#define VSS_VDD              0x00        //| Range 0-Vdd
#define VSS_VREF             0x10        //| Range 0-Vref

// Constants used in READ_ADC() are:
#define ADC_START_AND_READ     7   // This is the default if nothing is specified
#define ADC_START_ONLY         1
#define ADC_READ_ONLY          6

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
#define INT_EXT_L2H               0x5000F210
#define INT_EXT_H2L               0x6000F210
#define INT_EXT                   0x00F210
#define INT_EXT1_L2H              0x5001F008
#define INT_EXT1_H2L              0x6001F008
#define INT_EXT1                  0x00F008
#define INT_EXT2_L2H              0x5002F010
#define INT_EXT2_H2L              0x6002F010
#define INT_EXT2                  0x00F010
#define INT_EXT3_L2H              0x5003F020
#define INT_EXT3_H2L              0x6003F020
#define INT_EXT3                  0x00F020
#define INT_RB                    0x00FFF208
#define INT_AD                    0x009D40
#define INT_RDA                   0x009D20
#define INT_TBE                   0x009D10
#define INT_LOWVOLT               0x00A004
#define INT_EEPROM                0x00A010
#define INT_OSCF                  0x00A080
#define INT_PWMTB                 0x00A310
#define INT_COMP0                 0x009D02
#define INT_COMP1                 0x009D04
#define INT_COMP2                 0x009D08

#list
