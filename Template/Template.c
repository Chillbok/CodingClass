#include <stdio.h>

int main()
{
    printf("정수의 대표적인 서식\n");
    printf("출력 숫자: 100.56\n");
    printf("---\n");
    printf("10진수: %d\n", 100.56);
    printf("16진수: %x\n", 100.56);
    printf("8진수: %o\n", 100.56);
    printf("\n");

    printf("실수의 대표적인 서식\n");
    printf("출력 숫자: 100.56\n");
    printf("---\n");
    printf("실수 1: %f\n", 100.56);
    printf("실주 2: %lf\n", 100.56);
    printf("\n");

    printf("문자의 대표적인 서식");
    printf("한 글자 문자: %c, %c", 't', 'T');
    printf("여러 글자 문자: %s %s", "대한민국 만세", "한 글자 이상 쓰자");
}