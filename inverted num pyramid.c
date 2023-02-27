#include<stdio.h>
int main(){
int num=4;
for(int i=num;i>=1;i--)
{
    for(int j=1;j<=i;j++)    //j<=i ke jagah num put kar rha tha to dekh ke.
    {
           printf("%d",j);
    }
 printf("\n");
}
 return 0;
}