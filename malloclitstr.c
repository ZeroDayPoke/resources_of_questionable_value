#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char stringLiteral[] = "TEST SCHOOL";

	char *one;
	char *two;
	char *three;

	one = malloc(sizeof(stringLiteral));
	two = malloc(strlen(stringLiteral) + 1);
	three = malloc(12);

	//malloc doesn't allocate all vars in sequence like automatic
	printf("%p\n", one);
	printf("%p\n", two);
	printf("%p\n", three);
	//note no values are stored yet; the memory is just allocated
	printf("%c\n", *one);
	printf("%c\n", *two);
	printf("%c\n", *three);
	return (0);
}
