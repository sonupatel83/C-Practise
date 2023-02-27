#include<stdio.h>
int sum(int n);
int main(){
int n;
printf("Enter num");
scanf("%d",&n);
printf("%d\n",sum(n));


return 0;
}
int sum(int n){
int sumu=0;
int rem,num;
rem=n%10;
while(rem!=0){
sum(n/10);

}
sumu+=rem;
return sumu;
}