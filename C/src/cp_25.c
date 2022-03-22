/*字符串反转*/
#include <stdio.h>
#include <string.h>

void reverse(char *s){
    int len=0;
    char *p=s;
    while(*p != 0){
        len++;
        p++;
    }
    char c;
    for(int i=0;i<len/2;i++){
        c = *(s+i);
        *(s+i) = *(s+len-1-i);
        *(s+len-1-i) = c;
    }
}

int main(){
    printf("input your string:");
    char s[100];
    gets(s);
    reverse(s);
    printf("reverse string :%s", s);
    return 0;
}