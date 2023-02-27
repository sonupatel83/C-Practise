#include<stdio.h>
int power(float x,int n);
int factorial(int n);
int series(float x,int n);
int main(){
int n;
float x;
float ans;
// float sum;
printf("Enter any value of x \n");
scanf("%f",&x);
printf("upto which term you ar goung to slove\n");
scanf("%d",&n);
ans=series(x,n);
printf("%f \n",ans);
    return 0;
}
int series(float x,int n){
    int sign;
    float sum=0;
    int j,i;
    float term;
    for(int i=1;i<=n;i++){
if(i%2==0){
    sign=-1;
}
else{
    sign=1;
}
    }
term=sign*power(x,j)/factorial(j);
j=2*i-1;
sum=sum+term;
return(sum);
}

int factorial(int n){
int fact=1;
for(int i=1;i<=n;i++){
    fact=fact*i;
}
return(fact);
}

int power(float x,int n){
    int p=1;
    for(int i=1;i<=n;i++){
        p=p*x;
    }
        return(p);
}