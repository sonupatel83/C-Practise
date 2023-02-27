#include <stdio.h>
int main(){
    int num,rem; int count=0;
printf("Enter number");
scanf("%d",&num);
while(num!=0){
rem=num%10;
num/=10;
++count;
}
printf("%d",count);


    return 0;
}