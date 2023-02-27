#include<stdio.h>
int linearsearch(int arr[],int num,int n);
int main()
{int n,num;
int arr[100];
printf("Enter number of elemnt wants to put");
scanf("%d",&n);
for(int i=0;i<n;i++){
    printf("enter %d elment of th e array",i);
    scanf("%d",&arr[i]);
}
printf("Enter which num you want to find");
scanf("%d",&num);
printf("Number %d is in %d position of array",num,(linearsearch(arr,num,n)));
 return 0;
}
int linearsearch(int arr[],int num,int n)
{
    for(int i=0;i<n;i++){
        if(arr[i]==num){
            return (i+1);
        }
    }
}