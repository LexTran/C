/*最大公约数和最小公倍数*/
#include <stdio.h>

int main(){
    printf("input numbers:");
    int m,n,temp;
    scanf("%d %d", &m, &n);
    int num1=m,num2=n;
    while(n!=0){
        temp = m%n;
        m = n;
        n = temp;
    }
    printf("最大公约数为 %d\n", m);
    printf("最小公倍数为 %d\n", num1*num2/m);
    return 0;
}