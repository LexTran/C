/*循环移位*/
#include <stdio.h>
#include <stdlib.h>

void move(int *arr, int len, int off){
    int *arr_end;
    int *roll;
    arr_end = arr+len;
    int last;
    while(off){
        last = *(arr_end-1);
        for(roll=arr_end-1;roll!=arr;roll--){
            *roll = *(roll-1);
        }
        *arr = last;
        off--;
    }
}

int main(){
    int arr[20];
    int n;
    printf("input numbers: ");
    scanf("%d", &n);
    printf("input array elements: ");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int off;
    printf("input offset: ");
    scanf("%d", &off);
    move(arr, n, off);
    for(int i=0;i<n;i++)
        printf("%d ", arr[i]);
    return 0;
}