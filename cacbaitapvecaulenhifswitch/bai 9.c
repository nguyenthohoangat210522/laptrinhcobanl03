#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    switch(a)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 9:
    case 11:printf("thang %d nam %d co 31 ngay ",a,b);break;
    case 4:
    case 6:
    case 8:
    case 12:
    case 10:printf("thang %d nam %d co 30 ngay ",a,b);break;
    case 2:
    {
    if(b%4==0 && b%100!=0)
        printf("thang %d nam %d co 29 ngay ",a,b);
    else printf("thang %d nam %d co 28 ngay ",a,b);

    }
    break;
   }
    return 0;
}
