/*质数因数分解*/
#include <stdio.h>

int main(){
    int n;
    printf("input a number:");
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        while(n%i==0)
        {
            printf("%d",i);
            n/=i;
            if(n!=1) printf("*");
        }
    }
    printf("%d", n);
    return 0;
}