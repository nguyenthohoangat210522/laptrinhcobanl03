#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main(){
	int a,b,c,denta,x,x1,x2;

	printf("Nhap vao gia tri cua a,b,c : ");
	scanf("%d%d%d",&a,&b,&c);
	printf("Phuong trinh ban vua nhap la %dX^2+%dX+%d \n" ,a,b,c);


	if(a==0){
		if(b == 0 && c == 0){
			 printf("Phuong trinh co vo so nghiem");
		}
		else{
			x = -c / b;
			printf("Phuong trinh co nghiem la %d",x);
		}
	}
	else{
		denta = b * b - 4 * a * c;
		if(denta >= 0){
		  x1 = (-b + sqrt(denta)) / (2 * a);
	      x2 = (-b - sqrt(denta)) / (2 * a);
			printf("Phuong trinh co hai nghiem la %d va %d",x1,x2);
		}
		else{
			printf("Phuong trinh vo nghiem ");
		}
	}


}
