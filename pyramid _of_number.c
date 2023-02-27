#include<stdio.h>
int main(){
int row=5;
for(int i=1;i<=row;i++)
{
    for(int j=row-1;j>=1;j--){
    printf(" ");
        for(int k=1;k<=row;k++){
            printf("%d",k);
    }
}
printf("/n");
}

    return 0;
}