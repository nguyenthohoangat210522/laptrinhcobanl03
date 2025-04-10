#include <stdio.h>

int fibonaci(int num)
{
    if (num == 1 || num == 2)
    {
        return 1;
    }
    return fibonaci(num - 1) + fibonaci(num - 2);
}

int main()
{
    int n;
    printf("Nhap vao so n: ");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("n phai lon hon 0");
    }
    else
    {
        printf("So hang thu %d cua day fibonaci la: %d", n, fibonaci(n));
    }
    return 0;
}
