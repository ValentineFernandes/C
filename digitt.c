#include<stdio.h>
#include<math.h>
int main()
{ 
   int n,count=0;
  
   printf("Enter Any Number To Count Digit : \n\n");
   scanf("%d", &n);
  
   count=log10(n)+1;
   
   printf("\nNumber of Digits Is = %d",count);
 return 0;
}
