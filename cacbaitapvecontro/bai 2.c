#include <stdio.h>

int main()
{
    int a[10];
    printf("Nhap cac phan tu cua mang (so nguyen): ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", a + i);
    }
    printf("Cac phan tu cua mang la: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", *(a + i));
    }
    return 0 ;
}
