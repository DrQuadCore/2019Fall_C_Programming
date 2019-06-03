#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[10] = {};
    int i;

    for(i = 0; i < 10; i++)
        scanf("%d", &num[i]);

    int max = num[0];
    for(i = 0; i < 10; i++)
        if(max < num[i])
            max = num[i];

    printf("max:%d\n", max);
}
