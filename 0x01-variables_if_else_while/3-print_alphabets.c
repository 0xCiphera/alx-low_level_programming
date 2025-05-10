#include <stdio.h>

int main(void)
{
	char al;

	// Print lowercase alphabet
	
	for (al = 'a'; al <= 'z'; al++)
		putchar(al);

	// Print uppercase alphabet
	
	for (al = 'A'; al <= 'Z'; al++)
		putchar(al);

	// Print a newline
	putchar('\n');
		
	return 0;

}
