#include<stdio.h>
int main(){int i,temp;
int arr[6];
for(int i=0;i<6;i++){
    printf("%d value of the array",i);
scanf("%d",&arr[i]);
}
for(int i=0;i<3;i++){
    temp=arr[i];
    arr[i]=arr[5-i];
    arr[5-i]=temp;
}
for(int i=0;i<6;i++){
// ye step smjh nhi aaya ki temp=arr[0,1,2]  3rd dtep above
//mai arr[5,4,3]=temp hai to temp=arr[i]kaise ban gaya
printf("%d",arr[i]);
}
    return 0;
}