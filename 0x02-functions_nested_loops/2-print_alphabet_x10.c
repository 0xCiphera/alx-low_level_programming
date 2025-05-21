#include <stdio.h>

void print_alphabet_x10(void);

int main(void)
{
	print_alphabet_x10();
	
	return 0;
}


void print_alphabet_x10(void)
{

	char al;
	
	int j;

	for ( j = '0'; j <= '9'; j++)

	{
	 	for( al = 'a'; al <= 'z'; al++)
	 {
			putchar(al);
	 }
			putchar('\n');
	}
}
