/*递归方法求阶乘*/
#include <stdio.h>

int fact(int i){
    int sum;
    if(i==0){
        sum=1;
    }
    else{
        sum=i*fact(i-1);
    }
    return sum;
}

int main(){
    int n;
    printf("input number:");
    scanf("%d",&n);
    printf("%d",fact(n));
    return 0;
}