#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int exponent(int a, int b);
main()
{
	int i, j;
	printf("Enter base and exponent:");
	scanf_s("%d%d", &i, &j);
	printf("The answer is: ");
	printf("%d", exponent(i, j));
	system("pause");
}
int exponent(int a, int b)
{
	int c,n=1;
	for (c = 1; c <= b; c++)
	{
		n = n * a;
	}
	if (b == 0)
	{
		n = 1;
	}
	return n;
}