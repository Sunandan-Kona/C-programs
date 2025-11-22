#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#define PI 3.14
int main()
{
    float p, t, r, si, ci;
    printf("Enter principal amount (P):");
    scanf("%f", &p);
    printf("Enter time in year (t):");
    scanf("%f", &t);
    printf("Enter rate in percent (r):");
    scanf("%f", &r);
     /* Calculating Simple Interest */
    si = (p * t * r) / 100;
    /* Calculating Compound Interest */
    ci = p * (pow(1 + r / 100.0, t) - 1);
    printf("Simple Interest = %.3f\n", si);
    printf("Compound Interest = %.3f\n", ci);
    return 0;
}