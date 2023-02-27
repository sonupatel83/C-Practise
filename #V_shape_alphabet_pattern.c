#include <stdio.h>
int main(){
    int row;
printf("Enter no of row ");
scanf("%d",&row);
for(int i=1;i<=row;i++){
    for(int j=1;j<i;j++){
        printf(" ");
    }
    for(char k='A';k<='G';k++){
        printf("%c",k);
    }
    for(char k='F';k>='A';k--){
        printf("%c",k);
    }
    printf("\n");
}



    return 0;
}