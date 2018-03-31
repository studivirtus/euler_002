#include <stdio.h>

int main()
{
	int y = 1;
	int x = 1;
	int sum = 0;
	for (int c = 1; x < 100; c++)
	{
		int t = 0;
		t = x;
		x = y + x;
		y = t;
		printf("%d\n", x);
	}
	return 0;
}