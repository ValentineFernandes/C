#include<stdio.h>
int main()
{
   int n, n1, rem, num=0; 
   
   while(1)
   {
   printf("Enter a Positive Integer To Check For Armstrong : \n");
   scanf("%d", &n);
  
   n1=n;
  
   while(n1!=0)
   {
       rem=n1%10;
       num+=rem*rem*rem;
       n1/=10;
   }
   if(num==n)
     printf("\n%d Is An Armstrong Number.\n\n",n);
   else
     printf("\n%d IsNot an Armstrong Number.\n\n",n);
    }
    return 0; 
}
