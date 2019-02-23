
//Developer euiyeon kim
//C_programing master!
// 자료형(int) 식별자(height, days)

#include <stdio.h>

/*header*/
int main() {

	/*body*/
	int height = 0; // 정수형 변수 초기화 	
	int days = 0;

	height = height + 55; // 낮 동안 올라가는 cm height 변수에 저장  


	/*반복문*/
	while (height < 300) {
		height = height - 13; // 밤 동안 미끌어지는 cm 
		days = days + 1; // 1일 경과
		height = height + 55; //낮 동안 올라가는 cm 
	}

	/*출력문*/
	printf("며칠 걸렸습니까?\n");
	printf("%d일 입니다.", days);

	return 0;

}