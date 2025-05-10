#include <stdio.h>

int main(void)
{

	char al;

	for ( al = 'z'; al >= 'a'; al-- )
	{
		putchar(al);
	}

	putchar('\n');

	return 0;

}
