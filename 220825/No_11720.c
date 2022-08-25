// N개의 숫자가 공백 없이 쓰여있다
// 이 숫자를 모두 합해서 출력하는 프로그램
// 첫째 줄에 숫자의 개수 N이 입력된다
// 둘쨰 줄에 숫자 N개가 공백없이 주어진다.
// 입력으로 주어진 숫자 N개의 합을 출력한다.

#include <stdio.h>

int main(){
    int N;
    char arr[100];
    int sum = 0;

    scanf("%d", &N);
    scanf("%s", &arr);

    for(int i=0; i<N; i++){
        sum = sum + arr[i] - '0';
    }
    printf("%d \n", sum);

    return 0;
}

// N을 입력 받는다
// 배열을 통해 입력 받기