#include <stdio.h>

int main()
{
	int arr[10] = { 0 };
	int num = 0,add=10;

	for (int i = 0; i < 10; i++)
	{
		scanf_s("%d", &num);
		arr[i] = num % 42;
		if (i >= 1)
		{
			for (int j = i - 1; j >= 0; j--)
			{
				if (arr[i] == arr[j])//...
				{
					add -= 1;
					break;
				}
			}
		}
	}

	printf("%d", add);

	return 0;
}
