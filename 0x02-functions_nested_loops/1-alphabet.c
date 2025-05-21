#include <stdio.h>

void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return 0;
}

void print_alphabet(void)
{
	char al;
		for( al = 'a'; al <= 'z'; al++)
		{
			putchar(al);
		}
			putchar('\n');
}
