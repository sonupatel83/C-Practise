#include <stdio.h>
int main(){
    int n,i,table;
printf("Enter num for which you want to print table");
scanf("%d",&n);
printf("Table of %d is:\n",n);
for(int i=1;i<=10;i++)
{
    table=n*i;
    printf("%d X %d is %d\n",n,i,table);
}


    return 0;
}