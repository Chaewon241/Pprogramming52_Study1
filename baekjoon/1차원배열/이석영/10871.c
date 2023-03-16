#include <stdio.h>

int main() 
{
	int n;
	int arr[10000] = { 0 };
	int num=0;
	int count= 0;

	scanf_s("%d %d", &n,&num);
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &arr[i]);
	}

	for (int i = 0; i < n; i++)
	{
		if (arr[i] < num)
		{
			printf("%d ", arr[i]);
		}
	}
	

	return 0;
}
