#include <stdio.h>

void tao_mt(int m, int n, float mt[m][n])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%f", &mt[i][j]);
        }
    }
}

void in_mt(int m, int n, float mt[m][n])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%g ", mt[i][j]);
        }
        printf("\n");
    }
}

void nhan_mt (int a, int b, int c, int d, float mt1[a][b], float mt2[c][d], float mt[a][d])
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < d; j++)
        {
            float tong = 0;
            for (int k = 0; k < c; k++)
            {
                tong += mt1[i][k] * mt2[k][j];
            }
            mt[i][j] = tong;
        }
    }
}

int main()
{
    int a, b, c, d;
    printf("Nhap kich thuoc ma tran 1 (m1 n1): ");
    scanf("%d %d", &a, &b);
    printf("Nhap kich thuoc ma tran 2 (m2 n2): ");
    scanf("%d %d", &c, &d);
    if (b != c && a != d)
    {
        printf("Khong nhan duoc 2 ma tran voi nhau vi n1 khac m2 va n2 khac m1");
    }
    else
    {
        float mt1[a][b];
        float mt2[c][d];
        printf("Nhap ma tran A: \n");
        tao_mt(a, b, mt1);
        printf("Nhap ma tran B: \n");
        tao_mt(c, d, mt2);
        printf("\n");
        printf("Ma tran A: \n");
        in_mt(a, b, mt1);
        printf("\n");
        printf("Ma tran B: \n");
        in_mt(c, d, mt2);
        printf("\n");

        if (b == c)
        {
            float mt[a][d];
            printf("Nhan ma tran A voi ma tran B ta duoc ma tran: \n");
            nhan_mt(a, b, c, d, mt1, mt2, mt);
            in_mt(a, d, mt);
        }
        else
        {
            printf("Khong nhan duoc ma tran A voi ma tran B");
        }
        if (d == a)
        {
            float mt[c][b];
            printf("Nhan ma tran B voi ma tran A ta duoc ma tran: \n");
            nhan_mt(c, d, a, b, mt2, mt1, mt);
            in_mt(c, b, mt);
        }
        else
        {
            printf("Khong nhan duoc ma tran B voi ma tran A");
        }
    }
    return 0;
}

