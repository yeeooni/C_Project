
//Developer euiyeon kim
//C_programing master!
// �ڷ���(int) �ĺ���(height, days)

#include <stdio.h>

/*header*/
int main() {

	/*body*/
	int height = 0; // ������ ���� �ʱ�ȭ 	
	int days = 0;

	height = height + 55; // �� ���� �ö󰡴� cm height ������ ����  


	/*�ݺ���*/
	while (height < 300) {
		height = height - 13; // �� ���� �̲������� cm 
		days = days + 1; // 1�� ���
		height = height + 55; //�� ���� �ö󰡴� cm 
	}

	/*��¹�*/
	printf("��ĥ �ɷȽ��ϱ�?\n");
	printf("%d�� �Դϴ�.", days);

	return 0;

}