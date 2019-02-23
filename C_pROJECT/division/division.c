// Developer euiyeon kim
/* division */
// if else 조건문
// 산술식 ( + - * / )
// 관계식 논리곱 && 논리합 || 부정 ! 
// 조건식 참(1) 거짓(0)

#include <stdio.h>

int main(void) {

	int a, b, division;

	printf("두 정수를 입력하세여:");
	scanf("%d%d", &a, &b);

	if (b != 0) {
		division = a / b;
		printf("a를 b로 나눈 값은 %d이야.", division);
	}

	else printf("\"a를 b로 나눌 수 없어요!\"");


	return 0;

}