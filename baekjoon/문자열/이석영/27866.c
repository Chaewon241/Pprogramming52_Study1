#include <stdio.h>

int main()
{
    char str[1000];
	int num;
	scanf("%s", str);
	getchar();
	scanf("%d", &num);
	printf("%c", str[num - 1]);
    
    return 0;
}

