#include <stdio.h>

int main(void){
    int num, i, a, b;

    scanf("%d", &num);
    
    for (i = 0; i < num; i++){
        scanf("%d %d", &a, &b);
        printf("Case #%d: %d \n", (i+1), a+b);
    }
    return 0;
}