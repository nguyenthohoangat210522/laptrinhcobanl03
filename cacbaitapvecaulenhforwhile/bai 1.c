// bài tập tính tổng 10 số nhập từ bàn phím
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int tong=0,a;
   for(int i=0;i<10;i++){
    scanf("%d",&a);
    tong=tong + a;}
   printf("%d",tong);
    return 0;
}
