#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    int k = 0;
    for(int i = 1; i <= n; ++i)
    {
        k += i;
    }
    printf("%d \n", k);

    return 0;
}