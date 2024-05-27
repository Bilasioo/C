#include <stdio.h>

/* Program prints numbers from n-input to 1*/

int main()
{
	int i=1, n;

	printf("Input n: ");
	scanf("%d", &n);
	i=n;

	do
	{
		printf("%d,\t", i);
		i--;
	}while(i>=1);

	printf("\n");
}
