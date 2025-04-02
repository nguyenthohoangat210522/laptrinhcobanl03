#include <stdio.h>


int main()
{
    int n, m;
    printf("moi ban nhap so phan tu cho mang 1 : ");
    scanf("%d", &n);
    int mang1[n];
    printf("Nhap mang 1 (da sap xep tang dan): \n");
    for (int i = 0; i < n; i++)
    {
        printf("moi ban nhap phan tu thu %d cho mang 1 :",i+1);
        scanf("%d", &mang1[i]);
    }
    printf("moi ban nhap so phan tu cho mang 2 : ");
    scanf("%d", &m);
    int mang2[m];
    printf("Nhap mang 2 (da sap xep tang dan): \n");
    for (int i = 0; i < m; i++)
    {
        printf("moi ban nhap phan tu thu %d cho mang 2 :",i+1);
        scanf("%d", &mang2[i]);
    }
    printf("Mang sau khi ghep 2 mang lai voi nhau la: ");
    int i = 0, y = 0;
    while (i < n && y < m)
    {
        if(mang2[y] <= mang1[i])
        {
            printf("%d ", mang2[y]);
            y++;
        }
        else
        {
            printf("%d ", mang1[i]);
            i++;
        }
    }
    if (i == n)
    {
        for (int j = y; j < m; j++)
        {
            printf("%d ",mang2[j]);
        }
    }
    else
    {
        for (int j = i; j < n; j++)
        {
            printf("%d ",mang1[j]);
        }
    }
    return 0;
}
