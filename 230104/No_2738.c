// N*M크기의 두 행렬 A와 B가 주어졌을 때, 두 행렬을 더하는 프로그램을 작성하시오.

// input
// 첫째 줄에 행렬의 크기 N 과 M이 주어진다. 둘째 줄부터 N개의 줄에 행렬 A의 원소 M개가 차례대로 주어진다. 
// 이어서 N개의 줄에 행렬 B의 원소 M개가 차례대로 주어진다.
// N과 M은 100보다 작거나 같고, 행렬의 원소는 절댓값이 100보다 작거나 같은 정수이다.

// output
// 첫째 줄부터 N개의 줄에 행렬 A와 B를 더한 행렬을 출력한다. 행렬의 각 원소는 공백으로 구분한다.

#include <stdio.h>

int main() {
    int a[100][100];
    int b[100][100];
    int n,m;

    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            scanf("%d", &a[i][j]);
        }
    }

    for (int k = 0; k < n; k++){
        for (int l = 0; l < m; l++){
            scanf("%d", &b[k][l]);
        }
    }

    for (int q = 0; q < n; q++){
        for (int w = 0; w < m; w++){
            a[q][w] += b[q][w];
            printf("%d ", a[q][w]);
        }
        printf("\n");
    }
    return 0;
}

