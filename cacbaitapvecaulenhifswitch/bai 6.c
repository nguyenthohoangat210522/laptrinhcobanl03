#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,b,c,d,e,f,D,Dx,Dy,x,y;

	printf("Nhap vao gia tri cua a,b,c : \n");
	scanf("%d%d%d",&a,&b,&c);
	printf("Nhap vao gia tri cua d,e,f : \n");
	scanf("%d%d%d",&d,&e,&f);

	printf("Phuong trinh ban vua nhap la : \n");
	printf("%dX+%dY=%d \n",a,b,c);
	printf("%dX+%dY=%d \n",d,e,f);



	D = a * e - b * d;
	Dx = c * e - b * f;
	Dy = a * f - c * d;

	if(D == 0){
		if(Dx == 0 && Dy == 0){
			printf("Phuong trinh co vo so nghiem");
		}
		else{
			printf("Phuong trinh vo nghiem");
		}
	}
	else{
		x = Dx / D ;
		y = Dy / D ;
		printf("He phuong trinh co nghiem la %d va %d ",x,y);
	}


    return 0;
}
