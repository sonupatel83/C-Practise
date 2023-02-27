#include<stdio.h>
int main(){
int arr[100];
int pos,n,number;
printf("Enter number of element\n");
scanf("%d",&n);
for(int i=0;i<n;i++){
    printf("\nArr[%d]",i);
    scanf("%d",&arr[i]);
}
printf("Enter position of element\n");
scanf("%d",&pos);
printf("Enter number ");
scanf("%d",&number);
for(int i=n-1;i>=pos-1;i--){
    arr[i+1]=arr[i];
    arr[pos]=number;  
}
 n++;//This is to increase the length of arr. 
for(int i=0;i<n;i++){
    printf("%d\t",arr[i]);
}
return 0;
}