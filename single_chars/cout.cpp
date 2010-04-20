#include <iostream>

int main(int argc, char *argv[])
{
	int i, j;

#ifdef NOSYNC
	//std::cout.sync_with_stdio(false);
	//std::ios::sync_with_stdio(false);
	std::ios_base::sync_with_stdio(false);
#endif

	for(i=0; i<MAXLINES; i++)
	{
		for(j=0; j<MAXCOLS; j++)
		{
			std::cout << '.';
		}
#ifdef NOENDL
		std::cout << ';' << '\n';
#else
		std::cout << ';' << std::endl;
#endif
	}
	return 0;
}
