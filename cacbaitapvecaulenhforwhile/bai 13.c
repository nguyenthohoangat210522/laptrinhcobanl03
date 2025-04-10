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
    double eps, sum;
    int x;
    printf("Nhap x va eps: ");
    scanf("%d %lf", &x ,&eps);
    int n = 0;
    sum = 0;
    while ((pow(x, n) / gt(n)) > eps)
    {
        sum += (pow(x, n) / gt(n));
        n += 1;
    }
    printf("Voi eps = %lf thi e^%d = %lf", eps, x, sum);
    return 0;
}
