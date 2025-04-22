#include <stdio.h>
 #include <ctype.h>
 #include <string.h>
 #include <stdlib.h>

 struct SLBH
 {
     char Ten_hang[20];
     int Don_gia;
     int So_luong;
     int Thanh_tien;
 };

 typedef struct SLBH slbh;

 void nhap_ghi(int n, FILE *f, slbh sl)
 {
     int tongtien = 0;
     for (int i = 0; i < n; i++)
     {
         printf("Nhap ten mat hang %d: ", i + 1);
         getchar();
         gets(sl.Ten_hang);
         printf("Nhap don gia cua mat hang %d: ", i + 1);
         scanf("%d", &sl.Don_gia);
         printf("Nhap so luong cua mat hang %d: ", i + 1);
         scanf("%d", &sl.So_luong);
         sl.Thanh_tien = sl.Don_gia * sl.So_luong;
         fwrite(&sl, sizeof(slbh), 1, f);
         tongtien += sl.Thanh_tien;
     }
     fwrite(&tongtien, sizeof(int), 1, f);
 }

 void doc_ghi(FILE *f, int n, slbh sl)
 {
     for (int i = 0; i < n; i++)
     {
         printf("%-3d", i + 1);
         fread(&sl, sizeof(slbh), 1, f);
         printf("     %-12s", sl.Ten_hang);
         printf("%10d", sl.Don_gia);
         printf("   %10d", sl.So_luong);
         printf("    %10d", sl.Thanh_tien);
         printf("\n");
     }
 }

 int main()
 {
     FILE *f;
     f = fopen("SO_LIEU.C", "wb");
     if (f == NULL)
     {
         printf("Loi tao / mo file");
         exit(1);
     }
     int n;
     printf("Co bao nhieu mat hang: ");
     scanf("%d", &n);
     if (n < 1)
     {
         printf("Khong co mat hang nao");
     }
     else
     {
         slbh sl;
         nhap_ghi(n, f, sl);
         fclose(f);
         f = fopen("SO_LIEU.C", "rb");
         if (f == NULL)
         {
             printf("Loi mo file");
             exit(1);
         }
         printf("                  SO LIEU BAN HANG\n");
         printf("STT     Ten hang       Don gia     So luong    Thanh tien\n");
         doc_ghi(f, n, sl);
         int tongtien;
         fread(&tongtien, sizeof(int), 1, f);
         printf("                                  Tong tien   %11d", tongtien);
     }
     fclose(f);
     return 0;
 }
