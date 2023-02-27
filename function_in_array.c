#include<stdio.h>
int square(int num);
int main(){int i,temp,sq,num;
int arr[6];
for(int i=0;i<6;i++){
    printf("%d value of the array",i);
scanf("%d",&arr[i]);
}
printf("Squares of array is\n");
for(int i=0;i<6;i++){
printf("%d\t",square(arr[i]));
}
return 0;
}
int square(int num){
    int arr[6];
for(int i=0;i<6;i++){
    arr[i]=num*num;
    return arr[i];
}
}