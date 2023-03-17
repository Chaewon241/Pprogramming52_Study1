#include <stdio.h>

int main()
{
	int arr[9] = { 0 };
	int max = 0,num;
	for (int i = 0; i < 9; i++)
	{
		scanf_s("%d", &arr[i]);
		if (arr[i] > max)
		{
			max = arr[i];
			num = i + 1;
		}
	}
	printf("%d\n", max);
	printf("%d", num);
	
	return 0;
}
