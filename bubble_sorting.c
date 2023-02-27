#include<stdio.h>
int main(){
    int arr[100];
    int n,temp;
    printf("Enter num of element");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("\narr[%d]",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1-i;i++){
        if(arr[i]>arr[i+1]){
            temp=arr[i+1];
            arr[i+1]=arr[i];
            arr[i]=temp;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d \t",arr[i]);
    }
    return 0;
}