#include<16f887.h>
#fuses HS,NOWDT,NOMCLR  //Masterclear deshabilitado
#device ADC=10 //Resolucion en Bits del ADC
#use delay(internal=8M) //Uso del reloj interno a 8MHZ


void main()
{
   while(true) //ciclo while
{
  int AN0read;
  int AN1read;
  

  setup_adc(ADC_CLOCK_DIV_2); //configuracion de Reloj de Conversion FOSC/2 
  setup_adc_PORTS(0b00000000000011);//COnfiguracion como Entradas Analogicas AN1 y AN0

SET_ADC_CHANNEL(0); // Seleccion del Canal 0 AN0 = RA0
delay_us(20);  //tiempo de conversion 20us
AN0read= read_adc(); //Lectura del ADC se guarda en
delay_us(20);//tiempo de Conversion

SET_ADC_CHANNEL(1); // Seleccion del Canal 1 AN1 = RA1
delay_us(20); //tiempo de conversion 20us
AN1read= read_adc(); //Lectura del ADC se guarda en
delay_us(20);//tiempo de Conversion


output_B(AN0read);// Escritura por el puertoB de la Lectura AN0
output_D(AN1read);// Escritura por el puertoD de la Lectura AN1

}


}
