// Developer euiyeon kim
/* division */
// if else ���ǹ�
// ����� ( + - * / )
// ����� ���� && ���� || ���� ! 
// ���ǽ� ��(1) ����(0)

#include <stdio.h>

int main(void) {

	int a, b, division;

	printf("�� ������ �Է��ϼ���:");
	scanf("%d%d", &a, &b);

	if (b != 0) {
		division = a / b;
		printf("a�� b�� ���� ���� %d�̾�.", division);
	}

	else printf("\"a�� b�� ���� �� �����!\"");


	return 0;

}