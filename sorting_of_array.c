#include<stdio.h>
int main(){int i,j,temp;
int arr[5]={5,9,2,4,10};
for(int i=0;i<5;i++){
    for(int j=i+1;j<5;j++){
    if(arr[i]>arr[j]){// to make ascending or descending order we have to change in this step
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}
}
printf("Sorted element :\n");
for(int i=0;i<5;i++)
{
    printf("%d\t",arr[i]);
}
    return 0;
}