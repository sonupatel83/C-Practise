#include <stdio.h>
int main(){
int n;
int sum=0;
printf("enter any num");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    sum=sum+i;
    
}
printf("sum is:%d",sum);  //sum ko hamesha for loop ke baad likhna 
return 0;
}