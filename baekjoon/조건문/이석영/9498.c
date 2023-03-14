#include<stdio.h>


int main()
{
	int a;

	scanf("%d", &a);
	if (90<=a&&a<=100)
	{
		printf("A");
	}
	if (80<=a&&a<90)
	{
		printf("B");
	}

	if (70<=a&&a<80)
	{
		printf("C");
	}
	
	if (60<= a&&a < 70)
	{
		printf("D");
	}

	if (60>a)
	{
		printf("F");
	}
	return 0;
}
