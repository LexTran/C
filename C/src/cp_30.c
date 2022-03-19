/*座位问题*/
#include <stdio.h>

int main(){
    int n;
    printf("input the total number of people:\n");
    scanf("%d", &n);
    int arr[100];
    int *p;
    p=arr;
    for(int i=0;i<n;i++){
        *(p+i) = i+1;
    }
    int count=0;//计数后移
    int out=0;//退出人数
    int num=0;//报数
    while(out<n-1){
        if(*(p+count)!=0){
            num++;
        }
        if(num==3){
            num = 0;
            *(p+count) = 0;
            out++;
        }
        count++;
        if(count==n){
            count = 0;
        }
    }
    printf("left people is :");
    for(int loop=0;loop<n;loop++){
        if(arr[loop]!=0){
            printf("%2d\n",arr[loop]);
        }
    }
    return 0;
}