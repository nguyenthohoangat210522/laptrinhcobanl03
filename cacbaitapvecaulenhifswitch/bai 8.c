#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a,b,c;
    printf("Nhap vao cac canh cua tam giac a,b,c: \n");
    scanf("%lf%lf%lf", &a, &b, &c);
    if ((a + b > c) && (a + c > b) && (b + c > a) && (a > 0) && (b > 0) && (c > 0))
    {
        if (a == b == c)
        {
            printf("Tam giac deu\n");
        }
        else if (a*a == b*b + c*c || b*b == a*a + c*c || c*c == b*b + a*a)
        {
            if(a == b || b == c || a == c)
            {
                printf("Tam giac vuong can\n");
            }
            else
            {
                printf("Tam giac vuong\n");
            }
        }
        else if (a == b || b == c || a == c)
        {
            printf("Tam giac can\n");
        }
        else
        {
            printf("Tam giac thuong\n");
        }
        double p = ((a + b + c) / 2);
        double C = p * 2;
        double S = sqrt(p * (p - a) * (p - b) * (p -c ));
        printf("Chu vi tam giac la: %.2lf\n",C);
        printf("Dien tich tam giac la: %.2lf",S);
    }
    else
    {
        printf("Khong phai tam giac");
    }
    return 0;
}
