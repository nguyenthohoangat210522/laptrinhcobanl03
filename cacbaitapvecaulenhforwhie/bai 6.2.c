#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,sum=0;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        if(a%i==0)
                sum=sum+i;}
        if(sum==2*a)
            printf("so %d la so hoan hao",a);
        else
            printf("so %d khong phai la so hoan hao",a);
    return 0;
}
