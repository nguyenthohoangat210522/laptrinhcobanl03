#include <stdio.h>
#include <stdlib.h>

int hamnhapmt(int a,int b,int mt[a][b]){

    for(int i=0;i<a;i++)
        for(int j=0;j<b;j++)
            scanf("%d",&mt[i][j]);
                    }

int haminmt(int a,int b,int mt[a][b]){
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf(" %d ",mt[i][j]);
        }
        printf("\n ");
    }
            }
int hamcongmatran(int a,int b,int mt1[a][b],int mt2[a][b],int mttong[a][b]){
for(int i=0;i<a;i++)
    for(int j=0;j<b;j++)
    mttong[i][j]=mt1[i][j]+mt2[i][j];
}
int hamnhanmatran(int a, int b, int c, int d,int mt1[a][b], int mt2[c][d], int tich[a][d]) {
    for (int i = 0; i < a; i++)
        for (int j = 0; j < d; j++) {
            tich[i][j] = 0;
            for (int k = 0; k < b; k++) {
                tich[i][j] += mt1[i][k] * mt2[k][j];
            }
        }
}
int main()
{
    int a,b,c,d;

    printf("moi ban nhap so hang cho ma tran 1 : ",a);
    scanf("%d",&a);
    printf("moi ban nhap so cot cho ma tran 1 : ",b);
    scanf("%d",&b);
    int mt1[a][b];
    hamnhapmt(a,b,mt1);

    printf("moi ban nhap so hang cho ma tran 2 : ",c);
    scanf("%d",&c);
    printf("moi ban nhap so hang cho ma tran 2 : ",d);
    scanf("%d",&d);
    int mt2[c][d];
    hamnhapmt(c,d,mt2);

    printf("ma tran 1 : \n ");
    haminmt(a,b,mt1);

    printf("ma tran 2 : \n ");
    haminmt(c,d,mt2);



    if(a==c&&b==d){
        int tong[a][b];
        hamcongmatran(a,b,mt1,mt2,tong);
        printf("tong cua 2 mat tran la : \n ");
        haminmt(a,b,tong);
    }
    else if(a!=c&&b!=d)
        printf("khong tinh duoc tong 2 mt\n");


    if(b==c){
        int tich[a][d];
        hamnhanmatran(a,b,c,d,mt1,mt2,tich);
        printf("tich cua 2 ma tran la : \n ");
        haminmt(a,d,tich);
    }

    else if(b!=c)
        printf("khong tinh duoc tich 2 mt");

    return 0;
}
