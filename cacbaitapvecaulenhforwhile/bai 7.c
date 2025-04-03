#include <stdio.h>
#include <stdlib.h>

int main()
{

   int n;
   float s=0;
   scanf("%d",&n);
   for(int i=1;i<=n;i++)
    s=s+1.0/i;

   printf("%f",s);

    return 0;
}
