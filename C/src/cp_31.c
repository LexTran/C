/*求字符串长度*/
#include <stdio.h>
#include <stdlib.h>

int length(char *str){
    int cnt=0;
    while(*str != '\0' ){
        cnt++;
        str++;
    }
    return cnt;
}

int main(){
    char *str=NULL;
    printf("input your string:\n");
    scanf("%s", str);
    printf("the length of string is %d", length(str));
    return 0;
}