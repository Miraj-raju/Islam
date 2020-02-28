#include <stdio.h>
int main(){
    int i,f[100];
    f[0] = 0;
    f[1] = 1;

    for(i=2;i<20;i++){
        f[i] = f[i-1]+f[i-2];
    }

    for(i=0;i<20;i++){
        printf("%d \t",f[i]);
    }
    return 0;
}
