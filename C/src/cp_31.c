/*求字符串长度*/
#include <stdio.h>
#include <stdlib.h>

int length(char *str){
    int i=0;
    while(*str != '\0' ){
        i++;
        str++;
    }
    return i;
}

int main(){
    char str[20];
    printf("input your string:\n");
    scanf("%s", &str);
    printf("the length of string is %d", length(str));
    return 0;
}