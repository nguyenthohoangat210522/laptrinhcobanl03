//tính tổng của các số lẻ từ 1 đến 100
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum=0;
    for(int i=0;i<=100;i++)
    if(i%2==1){
        sum =sum + i;

    }
    printf("%d",sum);

    return 0;
}
