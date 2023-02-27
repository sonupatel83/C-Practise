#include <stdio.h>
int main(){
    int num;
    int fact=1;//factorial ko zero kr rkha tha
    float add=0;
    float t;
printf("Enter num");
scanf("%d",&num);

for(int i=1;i<=num;i++)
{
fact=i*fact;
add=add+(float)i/fact;//float likhna bhul gaya tha and also that float bracket mai hona chahiye.
}
printf("sum is %f",add);

    return 0;
}