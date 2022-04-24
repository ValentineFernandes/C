#include<stdio.h>

main()
{
int i,n=11,j;
float temp=0.0f;

float a[11] = {1.01,6.66,3.3,7.5,2.2,4.1,7.9,9.7,0.01,9.14,0.69};

printf("\nSorting A Float Array \n");

printf("\n\nElement Before Sorting \n\n");

for(i= 0; i<=10; i++) 
{
    printf("%.2f  ", a[i]);
}

printf("\n");

printf("\n\nElement After Sorting \n\n");

for(i=0;i<n;i++)
{
    for(j=0;j<n-i-1;j++)
    {
        if(a[j]>a[j+1])
        {
            temp=a[j+1];//swaping element 
            a[j+1]=a[j];
            a[j]=temp;
        }
    }
}
//printing output of program
for(i= 0; i< 11; i++) 
{
    printf("%.2f  ", a[i]);
}
printf("\n\n");
}
