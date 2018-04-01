#include <stdio.h>

int main()
{
	int x = 0;
	int y = 1;
	int sum = 0;
	int t = 0;
	for (int c = 0; x < 4000000; c++)
	{
		t = 0;
		if (c == 3)
		{
			sum = sum + x;
			c = 0;
			//printf("%d", x);
		}

		t = x;
		x = y + x;
		y = t;
		//printf("\t%d", x);
		//printf("\n");
	}
	printf("The sum of the even-valued terms of Fibonacci sequence whose values do not exceed four million:\n\t%d", sum);
	return 0;
}