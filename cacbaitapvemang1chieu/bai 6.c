#include <stdio.h>

int main()
{
    int n;
    printf("Mang cua ban co bao nhieu phan tu: ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("Nhap vao phan tu thu %d: ", i + 1);
        scanf("%d", &a[i]);
        if (a[i] < 0)
        {
            a[i] = 0;
        }
    }
    printf("Mang sau khi thay the cac phan tu co gia tri am thanh 0 la:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
