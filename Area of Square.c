#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#define PI 3.14
int main()
{
   // Declare variables
   float s, area;
   // Take input
    printf("Enter side (in cm):");
    scanf("%f", &s);
    // Calculate area
    area = s * s;
    // Display result
    printf("Area of Square=%.2f cm\n", area);
    return 0;
}