#include <stdio.h>


int main()
{
	int n;
	int arr;
	int min = 1000000, max = -1000000;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr);
		if (arr < min)
		{
			min = arr;
		}
		if (arr > max)
		{
			max = arr;
		}
	}

	printf("%d %d", min, max);


	return 0;
}
