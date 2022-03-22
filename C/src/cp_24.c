/*判断质数*/
#include <stdio.h>
#include <math.h>

int isPrime(int n){
    for(int i=2;i<n/2;i++){
        if(n%i==0)
            return 0;
    }
    return 1;
}
int isPrime_sq(int n){
    int j=sqrt(n+1);
    for(int i=2;i<j;i++){
        if(n%i==0)
            return 0;
    }
    return 1;
}

int main(){
    printf("input the number:");
    int n;
    scanf("%d", &n);
    if(isPrime(n)){
        printf("%d is 质数", n);
    }else{
        printf("%d is not 质数", n);
    }
    int m=isPrime_sq(n);
    printf("\n%d", m);
    return 0;
}