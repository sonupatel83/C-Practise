#include <stdio.h>
#include<math.h>
int main(){
int reverse(int num){
    int rev=0;
    int rem;
    while(num!=0){
    rem=num%10;
    rev=rev*10+rem;
    num=num/10;
}
return rev;
}
int num;
printf("Enter any number");
scanf("%d",&num);
int rev=reverse(num);
printf("Reverse number is%d",rev);
 return 0;
}