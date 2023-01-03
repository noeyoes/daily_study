// 정수 n개가 주어졌을 때, n개의 합을 구하는 함수를 작성하시오.
// 함수만 구현하는 것

#include <stdio.h>

long long sum(int *a, int n){
    long long sum_a = 0;
    for(int i = 0; i < n; i++){
        sum_a += a[i];
    }
    return sum_a;
}