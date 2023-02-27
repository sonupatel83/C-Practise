#include <stdio.h>
int main()
{int num,fact;
fact=1;
printf("Enter number");
scanf("%d",&num);
for(int i=1;i<=num;++i){
fact=i*fact;
}
printf("factorial of %d is:  %d",num,fact);
    return 0;
}