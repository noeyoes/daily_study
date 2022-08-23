#include <stdio.h>

int main(void)
{
    int i = 0;
    scanf("%d", &i);
    
    for(int j = 1; j <= i; j++)
        printf("Hello World, Judge %d!\n", j);
    return 0;
}