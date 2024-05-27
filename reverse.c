#include <stdio.h>

/*Accepts inputs and prints inverse */

int main()
{
	int rev, n;

	printf("Enter input:\t");
	scanf("%d", &n);

	while(n>0)
	{
		rev=n%10;
		printf("%d", rev);
		n=n/10;
	}
}
