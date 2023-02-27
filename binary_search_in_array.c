#include<stdio.h>
int bsearch(int arr[],int lval,int hval,int n);
int main(){int i,n,lval=0,hval=8; int arr[9]={1,2,3,4,5,6,7,9,6};
printf("Enter number which you  want to find in array:\n");
scanf("%d",&n);
printf("%d value is in position %d",n,bsearch(arr,lval,hval,n));
return 0;
}
int bsearch(int arr[],int lval,int hval,int n){
  int mid=((lval+hval)/2);
if(n==arr[mid]){
   return mid+1;
}
else if(n>arr[mid]){
  return bsearch(arr,mid+1,hval,n);//for calling we dont have to write int arr and also arr[] like int arr[],
}
else{
 return bsearch(arr,lval,mid-1,n);   
}
}

