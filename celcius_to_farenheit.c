//convert celcius to farenheit//
#include<stdio.h>
void main()
{
    float celcius,farenheit;
    printf("Enter the value for celcius: ");
    scanf("%f",&celcius);
    farenheit = (celcius*9/5)+32;
    printf("The temperature in farenheit is: %f",farenheit);
    return 0;
}
