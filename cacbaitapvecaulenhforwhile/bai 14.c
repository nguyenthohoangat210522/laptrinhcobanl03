#include <stdio.h>

int main()
{
    float gdp, tocdo;
    int y = 2014;
    printf("Tong GDP nuoc ta nam 2014 va toc do tang truong kinh te binh quan la: ");
    scanf("%f %f", &gdp, &tocdo);
    float moc = gdp * 2;
    printf("Nam                            GDP\n");
    printf("2014                           %.2f\n", gdp);
    do
    {
        y++;
        gdp *= tocdo;
        printf("%d                           %.2f", y, gdp);
        printf("\n");
    } while (gdp <= moc);
    return 0;
}
