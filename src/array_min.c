#include <stdio.h>

int main()
{
    int num[10] = {83, 86, 77, 15, 91, 35, 86, 92, 49, 21};
    int i;
    int min = num[0];

    for(i = 0; i < 10; i++)
        if(min > num[i])
            min = num[i];

    printf("min:%d\n", min);
    return 0;
}
