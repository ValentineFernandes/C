#include
int main()
{
    int num1, num2, i, hcf;
    
 printf("Enter Two Integers :\n");
    scanf("%d %d", &num1, &num2);
    
 for(i=1; i<=num1 || i<=num2; ++i)
    {
        if(num1%i==0 && num2%i==0)
            hcf=i;
    }
    printf("H.C.F of %d and %d is %d", num1, num2, hcf);
    return 0;
}
