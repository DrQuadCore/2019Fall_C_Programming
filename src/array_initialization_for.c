#include <stdio.h>

int main()
{
    int a[5], i;
    
    // initialization stage
    for (i = 0; i < 5; i++)
        a[i] = 1;
        
    // visiting stage
    for (i = 0; i < 5; i++)
        printf("%d\n", a[i]);
}
