#include<stdio.h>
int main()
{
  
    int n, count=1, sum=0;
    
    while(1)
    {
 printf("\nEnter The Natural Number :\n");
    scanf("%d",&n);
    
 while(count<=n)
    {
        sum+=count;
        ++count;
    }
    
 printf("\nSum Of Natural Number Is  = %d\n",sum);
    
 }
 return 0;
}
