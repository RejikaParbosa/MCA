#include<stdio.h>
void main()
{
    float radius,area,PI=3.14159;
    printf("Enter the value of radius: ");
    scanf("%f",&radius);
    area=PI*radius*radius;
    printf("Area  of the circle: %f",area);
    return 0;
}

