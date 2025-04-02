//in mảng theo chiều đảo ngược

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("moi ban nhap so phan tu cho mang 1 chieu : ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("moi ban nhap gtri cho phan tu thu %d trong mang : ",i+1);
    scanf("%d",&a[i]);}

    for(int i=n-1;i>=0;i--)

            printf(" %d ",a[i]);



    return 0;
}

