#include<stdio.h>


int main()
{
	int a, b, c;
	int money;

	scanf("%d %d %d", &a, &b, &c);

	if (a == b || a == c||b==c)
	{
		if (a == b && b == c)
		{
			money = 10000 + a * 1000;
			printf("%d", money);
			return 0;
		}
		
		if (b == c)
		{
			money = 1000 + b * 100;
		}
		else
		{
			money = 1000 + a * 100;
		}
	}
	else
	{
		if (a > b && a > c)
		{
			money = a * 100;
		}
		else if (a < b && b > c)
		{
			money = b * 100;
		}
		else
		{
			money = c * 100;
		}
	}
	printf("%d", money);
	return 0;
}
