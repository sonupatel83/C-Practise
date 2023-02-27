#include<stdio.h>
int main(){int small,i,large;
int arr[5];
for(int i=0;i<5;i++){
    printf("%d value of the array",i);
    scanf("%d",&arr[i]);
}
small=large=arr[0];
for(int i=0;i<5;i++){
   if(arr[i]<small){
 small=arr[i];
   }
   else if(small=large){
small=large=arr[i];
   }
   else{
        large=arr[i];
   }
}
printf("%d is small",small);
printf("%d is large",large);
    return 0;
}