#include <stdio.h>
int main(){

    int num,m;

    printf("Enter any number: ");
    scanf("%d",&num);

    printf("Generic root: %d",(m = num%9) ? m:9);

return 0;
}
