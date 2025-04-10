#include <stdio.h>
#include <stdlib.h>
long long hamluythua(int a,int b){
        int i;
        long long tich=1;
        for(i=1;i<=b;i++){
            tich*=a;
                         }
    return tich;
                                }

int main()
{
    int x,y;
    printf("nhap gia tri cho x : \n");
    scanf("%d",&x);
    printf("nhap gia tri cho y : \n");
    scanf("%d",&y);

    if(x==0){
        if(y==0){printf("loi phep tinh");}
        else {printf("ham luy thua bang 0");}
             }
    else {
        if(y==0){printf("ham luy thua bang 1");}
        else {printf("ham luy thua bang %lld",hamluythua(x,y));}
         }
    return hamluythua;

}
