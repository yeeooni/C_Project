#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int count = 0;

	printf("count 입력 : ");
	scanf("%d", &count);

	//printf("count?? %d\n", count);

	while (count <= 5){
		printf("%d Hello World! \n", count);
		count += 1;
	}

	printf("Done \n");

	int first = 0, second = 0, total = 0;
	int counter = 1;

	printf("first insert !! : ");
	scanf("%d", &first);

	printf("second insert !! :");
	scanf("%d", &second);

	total = first + second;

	while (counter <= 10) {
		printf("%d running total is : %d \n", counter, total);
		total += total;
		counter += 1;
	}
	printf("end");

	return 0;
}

