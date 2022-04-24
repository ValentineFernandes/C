#include<stdio.h>
#include<conio.h>
void main() 
{
    long int r=0,i=1,odd=0,even=0,no,n,rev=0;
  
  while(1)
  {
    printf("\n\nEnter Any Number : ");
    scanf("%ld",&n);
    
 no=n;

    while(no!=0)
    {
         
        r=no%10;
        rev=rev*10+r;
        no=no/10;
    }

    while(rev!=0)
    {
        r=rev%10;
        if(i%2==0)
        {
         even=even+r;
        }
        else
        {
            odd=odd+r;
        }
        rev=rev/10;
        i++;
    }

    printf("\nOdd Digit sum = %ld \n ",odd);
    printf("\nEven Digit Sum = %ld \n ",even);

    if(odd==even)
     printf("\n%ld Is Divisible by 11\n\n",n);
    else
     printf("\n%ld Is Not Divisible by 11\n\n",n);
 }
    getch();

}
