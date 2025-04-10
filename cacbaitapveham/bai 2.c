#include <stdio.h>
#include <stdlib.h>

long long hamgiaithua(int a){
        long long tich=1;
        for(int i=1;i<=a;i++)
            tich*=i;
            return tich;     }


int main()
{
    int n;
    printf("ban nhap gia tri cua n de tinh n!: ");
    scanf("%d",&n);
    printf("n!= %lld",hamgiaithua(n));
    return 0;
}
