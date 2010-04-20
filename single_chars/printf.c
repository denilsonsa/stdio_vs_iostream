#include <stdio.h>

int main(int argc, char *argv[])
{
	int i, j;
	for(i=0; i<MAXLINES; i++)
	{
		for(j=0; j<MAXCOLS; j++)
		{
			printf(".");
		}
		printf(";\n");
	}
	return 0;
}
