// 총 N개의 정수가 주어졌을 때, 정수 v가 몇 개인지 구하는 프로그램을 작성하시오.
// 첫째 줄에 정수의 개수 N(1 ≤ N ≤ 100)이 주어진다. 둘째 줄에는 정수가 공백으로 구분되어져있다. 
// 셋째 줄에는 찾으려고 하는 정수 v가 주어진다. 
// 입력으로 주어지는 정수와 v는 -100보다 크거나 같으며, 100보다 작거나 같다.

#include <stdio.h>
int main() {
    int c[100];
    int n, v;
    int cnt = 0;


    // N 입력 받기
    scanf("%d", &n);

    // N개의 배열
    for(int i = 0; i < n; i++){
        scanf("%d", &c[i]);
    }

    // v 입력
    scanf("%d", &v);

    // v 개수 count
    for(int j = 0; j < n; j++){
        if(c[j] == v){
            cnt += 1;
        }
    }
    printf("%d\n", cnt);
}