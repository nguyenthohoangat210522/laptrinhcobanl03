#include <stdio.h>

int main()
{
    float a, b;
    printf("Nhap a va b: ");
    scanf("%f %f", &a, &b);
    float *troa, *trob;
    troa = &a;
    trob = &b;
    float temp = *troa;
    *troa = *trob;
    *trob = temp;
    printf("Gia tri cua a va b sau khi hoan doi la: %g va %g", *troa, *trob);
    return 0;
}
