/*冒泡排序*/
#include <stdio.h>

int main(){
    int a[10],temp;
    printf("input numbers:\n");
    for(int i=0;i<10;i++)
        scanf("%d", &a[i]);
    for(int i=0;i<9;i++){
        int min=i;
        for(int j=i+1;j<10;j++){
            if(a[min]>a[j])
                min=j;
        }
        if(min!=i){
            temp = a[min];
            a[min] = a[i];
            a[i] = temp;
        }
    }
    printf("the result:");
    for(int i=0;i<10;i++)
        printf("%d ", a[i]);
    return 0;
}