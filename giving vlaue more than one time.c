#include<stdio.h>
int main(){
     int n;
     int other;
do
{
printf("enter any num to find  square\n");
scanf("%d",&n);
printf("square is %d\n",n*n);
printf("want to find for different number if yes-Y no-N\n");
fflush(stdin);   // it flushes our previous value and add new
scanf("%c",&other);//other isliye hai ki hum pucch rhe hai yes or no
}
while(other!='n');

    return 0;
}