#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define P 3.14159265
void Cuboid_volume() {
	int x, y, z;
	scanf("%d%d%d", &x, &y, &z);
	printf("%d", x * y * z);
}
void Cuboid_Sa() {
	int x, y, z;
	scanf("%d%d%d", &x, &y, &z);
	printf("%d", 2 * (x * y + y * z + x * z));
}
void Cylinder_volume() {
	int x, y;
	scanf("%d%d", &x, &y);
	double total=x*x*P*y;
	printf("%.8f", total);
}
void Cylinder_Sa() {
	int x, y;
	scanf("%d%d", &x, &y);
	double total= 2*x*P*(x+y) ;
	printf("%.8f", total);
}
void Sphere_volume() {
	int x;
	scanf("%d", &x);
	double total=4 * P * x * x * x /3;
	printf("%.8f", total);
}
void Sphere_Sa() {
	int x;
	scanf("%d", &x);
	double total=4*P*x*x;
	printf("%.8f", total);
}

int main() {
	int select;
	scanf("%d", &select);
	switch (select) {
	case 1:
		Cuboid_volume();
		break;
	case 2:
		Cuboid_Sa();
		break;
	case 3:
		Cylinder_volume();
		break;
	case 4:
		Cylinder_Sa();
		break;
	case 5:
		Sphere_volume();
		break;
	case 6:
		Sphere_Sa();
		break;
	}
	//system("pause");
	return 0;
}
