
#include <stdio.h>

int main() {
    int n, gt;
    float s = 0;

    printf("Moi ban nhap n de tinh tong: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        gt = 1;
        for (int j = 1; j <= i; j++) {
            gt *= j;
        }
        s += 1.0 / gt;
    }

    printf("Tong la: %f", s);
    return 0;
}
