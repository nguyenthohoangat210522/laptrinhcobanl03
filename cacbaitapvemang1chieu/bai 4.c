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
    }
    int max =  a[0],min =  a[0];

    for (int i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
        if (a[i] < min)
        {
            min = a[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] == min)
        {
            printf("phan tu nho nhat trong mang co vi tri a[%d] va bang %d ",i+1,min);
        }
    }


    for (int i = 0; i < n; i++)
    {
        if (a[i] == max)
        {
        printf("\nphan tu lon nhat trong mang co vi tri a[%d] va bang %d ",i+1,max);

        }
    }

    return 0;
}
