#include <stdio.h>
 #include <stdlib.h>

 void tao_mt(int m, int n, float mt[m][n])
 {
     for (int i = 0; i < m; i++)
     {
         for (int j = 0; j < n; j++)
         {
             scanf("%f", &mt[i][j]);
         }
     }
 }

 void in_mt(int m, int n, float mt[m][n], FILE *f)
 {
     for (int i = 0; i < m; i++)
     {
         for (int j = 0; j < n; j++)
         {
             fprintf(f, "%g ", mt[i][j]);
         }
         fprintf(f, "\n");
     }
 }

 void cong_mt (int a, int b, float mt1[a][b], float mt2[a][b], float mt[a][b])
 {
     for (int i = 0; i < a; i++)
     {
         for (int j = 0; j < b; j++)
         {
             mt[i][j] = mt1[i][j] + mt2[i][j];
         }
     }
 }

 int main()
 {
     int a, b, c, d;
     printf("Nhap kich thuoc ma tran 1 (m1 n1): ");
     scanf("%d %d", &a, &b);
     printf("Nhap kich thuoc ma tran 2 (m2 n2): ");
     scanf("%d %d", &c, &d);
     FILE *f;
     f = fopen("CONG_MT.C", "w");
     if (f == NULL)
     {
         printf("Loi tao / mo file");
         exit(1);
     }
     if ((a != c) || (b != d))
     {
         fprintf(f, "Khong cong duoc 2 ma tran khong cung kich thuoc\n");
     }
     else
     {
         float mt1[a][b];
         float mt2[c][d];
         printf("Nhap ma tran 1: \n");
         tao_mt(a, b, mt1);
         printf("Nhap ma tran 2: \n");
         tao_mt(c, d, mt2);
         fprintf(f, "Ma tran 1: \n");
         in_mt(a, b, mt1, f);
         fprintf(f, "\n");
         fprintf(f, "Ma tran 2: \n");
         in_mt(c, d, mt2, f);
         fprintf(f, "\n");
         float mt[a][b];
         cong_mt(a, b, mt1, mt2, mt);
         fprintf(f, "Tong cua 2 ma tran la: \n");
         in_mt(a, b, mt, f);
         fclose(f);
         return 0;
     }
 }
