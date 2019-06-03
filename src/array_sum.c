#include <stdio.h>
#define N 10

int main()
{
    int i;
    int a[N];
	for (i = 0; i < N; i++)
        a[i] = 1;             /* initializes a */

    for(i = 0; i < N; i++)
        scanf("%d", &a[i]);   /* reads data into a */

    int sum = 0;
	for (i = 0; i < N; i++)
        sum += a[i]; 		/* sums the elements of a */

    return 0;
}
