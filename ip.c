#include<stdio.h>
#include<string.h>
#include<math.h> 
void main()
{
    int i,j,k,dig,no,nu,cnt=0;
    char str[] ={'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'};
    char ch;
    
    printf("\nEnter How Many IP Addresses You Want To Print :");
    scanf("%d",&no);

 printf("\n\nWhat You Want ipv4 Or Ipv6 Enter (4 Or 6) :");
    scanf("%d",&nu);
    
 switch(nu)
    {
     case 4:
      srand(time(NULL));
      for(i=0;i<no;i++)
      {
       for(j=0;j<4;j++)
       {
    cnt=rand()%255;
    printf("%d",cnt);
    if(j<3)
    printf(".");
    }
    printf("\n");
   }
   break;
  case 6 :
      srand(time(NULL));
      for(i=0;i<no;i++)
      {
       for(j=0;j<8;j++)
       {
        for(k=0;k<4;k++)
        {
     ch=str[rand()%16];
     printf("%c",ch);
     }
    if(j<7)
    printf(".");
    }
    printf("\n");
   }
   break;
     default :printf("\nEnter ipv Either 4 or 6\n\n"); 
 }
    
    getch();
}
