#include<stdio.h>
int main ()
{
    int age,temp=0 ;;
    
    while(1)
    {
     
 printf("Enter Your Age Here\n");
    scanf("%d",&age);
    
 if( age >= 18 && age<100 )
  {
     printf("Congratulation !!! You Are Eligible For Voting\n\n" );
    }
    else if( age >= 100 )
  {
     printf("You Are Eligible But We Suggest Take a Rest\n\n" );
    }
    else if(age<18)
    {
  temp = 18 - age; 
     printf("You Not Are Eligible or You are Not Mature \n\n" );
     printf("Wait %d Years For Vote .\n",temp );
    }
  }
   return 0;
}
