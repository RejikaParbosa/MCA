#include<stdio.h>
int main()
{
    float width, breadth, area;
    printf("Enter the value for width: ");
    scanf("%f",&width);
    printf("\n Enter the value for breadth: ");
    scanf("%f",&breadth);
    area=width*breadth;
    printf("\n The area of the rectangle is: %f",area);
    return 0;
}
