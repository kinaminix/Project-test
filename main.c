#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int count = 0, sum = 0;
	int x = 0;
	printf("Enter numbers, 0 to stop:\n");
	while (1)
	{
		scanf("%d", &x);
		if (x==0)
			break;
		++count;
		sum += x;
	}

	if (count > 0)
		printf("count = %d, sum = %d, average = %.2f\n",
			count, sum, (double)sum / count);
	else
		printf("no numbers\n");

	return 0;
}