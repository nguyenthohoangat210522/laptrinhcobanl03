#include <stdio.h>
#include <stdlib.h>

int main()
{
	int D;

	printf("Nhap vao gia tri n cua ban : ");
	scanf("%d",&D);
	printf("diem ban vua nhap la : %d \n",D);

	if(D >= 0 && D <= 10){
	    if(D < 5){
		printf("Yeu");
	}
	    else if(D >= 5 && D < 7){
		printf("Trung Binh");
	}
	    else if(D >= 7 && D < 8){
		printf("Kha");
	}
	    else if(D >= 8 && D < 9){
		printf("Gioi");
	}
	    else{
		printf("Xuat Sac");
	}
}
    else{
    	printf("Diem so cua ban vua nhap khong hop le vui long nhap lai ");
	}
}
