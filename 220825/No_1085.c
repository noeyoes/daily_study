#include <stdio.h>

int main() {
    int x, y, w, h, min;

    scanf("%d %d %d %d", &x, &y, &w, &h);
    
    min = x;

    if(min > w - x)
        min = w - x;
    
    if(min > y)
        min = y;
    
    if(min > h - y)
        min = h - y;

    printf("%d \n", min);

    return 0;
}

// 현재 (x, y)에 있음
// 왼쪽 아래 꼭짓점은 (0, 0)
// 오른쪽 위 꼭짓점은 (w, h)
// (x, y)에서 직사각형의 경계선까지 가는 거리의 최솟값을 구하시오