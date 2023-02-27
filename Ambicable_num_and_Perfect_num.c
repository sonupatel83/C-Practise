#include <stdio.h>
int ambicable(int n1,int n2);
int pfnum(int n1,int n2);
int main(){
    int n1,n2;
printf("Enter two num\n");
scanf("%d%d",&n1,&n2);
ambicable(n1,n2);
pfnum(n1,n2);
 return 0;
}
int ambicable(int n1,int n2){
int sum1=0;
for(int i=1;i<n1;i++){
    if(n1%i==0){ //mai yaha while () chla rha tha too usse two loops ban rhe the.
       
    sum1=sum1+i;
    }
    }
printf("%d\n",sum1);

int sum2=0;
for(int i=1;i<n2;i++){
    if(n2%i==0){
        // printf("%d\n",i);
    sum2=sum2+i;
    }
  }
printf("%d\n",sum2);
 if (sum2==n1 &&sum1==n2){
    printf("Its ambicable number\n");
 }
 else{
printf("It is not ambicable number\n");
 }
}

int pfnum(int n1,int n2){
int sum1=0;
for(int i=1;i<n1;i++){
    if(n1%i==0){ //mai yaha while () chla rha tha too usse two loops ban rhe the.
        // printf("%d",i);
    sum1=sum1+i;
    }
    }
    if(sum1==n1){
printf("Num 1 is a perfect num\n");
    }
else{
    printf("Num 1 is not a perfect num\n");
}
int sum2=0;
for(int i=1;i<n2;i++){
    if(n2%i==0){ //mai yaha while () chla rha tha too usse two loops ban rhe the.
    sum2=sum2+i;
    }
    }
    if(sum2==n2){
printf("Num 2 is a perfect num\n");
    }    
else{
    printf("Num 2 is not a perfect num\n");
}
}
