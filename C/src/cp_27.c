/*数组中插入元素*/
#include <stdio.h>

int main(){
    int a[10]={1,4,5,6,23,65,77,88,92};
    int n;
    printf("original array:");
    for(int i=0;i<9;i++)\
        printf("%d ", a[i]);
    printf("\nthe insert number is:");
    scanf("%d", &n);
    int temp;
    if(n>a[8])
        a[9] = n;
    else{
        for(int i=8;i>=0;i--){
            if(a[i]>n){
                temp = a[i];
                a[i] = n;
                a[i+1] = temp;
            }
        }
    }
    for(int i=0;i<10;i++)
        printf("%d ", a[i]);
    return 0;
}