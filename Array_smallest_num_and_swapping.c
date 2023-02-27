#include<stdio.h>
int main(){
int arr[7]={5,3,5,-1,9,3,0};int small,i,temp;
small=arr[0];
for(int i=0;i<7;i++){
    if(arr[i]<small){
        small=arr[i];
    }
}
printf("Smallest value of array is %d\n",small);
if(small!=arr[0]){
        temp=arr[0];
        arr[0]=small;
        small=temp;
    }
for(int i=0;i<7;i++)
{
    printf("%d\t",arr[i]);
}
return 0;
}