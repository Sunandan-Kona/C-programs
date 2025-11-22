#include <stdio.h>
int main()
{
	//declare variable
	float len,wid,area;
	//take inputs
	printf("Enter length & width of Rectangle(in cm):");
	scanf("%f %f",&len,&wid);
	//calculate area
	area = len*wid;
	//display result
	printf("Area of Rectangle=%.3fcm\n",area);
	return 0;
}
