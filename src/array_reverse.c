#include <stdio.h>
#define N 10

int main()
{
	int a[N], i;
	for (i = 0; i < N; i++)
		a[i] = i;             /* initializes a with its index*/
	
	for (i = N-1; i >= 0; i--)
		printf("%d", a[i]);	/* print each element of a */

	printf("\n");
	return 0;
}
