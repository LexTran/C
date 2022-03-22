/*猴子吃桃*/
#include <stdio.h>

int main(){
    int day=9, total, left=1;
    while(day>0){
        total = (left+1)*2;
        left = total;
        day--;
    }
    printf("total peach number is:%d", total);
    return 0;
}