#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int num1 = 0, num2 = 0, total =0;
	float avg_num;
	float count;

	printf("Enter his age : ");
	scanf("%d", &num1);
	printf("Enter her age : ");
	scanf("%d", &num2);
	total = num1 + num2;
	printf("Total : %d\n", total);
	
	printf("Count : ");
	scanf("%e", &count);

	avg_num = total / count;
	printf("Average : %3.2f \n", avg_num);

	return 0;
}
