/*反序打印字符*/
#include <stdio.h>

void palin(int n){
    char next;
    if(n<=1){
        next=getchar();
        printf("output result:");
        putchar(next);
    }else{
        next=getchar();
        palin(n-1);
        putchar(next);
    }
}

int main(){
    int i=5;
    printf("input characters:");
    palin(i);
    return 0;
}