/*
    작성자 : 박일환
    제목 : 10과 20을 더하는 프로그램
*/

#include <stdio.h>

int main(void)
{
    int a = 10;         // 변수 선언과 동시에 초기화
    int b = 20;
    int sum = a + b;    // 더한값을 저장

    printf("%d + %d = %d\n", a, b, sum);    // 게산값을 출력

    return 0;   // 정상종료를 의미하는 0을 반환, 오류가 발생한 경우 0이 아닌값을 반환
}