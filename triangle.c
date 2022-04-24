#include<stdio.h>

int main()
{
   
    float b,h,area;

    printf("Enter Height and Base Of Triangle : ");
    scanf("%f %f",&h,&b);

    area = (h*b)/2;
    printf("Area of Triangle is: %f\n",area);
    return 0;
}
