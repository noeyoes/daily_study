// 문제
// 두 수 A, B를 입력받아, A+B, A-B, A×B를 구하는 프로그램을 작성하시오.

// 입력
// 첫째 줄에 A가, 둘째 줄에 B가 주어진다. 
// 각각의 수는 10진수로 1,000자리를 넘지 않으며 양수와 음수가 모두 주어질 수 있다.

// 출력
// 첫째 줄에 A+B, 둘째 줄에 A-B, 셋째 줄에 A×B를 출력한다. 
// 각각을 출력할 때, 답이 0인 경우를 제외하고는 0으로 시작하게 해서는 안 된다(1을 01로 출력하면 안 된다는 의미).

// 1,000자리 수이므로 int로는 표현 불가능함, 따라서 범위가 문자열 형태로 이루어져 있어 무한인 BigInteger 사용
// BigInteger의 값을 계산하려면 클래스 내부의 함수를 이용해야함
// 더하기 : add(), 빼기 : subtract(), 곱하기 : multiply(), 나누기 : divide()

import java.math.BigInteger;
import java.util.Scanner;

public class No_2338{
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        BigInteger A = s.nextBigInteger();
        BigInteger B = s.nextBigInteger();

        System.out.println(A.add(B));
        System.out.println(A.subtract(B));
        System.out.println(A.multiply(B));
    }
}