/*水仙花数*/
#include <stdio.h>

int main(){
    int one,ten,hun;
    for(int i=100;i<1000;i++){
        hun=i/100;
        ten=i/10%10;
        one=i%10;
        if(one*one*one+ten*ten*ten+hun*hun*hun==i){
            printf("%-3d\n",i);
        }
    }
    printf("\n");
    return 0;
}