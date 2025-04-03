#include <stdio.h>
#include <stdlib.h>

int main(){
    long long a, b;
    char n;


    scanf("%lld%lld ",&a,&b);
    fflush(stdin);

    scanf("%c",&n);
    switch(n){
        case '+':
            printf("%lld\n", a + b);
            break;
        case '-':
            printf("%lld\n", a - b);
            break;
        case '*':
            printf("%lld\n", a * b);
            break;
        case '/':
            printf("%lf\n", a / b);
            break;
        default:
            printf("du lieu khong hop le");
    }
    return 0;
}
