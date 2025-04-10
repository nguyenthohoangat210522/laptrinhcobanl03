#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,gt=1;
    scanf("%d",&a);
    printf("gia tri cua %d! la : ",a);
    for(int i=1;i<=a;i++)
    gt=gt*i;
    printf("%d",gt);

    return 0;
}
