#include <stdio.h>

int main()
{
    //int num[5]; // XXX, not initailized
    int num[5] = {};    
    for (int i=0; i<5; i++)
        printf("%d\n", num[i]);
}
