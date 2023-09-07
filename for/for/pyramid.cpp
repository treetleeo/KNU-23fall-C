#include <stdio.h>
int main()
{
	int a, i, j, z;
	scanf_s("%d", &a);
	printf("%d층 피라미드\n", a);
	for (int i = 1; i <= a; i++)
	{
		for (int j = i; j <= a-1; j++)
		{
			printf(" ");
		}
		for (int z = 1; z <= i*2-1; z++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}