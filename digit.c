#include<stdio.h>
int main()
{
  
   int n,count=0;
  
   printf("Enter Any Number To Count Digit : \n\n");
   scanf("%d", &n);
  
   while(n!=0)
   {
       n/=10;          
       ++count;
   }
   printf("\nNumber of Digits Is = %d",count);
 return 0;
}
