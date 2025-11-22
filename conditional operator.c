#include <stdio.h>
int main()
{
	//Declare the variables
	int a,b,c,max;
	//Get the three numbers from user
	printf("Enter three numbers:");
	scanf("%d %d %d",&a,&b,&c);
	//checks if a>b,if yes, exp1 excutes,if not, exp2 excutes
	max=a>b?(a>c?a:c):(b>c?b:c);
	//print the result
	printf("Largest among the tree numbers is %d",max);
	return 0;
}
