#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    scanf("%d",&a);
    printf("uoc cua so %d la : ",a);
    for(int i=1;i<=a;i++)
        if(a%i==0)
        printf(" %d ",i);
    return 0;
}
