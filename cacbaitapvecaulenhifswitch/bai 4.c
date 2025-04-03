#include <stdio.h>
#include <stdlib.h>

int main()
{
    double R,S,V;

    printf("Nhap vao ban kinh R:");
    scanf("%lf",&R);
    S =4*3.14*R*R;
    V =4/3*3.14*R*R*R;
    printf("dien tich la %.3lf\nthe tich la %.3lf",S,V);

    return 0;
}
