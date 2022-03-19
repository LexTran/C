/*逆序输出整数*/
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
    if(tentho!=0){
        printf("%d%d%d%d%d",one, ten, hun, tho, tentho);
    }else if(tho!=0){
        printf("%d%d%d%d",one, ten, hun, tho);
    }else if(hun!=0){
        printf("%d%d%d",one, ten, hun);
    }else if(ten!=0){
        printf("%d%d",one, ten);
    }else if(one!=0){
        printf("%d",one);
    }
    return 0;
}