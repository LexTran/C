#include <stdio.h>

int main(){
    int a,n,count=1;
    printf("input a and n:");
    scanf("%d %d", &a, &n);
    int temp=0, result=0;
    while(count<=n){
        temp += a;
        result += temp;
        a *= 10;
        count++;
    }
    printf("\nresult=%d", result);
    return 0;
}