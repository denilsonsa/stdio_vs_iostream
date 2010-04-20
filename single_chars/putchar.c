#include <stdio.h>

int main(int argc, char *argv[])
{
	int i, j;
	for(i=0; i<MAXLINES; i++)
	{
		for(j=0; j<MAXCOLS; j++)
		{
			putchar('.');
		}
		putchar(';');
		putchar('\n');
	}
	return 0;
}
