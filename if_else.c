//if-else statement to find if the person is eligible for job or not
#include<stdio.h>
int main()
{
    float height,weight;
    char gender;
    printf("\n Enter the gender type 'M' for male and 'F' for female: ");
    scanf("%c",&gender);
    printf("\n Enter the values for height: ");
    scanf("%f",&height);
    printf("\n Enter the values for weight: ");
    scanf("%f",&weight);
    if(gender=='M')
    {
        if(height>=6 && weight>=60)
            printf("\n The person is eligible.");
        else
            printf("\n The person is not eligible.");
    }
    else
    {
        if(height>=5 && weight>=30)
        {
            printf("\n The person is eligible.");
        }
        else
        {
            printf("\n The person is not eligible.");
        }
    }
}
