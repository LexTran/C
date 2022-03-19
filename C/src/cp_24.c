/*判断质数*/
#include <stdio.h>

int isPrime(int n){
    for(int i=2;i<n;i++){
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
    
    return 0;
}