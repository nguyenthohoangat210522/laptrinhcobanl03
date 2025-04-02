#include <stdio.h>



int main()
{
// trường hợp 1
    int mang1[3][3]={{1,3,2},{2,5,7},{2,6,5}};
    for(int i=0;i<3;i++)
         {
            for(int j=0;j<3;j++)
             {
             printf(" %d ",mang1[i][j]);
             }
            printf("\n");
         }


printf("---------------------------------------------------------------------");
// trường hợp 2
     int h,c;
         printf("\n moi ban nhap so hang cho mang 2: ");
         scanf("%d",&h);
         printf("moi ban nhap so cot cho mang 2: ");
         scanf("%d",&c);
         printf(" mang 2 ban vua nhap co %d hang & %d cot\n",h,c);

         int a[h][c],i,j;
         for(i=0;i<h;i++)
         {
            for(j=0;j<c;j++)
            {
             printf("moi ban nhap giai tri cho hang %d cot%d cua mang 2 ",i+1,j+1);
             scanf("%d",&a[i][j]);
            }
         }


        printf(" mang 2 ban vua nhap la : \n");
            for(i=0;i<h;i++)
         {
            for(j=0;j<c;j++)
             {
             printf(" %d ",a[i][j]);
             }
            printf("\n");
         }



    return 0;
}
