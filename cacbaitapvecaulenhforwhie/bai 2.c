#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    do
    {
        printf("Nhap so: ");
        scanf("%d", &a);
        if (a < 0)
        {
            printf("So %d la so am khong phai so nguyen to\n",a);
        }
    }
    while (a < 0);
    if (a <= 1)
    {
        printf("so %d khong phai la so nguyen to ",a);
    }
    else
    {
        int count = 0;
        for (int i = 2; i <= sqrt(a); i++)
        {
            if (a % i == 0)
            {
              printf("so %d khong phai la so nguyen to ",a);
                count = 1;
                break;
            }
        }
        if (count == 0)
        {
          printf("so %d la so nguyen to ",a);
        }
    }
    return 0;
}
