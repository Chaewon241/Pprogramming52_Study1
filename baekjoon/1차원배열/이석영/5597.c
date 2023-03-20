#include <stdio.h>

int main()
{
	int arr[30] = { 0 };
	int num = 0;
	int n1 = 0, n2 = 0;
	
	for (int i = 0; i < 28; i++)
	{
		scanf_s("%d", &num);
		for (int j = 0; j < 30; j++)
		{
			if (j==(num-1) )
			{
				arr[j] = num;
			}
		}
	}

	for (int i = 0; i < 30; i++)
	{
		if (arr[i] == 0)
		{
			if (n1 != 0&&n2==0)
			{
				n2 = i+1;
			}
			else if (n1 == 0 && n2 == 0)
			{
				n1 = i + 1;
			}
		}
	}


	if (n1 > n2)
	{
		printf("%d", n2);
		printf("%d", n1);
	}

	printf("%d\n%d", n1, n2);


	return 0;
}
