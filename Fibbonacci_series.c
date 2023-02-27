#include<stdio.h>
int fib(int n);
int main(){
    int n,i;
printf("enter");
scanf("%d",&n);
for(int i=2;i<=n;i++){
    printf("%d\t",fib(i));
}
 return 0;
}
int fib(int n){
if(n==0 || n==1){
    return 1;
}
return fib(n-1)+fib(n-2);
}