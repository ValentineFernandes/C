#include<stdio.h>
int main()
{
 int n, reverse=0, rem,temp;

 printf("Enter an Integer To Check Number:\n");
 scanf("%d", &n);
  
 temp=n;
   
 while(temp!=0)
 {
  rem=temp%10;
  reverse=reverse*10+rem;
  temp/=10;
 }

   if(reverse==n)
       printf("%d is a Palindrome Number.",n);
   else
       printf("%d is Not a Palindrome Number.",n);
   return 0;
}
