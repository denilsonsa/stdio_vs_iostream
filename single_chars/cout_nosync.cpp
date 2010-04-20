#include <iostream>

int main(int argc, char *argv[])
{
	int i, j;

	//std::cout.sync_with_stdio(false);
	//std::ios::sync_with_stdio(false);
	std::ios_base::sync_with_stdio(false);

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
