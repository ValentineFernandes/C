#include <stdio.h>
int main()
{
    double num1, num2, num3;
    printf("Enter Three Numbers: ");
    scanf("%lf %lf %lf", &num1, &num2, &num3);
    if (num1>=num2)
    {
        if(num1>=num3)
            printf("%.2lf Is The Largest Number. ", num1);
        else
            printf("%.2lf Is The Largest Number. ", num3);
    }
    else
    {
        if(num2>=num3)
            printf("%.2lf Is The Largest Number. ", num2);
        else
            printf("%.2lf is the largest number.",num3);
    }
    
    return 0;

}
