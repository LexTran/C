/*逆序输出整数*/
#include <stdio.h>

int main(){
    int a, reverse=0, remainder=0;
    printf("input the number:");
    scanf("%d", &a);
    while(a != 0){
        remainder = a%10;
        reverse = reverse*10+remainder;
        a /= 10;
    }
    printf("reverse number is %d", reverse);
    return 0;
}