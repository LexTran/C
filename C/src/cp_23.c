/*字符串中删除*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *delete(char *str, char *charSet){
    int hash [256];
    if(NULL == charSet){
        return str;
    }
    for(int i=0;i<256;i++){
        hash[i]=0;
    }
    for(int i=0;i<strlen(charSet);i++){
        hash[charSet[i]]=1;
    }
    int currentIndex=0;
    for(int i=0;i<strlen(str);i++){
        if(!hash[str[i]]){
            str[currentIndex++] = str[i];
        }
    }
    str[currentIndex] = '\0';
    return str;
} 

int main(){
    char s[2] = "a";
    char set[5] = "aca";
    printf("%s\n", delete(set, s));
    return 0;
}