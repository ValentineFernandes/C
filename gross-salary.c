#include<stdio.h>

int main()
{
    float GrossPayment,basic,da,hra,da1,hra1;

    printf("Enter basic salary : ");
    scanf("%f", &basic);

   
    printf("Enter DA : ");
    scanf("%f", &da1);

    printf("Enter HRA : ");
    scanf("%f", &hra1);


    da = (da1 * basic) / 100;
    hra = (hra1 * basic) / 100;

    GrossPayment = basic + da + hra;

    printf("\nGross Salary :%f\n",GrossPayment);
    return (0);
}
