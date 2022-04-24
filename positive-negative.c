#include<stdio.h>
int main()
{
 int a;
 printf("Enter The Number You Want To Check :\n");
 scanf("%d",&a);
 
 if(a<0)
 {
   printf("Number Is Negative:\n");
 }
 else if(a>0)
 {
   printf("Number Is Possitive:\n");
 } 
 else
 {
  printf("You Enter Zero :\n");
  }
 return 0;

}
