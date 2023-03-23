#include <stdio.h>
int main()
{
	int arr[100] = { 0 };
	int n1 = 0, n2 = 0;


	scanf("%d %d", &n1, &n2);
	for (int i = 0; i < n1; i++)//바구니 값 초기화
	{
		arr[i] = i + 1;
	}

	int a = 0,b = 0;

	for (int i = 0; i < n2; i++)
	{
		scanf("%d %d", &a, &b);
		for (int j = a-1; j < b-1; j++)
		{
			for (int k = j + 1; k < b; k++)
			{
				int temp = 0;
				temp = arr[j];
				arr[j] = arr[k];
				arr[k] = temp;
			}
		}
	}

	for (int i = 0; i < n1; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}
