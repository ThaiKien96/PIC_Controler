//////////// Standard Header file for the PIC24FJ128DA210 device ////////////////
///////////////////////////////////////////////////////////////////////////
////        (C) Copyright 1996, 2013 Custom Computer Services          ////
//// This source code may only be used by licensed users of the CCS C  ////
//// compiler.  This source code may only be distributed to other      ////
//// licensed users of the CCS C compiler.  No other use, reproduction ////
//// or distribution is permitted without written permission.          ////
//// Derivative programs created using this software in object code    ////
//// form are not restricted in any way.                               ////
///////////////////////////////////////////////////////////////////////////
#device PIC24FJ128DA210

#nolist
//////// Program memory: 44028x24  Data RAM: 98304  Stack: 31
//////// I/O: 92   Analog Pins: 24
//////// Fuses: WPOSTS1,WPOSTS2,WPOSTS3,WPOSTS4,WPOSTS5,WPOSTS6,WPOSTS7
//////// Fuses: WPOSTS8,WPOSTS9,WPOSTS10,WPOSTS11,WPOSTS12,WPOSTS13,WPOSTS14
//////// Fuses: WPOSTS15,WPOSTS16,WDT32,WDT128,VREFALT,VREFNORM,NOWINDIS
//////// Fuses: WINDIS,NOWDT,WDT,ICSP3,ICSP2,ICSP1,DEBUG,NODEBUG,WRT,NOWRT
//////// Fuses: PROTECT,NOPROTECT,NOJTAG,JTAG,EC,XT,HS,NOPR,NOIOL1WAY
//////// Fuses: IOL1WAY,OSCIO,NOOSCIO,CKSFSM,CKSNOFSM,NOCKSNOFSM,FRC,FRC_PLL
//////// Fuses: PR,PR_PLL,SOSC,LPRC,FRC_PS,PLL96MHZ_SW,PLL96MHZ,PLL1,PLL2
//////// Fuses: PLL3,PLL4,PLL5,PLL6,PLL8,PLL12,NOIESO,IESO,NOWPFP,WPFP
//////// Fuses: SOSC_DIG,SOSC_LOW,SOSC_HIGH,WUT_FAST,WUT_DEFAULT,PMPALT
//////// Fuses: PMPNORM,NOWPDIS,WPDIS,WPCFG,NOWPCFG,WPBEG,WPEND
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
_bif void set_tris_d(unsigned int16 value);  
_bif void set_tris_e(unsigned int16 value);  
_bif void set_tris_f(unsigned int16 value);  
_bif void set_tris_g(unsigned int16 value);  
_bif unsigned int16 get_tris_a(void);  
_bif unsigned int16 get_tris_b(void);  
_bif unsigned int16 get_tris_c(void);  
_bif unsigned int16 get_tris_d(void);  
_bif unsigned int16 get_tris_e(void);  
_bif unsigned int16 get_tris_f(void);  
_bif unsigned int16 get_tris_g(void);  
_bif void output_a(unsigned int16 value);  
_bif void output_b(unsigned int16 value);  
_bif void output_c(unsigned int16 value);  
_bif void output_d(unsigned int16 value);  
_bif void output_e(unsigned int16 value);  
_bif void output_f(unsigned int16 value);  
_bif void output_g(unsigned int16 value);  
_bif unsigned int16 input_a(void);  
_bif unsigned int16 input_b(void);  
_bif unsigned int16 input_c(void);  
_bif unsigned int16 input_d(void);  
_bif unsigned int16 input_e(void);  
_bif unsigned int16 input_f(void);  
_bif unsigned int16 input_g(void);  
_bif int1 input_change_a(void);  
_bif int1 input_change_b(void);  
_bif int1 input_change_c(void);  
_bif int1 input_change_d(void);  
_bif int1 input_change_e(void);  
_bif int1 input_change_f(void);  
_bif int1 input_change_g(void);  
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
#define PIN_A9  5657
#define PIN_A10  5658
#define PIN_A14  5662
#define PIN_A15  5663

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

#define PIN_C1  5777
#define PIN_C2  5778
#define PIN_C3  5779
#define PIN_C4  5780
#define PIN_C12  5788
#define PIN_C13  5789
#define PIN_C14  5790
#define PIN_C15  5791

#define PIN_D0  5840
#define PIN_D1  5841
#define PIN_D2  5842
#define PIN_D3  5843
#define PIN_D4  5844
#define PIN_D5  5845
#define PIN_D6  5846
#define PIN_D7  5847
#define PIN_D8  5848
#define PIN_D9  5849
#define PIN_D10  5850
#define PIN_D11  5851
#define PIN_D12  5852
#define PIN_D13  5853
#define PIN_D14  5854
#define PIN_D15  5855

#define PIN_E0  5904
#define PIN_E1  5905
#define PIN_E2  5906
#define PIN_E3  5907
#define PIN_E4  5908
#define PIN_E5  5909
#define PIN_E6  5910
#define PIN_E7  5911
#define PIN_E8  5912
#define PIN_E9  5913

#define PIN_F0  5968
#define PIN_F1  5969
#define PIN_F2  5970
#define PIN_F3  5971
#define PIN_F4  5972
#define PIN_F5  5973
#define PIN_F7  5975
#define PIN_F8  5976
#define PIN_F12  5980
#define PIN_F13  5981

#define PIN_G0  6032
#define PIN_G1  6033
#define PIN_G2  6034
#define PIN_G3  6035
#define PIN_G6  6038
#define PIN_G7  6039
#define PIN_G8  6040
#define PIN_G9  6041
#define PIN_G12  6044
#define PIN_G13  6045
#define PIN_G14  6046
#define PIN_G15  6047

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

////////////////////////////////////////////////////////////////// Timer
// Timer Functions: SETUP_TIMERx, GET_TIMERx, GET_TIMERxy,
// SET_TIMERx, SET_TIMERxy
// Timer x Prototypes:
_bif void setup_timer1(unsigned int16 mode);
_bif void setup_timer1(unsigned int16 mode, unsigned int16 period);
_bif unsigned int16 get_timer1(void);
_bif void set_timer1(unsigned int16 value);
_bif void setup_timer2(unsigned int16 mode);  
_bif void setup_timer2(unsigned int16 mode, unsigned int16 period);  
_bif unsigned int16 get_timer2(void);  
_bif void set_timer2(unsigned int16 value);  
_bif void setup_timer3(unsigned int16 mode);  
_bif void setup_timer3(unsigned int16 mode, unsigned int16 period);  
_bif unsigned int16 get_timer3(void);  
_bif void set_timer3(unsigned int16 value);  
_bif unsigned int32 get_timer23(void);  
_bif void set_timer23(unsigned int32 value);  
_bif void setup_timer4(unsigned int16 mode);  
_bif void setup_timer4(unsigned int16 mode, unsigned int16 period);  
_bif unsigned int16 get_timer4(void);  
_bif void set_timer4(unsigned int16 value);  
_bif void setup_timer5(unsigned int16 mode);  
_bif void setup_timer5(unsigned int16 mode, unsigned int16 period);  
_bif unsigned int16 get_timer5(void);  
_bif void set_timer5(unsigned int16 value);  
_bif unsigned int32 get_timer45(void);  
_bif void set_timer45(unsigned int32 value);  
// Constants used for SETUP_TIMERx() are:
//      (or (via |) together constants from each group)
#define TMR_DISABLED 0x0000
#define TMR_INTERNAL 0x8000
#define TMR_EXTERNAL 0x8002
#define TMR_GATE     0x0040 

#define TMR_DIV_BY_1   0x0000
#define TMR_DIV_BY_8   0x0010
#define TMR_DIV_BY_64  0x0020
#define TMR_DIV_BY_256 0x0030
#define TMR_32_BIT     0x0008 // Only for even numbered timers

#define TMR_HALT_IDLE      0x2000
#define TMR_CONTINUE_IDLE  0x0000

#define T1_EXTERNAL_SYNC  0x8006 //This only applies to Timer1
#define T1_EXTERNAL_RTC   0xC002 //This only applies to Timer1
/////////////////////////////////////////////////////////// INPUT CAPTURE
// Functions: SETUP_CAPTURE, GET_CAPTURE, GET_CAPTURE32
// IC Prototypes:
_bif void setup_capture(unsigned int8 module, unsigned int16 mode);
_bif unsigned int16 get_capture(unsigned int8 module);
_bif unsigned int16 get_capture(unsigned int8 module, int1 wait);
_bif unsigned int32 get_capture32(unsigned int8 module);
_bif unsigned int32 get_capture32(unsigned int8 module, int1 wait);
// Constants used for SETUP_CAPTURE() are:
#define CAPTURE_OFF                 0x0000  // Capture OFF
#define CAPTURE_EE                  0x0001  // Capture Every Edge
#define CAPTURE_FE                  0x0002  // Capture Falling Edge
#define CAPTURE_RE                  0x0003  // Capture Rising Edge
#define CAPTURE_DIV_4               0x0004  // Capture Every 4th Rising Edge
#define CAPTURE_DIV_16              0x0005  // Capture Every 16th Rising Edge
#define CAPTURE_INTERRUPT_ONLY      0x0007  // Interrupt on Rising Edge when in Sleep or Idle

// The following defines can be ORed | with above to configure interrupts
#define INTERRUPT_EVERY_CAPTURE     0x0000  // Interrupt on every capture event
#define INTERRUPT_SECOND_CAPTURE    0x0020  // Interrupt on every second capture event
#define INTERRUPT_THIRD_CAPTURE     0x0040  // Interrupt on every third capture event
#define INTERRUPT_FOURTH_CAPTURE    0x0060  // Interrupt on every fourth capture event

// The following defines can be ORed | with above to select timer
#define CAPTURE_TIMER1              0x1000
#define CAPTURE_TIMER2              0x0400
#define CAPTURE_TIMER3              0x0000
#define CAPTURE_TIMER4              0x0800
#define CAPTURE_TIMER5              0x0C00
#define CAPTURE_SYSTEM_CLOCK        0x1C00

// The following defines can be ORed | with above to select idle operation mode
#define CAPTURE_HALT_IDLE           0x2000  // Capture module halts during idle mode
#define CAPTURE_CONTINUE_IDLE       0x0000  // Capture module continues during idle mode

// The following defines can be ORed | with above to select # of bits
#define CAPTURE_32_BIT              0x01000000  //Only used with odd number capture units
#define CAPTURE_16_BIT                       0

// The following defines can be ORed | with above and determines whether the next block
// of defines are the capture unit's trigger or syncronize source
#define CAPTURE_TRIGGER             0x00800000
#define CAPTURE_SYNCHRONIZE                  0

// The following defines can be ORed | with above and selects the capture unit's
// trigger or synchronization source
#define CAPTURE_TRIG_SYNC_OC1       0x00010000
#define CAPTURE_TRIG_SYNC_OC2       0x00020000
#define CAPTURE_TRIG_SYNC_OC3       0x00030000
#define CAPTURE_TRIG_SYNC_OC4       0x00040000
#define CAPTURE_TRIG_SYNC_OC5       0x00050000
#define CAPTURE_TRIG_SYNC_OC6       0x00060000
#define CAPTURE_TRIG_SYNC_OC7       0x00070000
#define CAPTURE_TRIG_SYNC_OC8       0x00080000
#define CAPTURE_TRIG_SYNC_OC9       0x00090000
#define CAPTURE_TRIG_SYNC_IC5       0x000A0000
#define CAPTURE_TRIG_SYNC_TIMER1    0x000B0000
#define CAPTURE_TRIG_SYNC_TIMER2    0x000C0000
#define CAPTURE_TRIG_SYNC_TIMER3    0x000D0000
#define CAPTURE_TRIG_SYNC_TIMER4    0x000E0000
#define CAPTURE_TRIG_SYNC_TIMER5    0x000F0000
#define CAPTURE_TRIG_SYNC_IC7       0x00120000
#define CAPTURE_TRIG_SYNC_IC8       0x00130000
#define CAPTURE_TRIG_SYNC_IC1       0x00140000
#define CAPTURE_TRIG_SYNC_IC2       0x00150000
#define CAPTURE_TRIG_SYNC_IC3       0x00160000
#define CAPTURE_TRIG_SYNC_IC4       0x00170000
#define CAPTURE_TRIG_SYNC_COMP1     0x00180000  //Trigger Source only
#define CAPTURE_TRIG_SYNC_COMP2     0x00190000  //Trigger Source only
#define CAPTURE_TRIG_SYNC_COMP3     0x001A0000  //Trigger Source only
#define CAPTURE_TRIG_SYNC_ADC       0x001B0000  //Trigger Source only
#define CAPTURE_TRIG_SYNC_CTMU      0x001C0000  //Trigger Source only
#define CAPTURE_TRIG_SYNC_IC6       0x001D0000
#define CAPTURE_TRIG_SYNC_IC9       0x001E0000
#define CAPTURE_TRIG_SYNC_NONE               0

/////////////////////////////////////////////////////////// OUTPUT COMPARE
// Functions: SETUP_COMPARE, SET_PWM_DUTY, SET_COMPARE_TIME
//            SETUP_PWM_PERIOD
// OC Prototypes:
_bif void setup_compare(unsigned int8 module, unsigned int32 mode);
_bif void set_pwm_duty(unsigned int8 module, unsigned int16 duty);
_bif void set_compare_time(unsigned int8 module, unsigned int16 ocr);
_bif void set_compare_time(unsigned int8 module, unsigned int16 ocr, unsigned int16 ocrs);
// Constants used for SETUP_COMPARE() are:
#define COMPARE_OFF               0x0000  // Compare OFF
#define COMPARE_SET_ON_MATCH      0x0001  // Pin from low to high on match
#define COMPARE_CLR_ON_MATCH      0x0002  // Pin from high to low on match
#define COMPARE_TOGGEL            0x0003  // Pin will toggle on every match occurrence
#define COMPARE_SINGLE_PULSE      0x0004  // Pin will generate single pulse on first match
#define COMPARE_CONT_PULSE        0x0005  // Pin will pulse for every match
#define COMPARE_PWM_EDGE          0x0006
#define COMPARE_PWM_CENTER        0x0007

// The following defines can be ORed | with above
#define COMPARE_TIMER2            0x0000
#define COMPARE_TIMER3            0x0400
#define COMPARE_TIMER4            0x0800
#define COMPARE_TIMER5            0x0C00
#define COMPARE_TIMER1            0x1000
#define COMPARE_SYSTEM_CLOCK      0x1C00

#define COMPARE_FAULT0            0x0080
#define COMPARE_NO_FAULT0         0x0000

#define COMPARE_FAULT_CLEAR       0x80000000
#define COMPARE_FAULT_NEW         0x00000000
#define COMPARE_PWM_HIGH_ON_FAULT 0x40000000
#define COMPART_PWM_LOW_ON_FAULT  0x00000000
#define COMPARE_FAULT_OUTPUT      0x20000000
#define COMPARE_INVERT_OC_PIN     0x10000000
#define COMPARE_32_BIT            0x01000000
#define COMPARE_TRIGGER           0x00800000
#define COMPARE_SYNCHRONIZE       0x00000000
#define COMPARE_OC_PIN_TRISTATED  0x00200000
#define COMPARE_TRIG_SYNC_SELF    0x001F0000
#define COMPARE_TRIG_SYNC_CAP9    0x001E0000
#define COMPARE_TRIG_SYNC_CAP6    0x001D0000
#define COMPARE_TRIG_SYNC_CTMU    0x001C0000
#define COMPARE_TRIG_SYNC_ADC     0x001B0000
#define COMPARE_TRIG_SYNC_COMP3   0x001A0000
#define COMPARE_TRIG_SYNC_COMP2   0x00190000
#define COMPARE_TRIG_SYNC_COMP1   0x00180000
#define COMPARE_TRIG_SYNC_CAP4    0x00170000
#define COMPARE_TRIG_SYNC_CAP3    0x00160000
#define COMPARE_TRIG_SYNC_CAP2    0x00150000
#define COMPARE_TRIG_SYNC_CAP1    0x00140000
#define COMPARE_TRIG_SYNC_CAP8    0x00130000
#define COMPARE_TRIG_SYNC_CAP7    0x00120000
#define COMPARE_TRIG_SYNC_TIMER5  0x000F0000
#define COMPARE_TRIG_SYNC_TIMER4  0x000E0000
#define COMPARE_TRIG_SYNC_TIMER3  0x000D0000
#define COMPARE_TRIG_SYNC_TIMER2  0x000C0000
#define COMPARE_TRIG_SYNC_TIMER1  0x000B0000
#define COMPARE_TRIG_SYNC_CAP5    0x000A0000
#define COMPARE_TRIG_SYNC_OC9     0x00090000
#define COMPARE_TRIG_SYNC_OC8     0x00080000
#define COMPARE_TRIG_SYNC_OC7     0x00070000
#define COMPARE_TRIG_SYNC_OC6     0x00060000
#define COMPARE_TRIG_SYNC_OC5     0x00050000
#define COMPARE_TRIG_SYNC_OC4     0x00040000
#define COMPARE_TRIG_SYNC_OC3     0x00030000
#define COMPARE_TRIG_SYNC_OC2     0x00020000
#define COMPARE_TRIG_SYNC_OC1     0x00010000
#define COMPARE_TRIG_SYNC_NONE    0x00000000

// The following defines can be ORed | with above to select idle operation mode
#define COMPARE_HALT_IDLE         0x2000  // Compare module halts during idle mode
#define COMPARE_CONTINUE_IDLE     0x0000  // Compare module continues during idle mode

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
_bif void setup_spi3(unsigned int16 mode);  
_bif void spi_write3(unsigned int8 data);  
_bif unsigned int8 spi_read3(void);  
_bif unsigned int8 spi_read3(unsigned int8 data);  
_bif int1 spi_data_in3(void);  
// Constants used in SETUP_SPI() are:
//      (or (via |) together constants from each group)
#define SPI_MASTER                 0x0020
#define SPI_SLAVE                  0x0000

#define SPI_SCK_IDLE_HIGH          0x0040
#define SPI_SCK_IDLE_LOW           0x0000

#define SPI_XMIT_L_TO_H            0x0100
#define SPI_XMIT_H_TO_L            0x0000

#define SPI_MODE_16B               0x0400
#define SPI_MODE_8B                0x0000

#define SPI_SAMPLE_AT_END          0x0200
#define SPI_SAMPLE_AT_MIDDLE       0x0000

#define SPI_SS_ENABLED             0x0000
#define SPI_SS_DISABLED            0x0080

//or (via |) one of the following when operating as MASTER 
#define SPI_CLK_DIV_1              0x001F
#define SPI_CLK_DIV_2              0x001B
#define SPI_CLK_DIV_3              0x0017
#define SPI_CLK_DIV_4              0x001E
#define SPI_CLK_DIV_5              0x000F
#define SPI_CLK_DIV_6              0x000B
#define SPI_CLK_DIV_7              0x0007
#define SPI_CLK_DIV_8              0x0003
#define SPI_CLK_DIV_12             0x0016
#define SPI_CLK_DIV_16             0x001D
#define SPI_CLK_DIV_20             0x000E
#define SPI_CLK_DIV_24             0x000A
#define SPI_CLK_DIV_28             0x0006
#define SPI_CLK_DIV_32             0x0002
#define SPI_CLK_DIV_48             0x0015
#define SPI_CLK_DIV_64             0x001C
#define SPI_CLK_DIV_80             0x000D
#define SPI_CLK_DIV_96             0x0009
#define SPI_CLK_DIV_112            0x0005
#define SPI_CLK_DIV_128            0x0001
#define SPI_CLK_DIV_192            0x0014
#define SPI_CLK_DIV_256            0x0010
#define SPI_CLK_DIV_320            0x000C
#define SPI_CLK_DIV_384            0x0008
#define SPI_CLK_DIV_448            0x0004
#define SPI_CLK_DIV_512            0x0000

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
#define ADC_CLOCK_DIV_128  0x007F   
#define ADC_CLOCK_DIV_256  0x00FF   
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
#define sAN0      0x00000001 //| B0
#define sAN1      0x00000002 //| B1
#define sAN2      0x00000004 //| B2
#define sAN3      0x00000008 //| B3
#define sAN4      0x00000010 //| B4
#define sAN5      0x00000020 //| B5
#define sAN6      0x00000040 //| B6
#define sAN7      0x00000080 //| B7
#define sAN8      0x00000100 //| B8
#define sAN9      0x00000200 //| B9
#define sAN10      0x00000400 //| B10
#define sAN11      0x00000800 //| B11
#define sAN12      0x00001000 //| B12
#define sAN13      0x00002000 //| B13
#define sAN14      0x00004000 //| B14
#define sAN15      0x00008000 //| B15
#define sAN16      0x00010000 //| C4
#define sAN17      0x00020000 //| G6
#define sAN18      0x00040000 //| G7
#define sAN19      0x00080000 //| G8
#define sAN20      0x00100000 //| G9
#define sAN21      0x00200000 //| E9
#define sAN22      0x00400000 //| A7
#define sAN23      0x00800000 //| A6

// Optional Second argument:
#define VSS_VDD            0x0000 // Range 0-Vdd
#define VREF_VREF          0x6000 // Range VrefL-VrefH
#define VREF_VDD           0x4000 // Range VrefL-Vdd
#define VSS_VREF           0x2000 // Range 0-VrefH

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
#define VREF_DISABLED        0x0000
#define VREF_VSS_VDD         0x0080
#define VREF_ANALOG          0x0090
// One of the following maybe OR'ed in with the above using |
#define VREF_HIGH            0x0080
#define VREF_LOW             0x00A0
// One of the following maybe OR'ed in with the above using |
#define VREF_COMP_BGV        0x0000  // Band gap voltage is CVref- reference
#define VREF_COMP_BGV_DIV_2  0x0100  // Band gap voltage divided by two is CVref- reference
#define VREF_COMP_BGV_DIV_6  0x0200  // Band gap voltage divided by six is CVref- reference
#define VREF_COMP_VREF       0x0300  // Vref+ pin is CVref- reference
// The following maybe OR'ed in with the above using |
#define VREF_CVREF_IS_VREF   0x0400  // CVref+ = VREF+
#define VREF_OUTPUT          0x0040
// OR a number 0-15 with the above using |

////////////////////////////////////////////////////////////////// EPMP
// EPMP Functions: SETUP_PMP(), SETUP_PMP_CSx(), SETUP_PSP(), SETUP_PSP_CS(),
// PMP_WRITE16(), PMP_WRITE8(), PSP_WRITE(), PMP_READ16(), PMP_READ8(),
// PSP_READ(), PSP_OUTPUT_FULL(), PSP_INPUT_FULL(), PSP_OVERFLOW(),
// PMP_ERROR(), PSP_ERROR(), PMP_TIMEOUT(), PSP_TIMEOUT()
// EPMP Prototypes:
_bif void setup_pmp(unsigned int32 mode, unsigned int32 address_mask);
_bif void setup_pmp(unsigned int32 mode, unsigned int32 address_mask, unsigned int32 max_address);
_bif void setup_pmp_cs1(unsigned int32 mode);
_bif void setup_pmp_cs1(unsigned int32 mode, unsigned int32 offset);
_bif void setup_pmp_cs2(unsigned int32 mode);
_bif void setup_pmp_cs2(unsigned int32 mode, unsigned int32 offset);
_bif void pmp_write16(unsigned int32 address, unsigned int16 data);
_bif void pmp_write16(unsigned int32 address, unsigned int16 *ptr, unsigned int16 count);
_bif void pmp_write8(unsigned int32 address, unsigned int8 data);
_bif void pmp_write8(unsigned int32 address, unsigned int8 *ptr, unsigned int16 count);
_bif unsigned int16 pmp_read16(unsigned int32 address);
_bif void pmp_read16(unsigned int32 address, unsigned int16 *ptr, unsigned int16 count);
_bif unsigned int8 pmp_read8(unsigned int32 address);
_bif void pmp_read8(unsigned int32 address, unsigned int8 *ptr, unsigned int16 count);
_bif int1 pmp_error(void);
_bif int1 pmp_timeout(void);
_bif void setup_psp(unsigned int32 mode, unsigned int32 address_mask);
_bif void setup_psp_cs(unsigned int32 mode);
_bif void psp_write(unsigned int8 data);
_bif void psp_write(unsigned int32 address, unsigned int8 data);
_bif unsigned int8 psp_read(void);
_bif unsigned int8 psp_read(unsigned int32 address);
_bif int1 psp_output_full(void);
_bif int1 psp_input_full(void);
_bif int1 psp_overflow(void);
_bif int1 psp_error(void);
_bif int1 psp_timeout(void);
// Constants used in SETUP_PMP() and SETUP_PSP() first parm are:
#define PAR_ENABLE                    0x00008000
#define PAR_DISABLE                   0x00000000 // Module enable/disable options
#define PAR_STOP_IN_IDLE              0x00002000
#define PAR_CONTINUE_IN_IDLE          0x00000000
#define PAR_ADDR_MULTIPLEXED_3_PHASES 0x00001800 // Address multiplexing options
#define PAR_ADDR_MULTIPLEXED_2_PHASES 0x00001000 // Address multiplexing options
#define PAR_ADDR_MULTIPLEXED_1_PHASE  0x00000800 // Address multiplexing options
#define PAR_ADDR_NOT_MULTIPLEXED      0x00000000 // Address multiplexing options
#define PAR_MASTER_MODE               0x00000300 // Master mode
#define PAR_ENHANCED_PSP              0x00000200 // Enhanced PSP
#define PAR_BUFFERED_PSP              0x00000100 // Buffered PSP
#define PAR_LEGACY_PSP                0x00000000 // Legacy Parallel Slave Port
#define PAR_CS_00                     0x00000080 // PMA15 used for Chip Select 2, PMA14 used for Chip Select 1
#define PAR_CS_01                     0x00000040 // PMA15 used for Chip Select 2, PMCS1 used for Chip Select 1
#define PAR_CS_11                     0x00000000 // PMCS2 used for Chip Select 2, PMCS1 used for Chip Select 1
#define PAR_ALP_ACTIVE_HIGH           0x00000020 // Address latch polarity high
#define PAR_ALS_SMART                 0x00000010 // Enable "smart" address strobes
#define PAR_DATA_BUS_KEEPS            0x00000004 // Data bus keeps its last value when not actively being driven
#define PAR_INTR_ON_3_RW_BUF          0x00000003 // Interrupt on write to Buffer 3 or read from Buffer 3
#define PAR_INTR_ON_RW                0x00000001 // Interrupt on read write
#define PAR_NO_INTR                   0x00000000 // No interrupt
#define PAR_PTWREN_ENABLE             0x80000000 // Write/Enable Strobe Port Enable bit
#define PAR_PTRDEN_ENABLE             0x40000000 // Read/Write Strobe Port Enable bit
#define PAR_PTBE1EN_ENABLE            0x20000000 // High Nibble/Byte Enable Port Enable bit
#define PAR_PTBE0EN_ENABLE            0x10000000 // Low Nibble/Byte Enable Port Enable bit
#define PAR_AWAITM3                   0x06000000 // Wait of 3 1/2 Tcy
#define PAR_AWAITM2                   0x04000000 // Wait of 2 1/2 Tcy
#define PAR_AWAITM1                   0x02000000 // Wait of 1 1/2 Tcy
#define PAR_AWAITM0                   0x00000000 // Wait of 1/2 Tcy
#define PAR_AWAITE1                   0x01000000 // Wait of 1 1/4 Tcy
#define PAR_AWAITE0                   0x00000000 // Wait of 1/4 Tcy
#define PAR_USE_TTL_INPUT_BUFFERS     0x00010000 // EPMP module inputs use TTL input buffers
#define PAR_USE_SC_INPUT_BUFFERS      0x00000000 // EPMP module inputs use Schmitt Trigger input buffers

// Constants used in SETUP_PMP_CSx() and SETUP_PSP_CS() first parm are:
#define PAR_ENABLE_CS                 0x00000000 // Enable the Chip Select x functionality
#define PAR_DISABLE_CS                0x00008000 // Disable the Chip Select x functionality
#define PAR_CSP_ACTIVE_HIGH           0x00004000 // Chip Select x polarity high
#define PAR_CSPTEN_ENABLE             0x00002000 // PMCSx Port Enable bit
#define PAR_BEP_ACTIVE_HIGH           0x00001000 // PMBEx polarity high
#define PAR_WRSP_ACTIVE_HIGH          0x00000400 // PMWR or PMENB polarity high
#define PAR_RDSP_ACTIVE_HIGH          0x00000200 // PMRD polarity high
#define PAR_SM_READ_WRITE_AND_ENABLE  0x00000100 // Read/Write and Enable strobes (PMRD/PMWR and PMENB)
#define PAR_SM_READ_AND_WRITE         0x00000000 // Read and Write strobes (PMRD and PMWR)
#define PAR_ACKP_ACTIVE_HIGH          0x00000080 // PMACKx polarity high
#define PAR_PTSZ_16_BIT               0x00000040 // 16-bit port size
#define PAR_PTSZ_4_BIT                0x00000020 // 4-bit port size
#define PAR_PTSZ_8_BIT                0x00000000 // 8-bit port size
#define PAR_USE_ACK                   0x80000000 // PMACKx is used to determine when a read/write operation is complete
#define PAR_USE_ACK_WITH_TIMEOUT      0x40000000 // PMACKx is used to determine when a read/write operation is complete with timeout
#define PAR_ACK_NOT_USED              0x00000000 // PMACKx is not used
#define PAR_AMWAIT10                  0x38000000 // Wait 10 Alternate Master Cycles
#define PAR_AMWAIT9                   0x30000000 // Wait 9 Alternate Master Cycles
#define PAR_AMWAIT8                   0x28000000 // Wait 8 Alternate Master Cycles
#define PAR_AMWAIT7                   0x20000000 // Wait 7 Alternate Master Cycles
#define PAR_AMWAIT6                   0x18000000 // Wait 6 Alternate Master Cycles
#define PAR_AMWAIT5                   0x10000000 // Wait 5 Alternate Master Cycles
#define PAR_AMWAIT4                   0x08000000 // Wait 4 Alternate Master Cycles
#define PAR_AMWAIT3                   0x00000000 // Wait 3 Alternate Master Cycles
#define PAR_DWAITB3                   0x00C00000 // 3 1/4 Tcy Wait state for data setup R/W
#define PAR_DWAITB2                   0x00800000 // 2 1/4 Tcy Wait state for data setup R/W
#define PAR_DWAITB1                   0x00400000 // 1 1/4 Tcy Wait state for data setup R/W
#define PAR_DWAITB0                   0x00000000 // 1/4 Tcy Wait state for data setup R/W
#define PAR_DWAITM15                  0x003C0000 // 15 1/2 Tcy Wait state for write to byte, 15 3/4 Tcy Wait state for read
#define PAR_DWAITM14                  0x00380000 // 14 1/2 Tcy Wait state for write to byte, 14 3/4 Tcy Wait state for read
#define PAR_DWAITM13                  0x00340000 // 13 1/2 Tcy Wait state for write to byte, 13 3/4 Tcy Wait state for read
#define PAR_DWAITM12                  0x00300000 // 12 1/2 Tcy Wait state for write to byte, 12 3/4 Tcy Wait state for read
#define PAR_DWAITM11                  0x002C0000 // 11 1/2 Tcy Wait state for write to byte, 11 3/4 Tcy Wait state for read
#define PAR_DWAITM10                  0x00280000 // 10 1/2 Tcy Wait state for write to byte, 10 3/4 Tcy Wait state for read
#define PAR_DWAITM9                   0x00240000 // 9 1/2 Tcy Wait state for write to byte, 9 3/4 Tcy Wait state for read
#define PAR_DWAITM8                   0x00200000 // 8 1/2 Tcy Wait state for write to byte, 8 3/4 Tcy Wait state for read
#define PAR_DWAITM7                   0x001C0000 // 7 1/2 Tcy Wait state for write to byte, 7 3/4 Tcy Wait state for read
#define PAR_DWAITM6                   0x00180000 // 6 1/2 Tcy Wait state for write to byte, 6 3/4 Tcy Wait state for read
#define PAR_DWAITM5                   0x00140000 // 5 1/2 Tcy Wait state for write to byte, 5 3/4 Tcy Wait state for read
#define PAR_DWAITM4                   0x00100000 // 4 1/2 Tcy Wait state for write to byte, 4 3/4 Tcy Wait state for read
#define PAR_DWAITM3                   0x000C0000 // 3 1/2 Tcy Wait state for write to byte, 3 3/4 Tcy Wait state for read
#define PAR_DWAITM2                   0x00080000 // 2 1/2 Tcy Wait state for write to byte, 2 3/4 Tcy Wait state for read
#define PAR_DWAITM1                   0x00040000 // 1 1/2 Tcy Wait state for write to byte, 1 3/4 Tcy Wait state for read
#define PAR_DWAITM0                   0x00000000 // 1/2 Tcy Wait state for write to byte, 3/4 Tcy Wait state for read
#define PAR_DWAITE3                   0x00030000 // 3 1/4 Tcy Wait state for data hold after write strobe, 3 Tcy Wait state after read strobe
#define PAR_DWAITE2                   0x00020000 // 2 1/4 Tcy Wait state for data hold after write strobe, 2 Tcy Wait state after read strobe
#define PAR_DWAITE1                   0x00010000 // 1 1/4 Tcy Wait state for data hold after write strobe, 1 Tcy Wait state after read strobe
#define PAR_DWAITE0                   0x00000000 // 1/4 Tcy Wait state for data hold after write strobe, 0 Tcy Wait state after read strobe

////////////////////////////////////////////////////////////////// CRC
// CRC Functions: setup_crc(), crc_init(), crc_calc32(),
//                crc_calc16(), crc_calc8()
// CRC Prototypes:
_bif void setup_crc(unsigned int8 poly_terms, ...);
_bif void crc_init(unsigned int32 value);
_bif unsigned int32 crc_calc32(unsigned int32 data);
_bif unsigned int32 crc_calc32(unsigned int32 data, unsigned int8 width);
_bif unsigned int32 crc_calc32(unsigned int32 *ptr, unsigned int16 count);
_bif unsigned int32 crc_calc32(unsigned int32 *ptr, unsigned int16 count, unsigned int8 width);
_bif unsigned int16 crc_calc16(unsigned int16 data);
_bif unsigned int16 crc_calc16(unsigned int16 data, unsigned int8 width);
_bif unsigned int16 crc_calc16(unsigned int16 *ptr, unsigned int16 count);
_bif unsigned int16 crc_calc16(unsigned int16 *ptr, unsigned int16 count, unsigned int8 width);
_bif unsigned int8 crc_calc8(unsigned int8 data);
_bif unsigned int8 crc_calc8(unsigned int8 data, unsigned int8 width);
_bif unsigned int8 crc_calc8(unsigned int8 *ptr, unsigned int16 count);
_bif unsigned int8 crc_calc8(unsigned int8 *ptr, unsigned int16 count, unsigned int8 width);
_bif unsigned int16 crc_calc(unsigned int16 data);
_bif unsigned int16 crc_calc(unsigned int16 data, unsigned int8 width);
_bif unsigned int16 crc_calc(unsigned int16 *ptr, unsigned int16 count);
_bif unsigned int16 crc_calc(unsigned int16 *ptr, unsigned int16 count, unsigned int8 width);
// Constants used in setup_crc() are:
#define CRC_LITTLE_ENDIAN    128

////////////////////////////////////////////////////////////////// RTC
// RTC Functions: setup_rtc(), setup_rtc_alarm(), rtc_read(),
//                rtc_write(), rtc_alarm_read(), rtc_alarm_write()
// Structure used in read and write functions (pass pointer):
typedef struct {
   unsigned int8 tm_year;
   unsigned int8 tm_temp;  // Not used by built in functions, place holder only do not use
   unsigned int8 tm_mday;
   unsigned int8 tm_mon;
   unsigned int8 tm_hour;
   unsigned int8 tm_wday;
   unsigned int8 tm_sec;
   unsigned int8 tm_min;
   unsigned int8 tm_isdst; // Not used by built in functions
} rtc_time_t;
// RTC Protoyptes:
_bif void setup_rtc(unsigned int16 mode, unsigned int8 calibration);
_bif void setup_rtc_alarm(unsigned int16 mode, unsigned int16 mask, unsigned int8 repeat);
_bif void rtc_read(rtc_time_t *time);
_bif void rtc_write(rtc_time_t *time);
_bif void rtc_read_alarm(rtc_time_t *time);
_bif void rtc_write_alarm(rtc_time_t *time);
// Constants used in setup_rtc() are:  // Second param is calibration
#define RTC_ENABLE           0x8000
#define RTC_DISABLE          0
#define RTC_OUTPUT_SECONDS   0x20400
#define RTC_OUTPUT_ALARM     0x00400
//
// Constants used in setup_rtc_alarm() first param are:  
#define RTC_ALARM_ENABLE     0x8000
#define RTC_ALARM_DISABLE    0
#define RTC_CHIME_ENABLE     0x4000
#define RTC_CHIME_DISABLE    0
// Constants used in setup_rtc_alarm() second param are:  // Third param is repeat#
#define RTC_ALARM_HALFSECOND 0x0000
#define RTC_ALARM_SECOND     0x0400
#define RTC_ALARM_10_SECONDS 0x0800
#define RTC_ALARM_MINUTE     0x0C00
#define RTC_ALARM_10_MINUTES 0x1000
#define RTC_ALARM_HOUR       0x1400
#define RTC_ALARM_DAY        0x1800
#define RTC_ALARM_WEEK       0x1C00
#define RTC_ALARM_MONTH      0x2000
#define RTC_ALARM_YEAR       0x2400

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
#define INT_IC1                   7
#define INT_OC1                   8
#define INT_TIMER1                9
#define INT_IC2                   70
#define INT_OC2                   71
#define INT_TIMER2                72
#define INT_TIMER3                73
#define INT_SPI1E                 74
#define INT_SPI1                  75
#define INT_RDA                   76
#define INT_TBE                   77
#define INT_ADC1                  78
#define INT_SI2C                  81
#define INT_MI2C                  82
#define INT_CNI                   84
#define INT_EXT1                  85
#define INT_IC7                   87
#define INT_IC8                   88
#define INT_OC3                   90
#define INT_OC4                   91
#define INT_TIMER4                92
#define INT_TIMER5                93
#define INT_EXT2                  94
#define INT_RDA2                  95
#define INT_TBE2                  96
#define INT_SPI2E                 97
#define INT_SPI2                  98
#define INT_IC3                   102
#define INT_IC4                   103
#define INT_IC5                   104
#define INT_IC6                   105
#define INT_OC5                   106
#define INT_OC6                   107
#define INT_OC7                   108
#define INT_OC8                   109
#define INT_SI2C2                 114
#define INT_MI2C2                 115
#define INT_EXT3                  118
#define INT_EXT4                  119
#define INT_UART1E                130
#define INT_UART2E                131
#define INT_SPI3                  137
#define INT_UART3E                141
#define INT_RDA3                  142
#define INT_TBE3                  143
#define INT_UART4E                144
#define INT_RDA4                  145
#define INT_TBE4                  146
#define INT_USB                   147
#define INT_SI2C3                 148
#define INT_MI2C3                 149
#define INT_COMP                  152
#define INT_OC9                   162
#define INT_IC9                   163
#define INT_PMP                   164
#define INT_SPI3E                 172
#define INT_RTC                   173
#define INT_CRC                   174
#define INT_CTMU                  176

#list
