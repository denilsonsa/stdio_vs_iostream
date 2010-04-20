#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
	register long int i;
	register FILE *f;

	f=fopen("sample.in","w");
	srand(time(0));

	for(i=0; i<100000000; i++)
	{
		fprintf(f,"%g\n",(double)rand()/rand());
	}

	fclose(f);

	return 0;
}
