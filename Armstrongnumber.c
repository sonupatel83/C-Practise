#include <stdio.h>
#include<math.h>
int main(){
    int num,rem;
  int sum=0;
printf("Enter number");
scanf("%d",&num);
int n=num; // mai n=num declare nhi kiya tha to sum==num mai num while ke under wala output le rha tha.
while(num!=0){
    rem=num%10;
    sum+=rem*rem*rem;
    num/=10;
}
if (sum==n){
printf("it is armstrong number");
}
else{
    printf("it is not armstrong number");
}
    return 0;
}