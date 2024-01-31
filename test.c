#include <stdio.h>
#include "main.h" // Include your header file with the _printf prototype.
#include <limits.h>
int main(void) {

	int len1;
	int len2;
	int l = 100;
	len1 = _printf("%       c\n", 'c');
	len2 = printf("%       c\n", 'c');

	printf("\nlen1 = %d\nlen2 = %i\n", len1, len2);

	return (0);
}
