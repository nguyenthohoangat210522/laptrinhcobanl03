#include <stdio.h>

void in_mt(int m, int n, int mt[m][n])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%4d ", mt[i][j]);
        }
        printf("\n");
    }
}

void xoay(int n, int mt[n][n], int ap, int bp)
{
    int a = 0;
    int b = n - 1;
    int p = 1;
    do
    {
        for (int i = a; i < b; i++)
        {
            mt[a][i] = p;
            p++;
        }
        for (int i = a; i < b; i++)
        {
            mt[i][b] = p;
            p++;
        }
        for (int i = b; i > a; i--)
        {
            mt[b][i] = p;
            p++;
        }
        for (int i = b; i > a; i--)
        {
            mt[i][a] = p;
            p++;
        }
        a++;
        b--;
    } while (a != ap && b != bp);
}

int main()
{
    int n, ap, bp;
    printf("Nhap n: ");
    scanf("%d", &n);
    int mt[n][n];
    if (n == 0)
    {
        printf("Ma tran rong");
    }
    else if (n == 1)
    {
        mt[n-1][n-1] = 1;
    }
    else if (n % 2 == 1)
    {
        int ap = (n - 1) / 2;
        int bp = ap;
        mt[ap][bp] = n*n;
    }
    else
    {
        int ap = n / 2;
        int bp = ap - 1;
    }
    xoay(n, mt, ap, bp);
    printf("Ma tran xoay kich thuoc %d x %d: \n", n, n);
    in_mt(n, n, mt);
    return 0;
}
