#include <stdio.h>
int main(){
    for(int i=1;i<=3;i++)
    {
        for(int j=1;j<=3;j++)
        {
            if(i==j)
             continue;    
// continue mtlb yaha jaise i==j hai to jb ye condition satisfy krega 
// us time ka i ka jo value rehga usko chood dega and next se continue krega
            printf("%d %d\n",i,j);
        }
    }
    return 0;
}