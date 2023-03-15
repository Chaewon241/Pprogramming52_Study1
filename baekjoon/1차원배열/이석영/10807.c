#include <stdio.h>

int main() 
{
	int n;
	int arr[100] = { 0 };
	int num=0;
	int count= 0;

	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &arr[i]);
	}

	scanf_s("%d", &num);
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == num)
		{
			count += 1;
		}
	}
	printf("%d", count);

	return 0;
}
