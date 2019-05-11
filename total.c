#include <stdio.h>
#include <stdlib.h>

int main (){
	int num1 = 0, num2 = 0, total = 0;

	printf("Enter a number \n");
	scanf("%d", &num1);

	printf("ENter a number \n");
	scanf("%d", &num2);

	total = num1 + num2;
	printf("Total number entered : %d \n", total);
	return 0;
}
