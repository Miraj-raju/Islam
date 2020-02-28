#include <stdio.h>
int count=0;
int fib(int n){
    if(n<=1)
        return n;

    count++;
    return fib(n-1)+fib(n-2);
}
int main(){
    int n=6,x;
    x=fib(n);
    printf("%d\n", x);
    printf("Function Called: %d", count);
    return 0;
}
