#include <stdio.h>

int main(void){
    printf("Dwste arithmo :\n");
    int x;
    scanf("%d",&x);
    int r,sum = 0;
    do{
        r = x % 10;
        //printf("r :%d\n",r);
        sum = sum + r;
        x = x / 10;

    }while(x != 0);
    printf(" Sum :%d",sum);
}
