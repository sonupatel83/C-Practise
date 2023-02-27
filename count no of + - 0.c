#include <stdio.h>
int main()
{
    int n;
    int countp=0;
    int countn=0;
    int count=0;
    printf("Enter a number, press 7171 to stop\n");
    scanf("%d",&n);
    do{
        if(n>0){
            ++countp;
        }
        else if(n<0){
            ++countn;
        }
        else{
            ++count;
        }
    }while(n!=7171);
    printf("zeros are\n%d",count);
    printf("+ve are\n%d",countp);
    printf("-ve are\n%d",countn);
return 0;
}