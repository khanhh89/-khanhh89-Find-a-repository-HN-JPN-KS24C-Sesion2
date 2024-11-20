#include <stdio.h>

	int main(){
		//khai bao kieu so thuc
		float a, b, tong, hieu, tich, thuong;
	
		printf("nhap a=");
		scanf("%f", &a);
		printf("nhap b=");
		scanf("%f", &b);
		
		//luu tru vao bien tong
		
		 tong = a + b;
		 hieu = a - b;
		tich = a * b; 
		thuong = a / b;
		
		 
		//in ket qua ra man hinh
		
		printf("tong=   %f", tong);
		printf("hieu=   %f", hieu);
		printf("tich=   %f", tich);
		printf("thuong=   %f", thuong);
		

	  
	  }


