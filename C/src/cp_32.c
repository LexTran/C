/*计算面积重叠*/
#include <stdio.h>

int abs(int i){
    if(i<0){
        i = -i;
        return i;
    }
    else
        return i;
}

int main(){
    int x,y;
    scanf("%d %d", &x, &y);
    int x_rest,y_rest;
    x_rest = 20 - abs(x);
    y_rest = 20 - abs(y);
    int s;
    s = x_rest*y_rest;
    printf("%d", s);
    return 0;
}