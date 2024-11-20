#include <stdio.h>

#define PI 3.14

int main()

{
	float R, chuvi, dientich;

	float radius = 10;
	
	float circumferance = 2 * PI * radius;
	float area = 2 * PI * radius * radius;
	
	printf("ban kinh hinh tron la: %f\n", radius);
	printf("chu vi hinh tron la: %f\n", circumferance);
	printf("dien tich hinh tron la: %f\n", area);
	
	return 0;
	
}
