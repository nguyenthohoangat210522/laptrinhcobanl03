#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,sum=0;

    printf("moi ban nhap so phan tu cho mang 1 chieu : ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("moi ban nhap gtri cho phan tu thu %d trong mang : ",i+1);
    scanf("%d",&a[i]);}

    for(int i=0;i<n;i++){
        sum=sum+a[i];
    }
   printf("tong cac phan tu trong mang la : %d",sum);

    double tb;
    tb=(double)sum/n;
    printf("\ngitri trung binh cua cac phan tu trong mang la : %.3lf",tb);
    return 0;
}

