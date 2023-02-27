#include<stdio.h>

int main(){

    int i;
        int num;
printf("Enter any num");
scanf("%d",&num); //& symbol bhul gaya tha dekh ke
printf("Prime factors of %d are:\n",num);
for(int i=2;i<=num;i++)
    while(num%i==0){
        printf("%d",i);
        num=num/i;
        printf("\n");
    }
//    printf("%d",i);


    return 0;
}