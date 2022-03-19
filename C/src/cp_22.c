/*回文数*/
#include <stdio.h>

int main(){
    int tentho,tho,hun,ten,one,a;
    printf("input the number:");
    scanf("%d", &a);
    tentho = a/10000;
    tho = a%10000/1000;
    hun = a%1000/100;
    ten = a%100/10;
    one = a%10;
    if(one==tentho&&ten==tho)
        printf("%d is 回文数", a);
    else
        printf("%d is not 回文数", a);
    return 0;
}