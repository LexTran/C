/*统计字符数*/
#include <stdio.h>

int main(){
    char c;
    int letters=0, space=0, digit=0, others=0;
    while((c=getchar())!='\n'){
        if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
            letters++;
        else if(c==' ')
            space++;
        else if(c>='0'&&c<='9')
            digit++;
        else
            others++;
    }
    printf("letters=%d,space=%d,digit=%d,others=%d",letters,space,digit,others);
    return 0;
}