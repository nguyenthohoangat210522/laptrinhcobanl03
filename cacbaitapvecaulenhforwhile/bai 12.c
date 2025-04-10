#include <stdio.h>
#include <math.h>

double gt(int num)
{
    double tich = 1;
    for (int i = 1; i <= num; i++)
    {
        tich = tich * i;
    }
    return tich;
}

int main()
{
    double x, eps, sinx;
    printf("Nhap x(rad) va eps: ");
    scanf("%lf %lf", &x ,&eps);
    int n = 0;
    sinx = 0;
    while ((pow(x, 2*n + 1) / gt(2*n + 1)) > eps)
    {
        sinx += pow(-1, n) * (pow(x, 2*n + 1) / gt(2*n + 1));
        n += 1;
    }
    printf("Voi x = %lf, eps = %lf thi sin(x) = %lf", x, eps, sinx);
    return 0;
}
