#include <stdio.h>

int main()
{
    int n, dem = 0;
    printf("moi ban nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int x, a[n];
    for (int i = 0; i < n; i++)
    {
        printf("moi ban nhap phan tu thu %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("Nhap vao so x can dem : ");
    scanf("%d", &x);
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            dem++;
        }
    }
    printf("Phan tu x xuat hien %d lan trong mang", dem);
    return 0;
}
