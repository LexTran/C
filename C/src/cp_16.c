/*小球下落*/
#include <stdio.h>

int main(){
    double height=100,path=0;
    int n=10;
    for(int i=0;i<n;i++){
        path += height;
        height/=2;
        path += height;
    }
    printf("total path is %fm, last path is %fm", path, height);
    return 0;
}