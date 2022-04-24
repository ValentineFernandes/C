#include<stdio.h>
int main(){

    long int sum,num,m;

    printf("Enter any number: \n");
    scanf("%ld",&num);

    while( num > 10 )
 {
        sum = 0;

        while(num)
  {
            m = num%10;
            num = num/10;
            sum += m;
        }
        if(sum > 10)
            num = sum;
        else
            break;
    }

    printf("Generic Root is: %ld\n",sum);

return 0;

}
