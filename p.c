#include<stdio.h>
int main(){
int arr[100];
int temp,n,number,i;
printf("Enter number of element\n");
scanf("%d",&n);
for(int i=0;i<n;i++){
    printf("\nArr[%d]",i);
    scanf("%d",&arr[i]);
}
for(int i=0;i<n;i++){
    if(i%2==0){
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
    // else{
    //     arr[i];
    // }
}
for(int i=0;i<n;i++){
printf("%d\t",arr[i]);
}
    return 0;
}C:\Users\DELL\tutorial\p.c