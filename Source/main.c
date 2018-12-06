#include <main.h>

#define LCD_ENABLE_PIN  PIN_A1
#define LCD_RS_PIN      PIN_A3
#define LCD_RW_PIN      PIN_A2
#define LCD_DATA4       PIN_D0
#define LCD_DATA5       PIN_D1
#define LCD_DATA6       PIN_D2
#define LCD_DATA7       PIN_D3

#include <LCD.c>

void lcd_puts(char* s);

void main()
{
   lcd_init();
   char* s = "Water level: ";
   while(TRUE)
   {
      //TODO: User Code
      lcd_puts(s);
      delay_ms(1000);
      lcd_putc('\f');
   }

}

void lcd_puts(char * s)
{
   int count = 0;
   while(s[count] != '\0')
   {
      lcd_putc(s[count]);
      count++;
   }
}
