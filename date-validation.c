#include<stdio.h>
#include<conio.h>
void main()
{
  
    int d,m,y,i,leap=0,temp=0,temp1=0,temp2=0;

    printf("C Program to Date Validation");
    
    while(1)
    {
    printf("\n\nEnter The Date (dd mm yyyy) : ");
    scanf(" %d %d %d",&d,&m,&y);

    if(y<1600||y>2100)
    {
     printf("\nYear Is Not Valid !!!! Try Again");
     temp=1;
    }
    else
    {
     printf("\nYear Is Valid ");
    }

    if(temp!=1)
    {
     if(y%4==0)
      leap=1;
    }

    if(m<1||m>12)
    {
     printf("\nMonth Is Not Valid !!!! Try Again");
    }
    else
    {
     printf("\nMonth Is Valid ");
    }

    if(d<1||d>31)
    {
     temp2=1;
    }

    if(m>=1&&m<=7)
    {
     for(i=1;i<=6;i++)
     {
        if(m%2==0)
         temp1=30;
        if(m%2==1)
         temp1=31;
     }
    }

    if(leap==0&&m==2)
    {
  temp1=28;
 }

    if(leap==1&&m==2)
    {
  temp1=29;
 }

    if(m>=8&&m<=12)
    {
     for(i=7;i<=12;i++)
     {
        if(m%2==0)
         temp1=31;
        if(m%2==1)
         temp1=30;
     }
    }
    if(d>temp1)
     temp2=1;
    if(temp2==1)
     printf("\nDate Is Not Valid !!!!! Try Again");
    if(temp2==0)
     printf("\nDate Is Valid ");

 printf("\n\n\nPress Enter For Again Check Date Validity \n");
    getch();
 }
}
