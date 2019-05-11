#include <stdio.h>
#include <stdlib.h>

int main() {
	char ch;
	char str[100];

	printf("Enter any character :");
	scanf("%c", &ch);

	printf("Entered character is %c\n ", ch);
	
	printf("Enter any string (up to 100 character) :");
	scanf("%s", &str);

	printf("Entered string is %s \n", str);
	return 0;
}

