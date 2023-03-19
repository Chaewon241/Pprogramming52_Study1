#include <stdio.h>

int main()
{
	int arr[100] = { 0 };
	int num = 0,num2=0;

	scanf("%d %d", &num, &num2);

	for (int i = 0; i < num2; i++)
	{
		int a=0, b=0, c=0;
		scanf("%d %d %d", &a, &b, &c);
		for (int j = a - 1; j < b; j++)
		{
			arr[j] = c;
		}
	}
	for (int i = 0; i < num; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
