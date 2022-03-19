/*求素数*/
#include <stdio.h>
#include <math.h>

int main(){
    int flag=1,count=0;
    for(int i=101;i<200;i++){
        int j=sqrt(i+1);
        for(int m=2;m<j;m++){
            if(i%m==0){
                flag=0;
                break;
            }
        }
        if(flag==1){
                printf("%-4d ", i);
                count++;
        }
        flag = 1;
    }
    printf("\ntotal is %d\n", count);
    return 0;
}