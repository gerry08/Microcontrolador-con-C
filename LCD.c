#include<16f887.h>
#fuses HS,NOWDT,NOMCLR
#use delay(internal=8MHZ)
#include<lcd.c>

void main()
{
  lcd_init();



while(1)
{
lcd_gotoxy(1,1);
printf(lcd_putc,"PIC16F887");
delay_ms(1);

for(int i=0;i<10;i++)
{
lcd_gotoxy(1,2);
printf(lcd_putc,"Entero= %d",i);
delay_ms(500);
}

 printf(lcd_putc,"\f");
delay_ms(1000);

for(i=0;i<15;i++)
{
lcd_gotoxy(1,2);
 printf(lcd_putc,"Real punto: %f ",i/13.0);
delay_ms(500);
}

printf(lcd_putc,"\f");
delay_ms(1000);

lcd_gotoxy(1,1);
printf(lcd_putc,"%c",224);
delay_ms(1000);


 for(i=0;i<15;i++)
{
lcd_gotoxy(i,1);
printf(lcd_putc,"%c",224+i);
delay_ms(100);

lcd_gotoxy(i,2);
printf(lcd_putc,"%c",200+i);
delay_ms(100);
}
delay_ms(1000);

 for(i=0;i<15;i++)
{
lcd_gotoxy(i,1);
 printf(lcd_putc,"%c",224);
delay_ms(100);
printf(lcd_putc,"\f");
}

 for(i=0;i<15;i++)
{
lcd_gotoxy(i,2);
 printf(lcd_putc,"%c",224);
delay_ms(100);
printf(lcd_putc,"\f");
}


for(i=15;i>0;i--)
{
lcd_gotoxy(i,1);
 printf(lcd_putc,"%c",224);
delay_ms(100);
printf(lcd_putc,"\f");
}

 for(i=15;i>0;i--)
{
lcd_gotoxy(i,2);
 printf(lcd_putc,"%c",224);
delay_ms(100);
printf(lcd_putc,"\f");
}
}
}




