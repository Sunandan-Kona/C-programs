#include <stdio.h>
int main()
{
	float u,a,d;
	int t;
	printf("Enter the value of accleration:");
	scanf("%f",&a);
	printf("Enter the value of intial velocity:");
	scanf("%f",&u);
	printf("Enter the value of time:");
	scanf("%d",&t);
	d=(u*t)+(a*t*t)/2;
	printf("The Distance:%.2f",d);
	return 0;
}
