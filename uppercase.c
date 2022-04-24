#include<stdio.h>
void main()
{
 char a;
 printf("Press Any Key : ");
 scanf("%c",&a);

 if(a>=65 && a<90)
 {
  printf("An Upper Case Letter");
 }
 else
 {
   if(a>=97 && a<=122)
   {
    printf("A lower Case");
   }
   else
   {
     if(a>=48 && a<=57)
     {
      printf("A Digit");
     }
     else
     {
     printf("A Special Symbol\n\n");
     }
   }
 }
}
