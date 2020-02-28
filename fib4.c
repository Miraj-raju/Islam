#include <stdio.h>
int f[100],count=0;
int fib(int n){
    if(f[n]) return f[n];
    if(n<=1) return f[n]=n;

    count++;
    return f[n]=fib(n-1)+fib(n-2);
}
int main(){
    int i,n=6;

    for(i=0;i<100;i++)
        f[i]=0;

    fib(n);

    printf("Function Called: %d \n", count);
    for(i=0;i<100;i++){
        printf("%d \t",f[i]);
    }
    return 0;
}

