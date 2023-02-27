#include<stdio.h>
int main(){
    int arr[100];
    int index,n,num,temp,b;
     printf("Enter num of element");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("\narr[%d]",i);
        scanf("%d",&arr[i]);
    }
    printf("Enter position and num where to insert");
    scanf("%d %d",&index,&num);
  for(int i=n-1;i>=index-1;i--){
    arr[i+1]=arr[i];
    arr[index]=num;
}
for(int i=0;i<n+1;i++){
    printf("%d\t",arr[i]);
}
for(int i=0;i<n+1;i++){
 if(arr[i]>arr[i+1]){
    temp=arr[i];
    arr[i]=arr[i+1];
    arr[i+1]=temp;
 }
}
printf("\n");
for(int i=0;i<n+1;i++){
    printf("%d\t",arr[i]);
}
    return 0;
}