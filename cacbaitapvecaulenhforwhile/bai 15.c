#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    double rate = 0.45 / 100;
    double money;
    printf("Nguoi anh em gui vao bank bao tien va gui may thang: ");
    scanf("%lf %d", &money, &n);
    printf("Sau %d thang, nguoi anh em se co: %lf dong", n, money * pow((1 + rate), n));
    return 0;
}
