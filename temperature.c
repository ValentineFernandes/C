#include<stdio.h>
int main()
{
 float cel, fah;

 printf("\nEnter Temperature in Celsius : ");
 scanf("%f", &cel);

 fah = (1.8 * cel) + 32;
 printf("\nTemperature in Fahrenheit : %f ", fah);

 return (0);

}
