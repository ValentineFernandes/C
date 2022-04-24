#include<stdio.h>
int main() 
{
 float val1, val2;
 
 printf("Enter The First Number :\n");
 scanf("%f", &val1);

 printf("Enter The Second Number :\n");
 scanf("%f",&val2);

 if(val1 >val2)
 {
     printf("First Number is Greater Than Second\n");
 }
 else if(val2 > val1)
 {
     printf("Second Number is Greater Than First\n");
 }
 else
 {
     printf("Both Number are Equal");
 }
 return 0;
}
