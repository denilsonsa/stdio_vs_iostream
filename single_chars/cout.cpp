#include <iostream>

int main(int argc, char *argv[])
{
	int i, j;
	for(i=0; i<MAXLINES; i++)
	{
		for(j=0; j<MAXCOLS; j++)
		{
			std::cout << ".";
		}
		std::cout << ";" << std::endl;
	}
	return 0;
}
