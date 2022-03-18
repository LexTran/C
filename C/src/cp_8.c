#include <stdio.h>

int main(){
    long r1,r2;
    r1 = r2 = 1;
    for(int i=1;i<20;i++){
        printf("%12ld %12ld", r1, r2);
        if(i%2==0)
            printf("\n");
        r1 = r1+r2;
        r2 = r1+r2;
    }
    return 0;
}