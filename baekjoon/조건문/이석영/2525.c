#include<stdio.h>


int main()
{
	int h, m;
	int time;

	scanf("%d %d\n", &h, &m);
	scanf("%d", &time);

	m += time;
	if (m >= 60)
	{
		h += m / 60;
		m = m % 60;
	}

	if (h >= 24)
	{
		h -= 24;
	}

	printf("%d %d", h, m);
	return 0;
}
