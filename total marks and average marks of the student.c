#include <stdio.h>
int main()
{
	int English,Maths,Science,Psychology,History,total;
	float average;
	//Asking for input
	printf("Enter the marks of English,Maths,Science,Psychology and History:\n");
	scanf("%d%d%d%d%d",&English,&Maths,&Science,&Psychology,&History);
	total=English+Maths+Science+Psychology+History;
	average=total/5.0;
	printf("Total Marks of the student:%d\n",total);
	printf("Average Marks of the students:%.2f\n",average);
	return 0;
}
