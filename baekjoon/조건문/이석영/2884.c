#include<stdio.h>

int main()
{
	int h, m;
	int time=0;

	scanf("%d %d", &h, &m);

	if (h == 0)
	{
		h = 24;
	}

	h = h * 60;

	time = h + m-45;
    h = time / 60;
	m = time % 60;

	if (h == 24)
	{
		h = 0;
	}
	printf("%d %d", h,m);
	return 0;
}
