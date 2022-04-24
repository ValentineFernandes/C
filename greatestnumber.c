#include<stdio.h>

int main()
{
   
   double num1, num2, num3;

    printf("Enter Three Numbers: \n");
    scanf("%lf %lf %lf", &num1, &num2, &num3);

   if (num1 > num2 && num1 > num3)
      printf("\nGreatest Number Is :%lf",num1);

   else if (num2 > num3 && num2 > num1)
      printf("\nGreatest Number Is :%lf",num2);

   else if (num1 > num1 && num3 > num2)
      printf("\nGreatest Number Is :%lf",num1);
      
   else if ((num1==num2) && (num2==num3) && (num3==num1))
     printf("\nAll Are Equal"); 


}
