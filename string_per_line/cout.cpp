#include <iostream>

int main(int argc, char *argv[])
{
	int i;

#ifdef NOSYNC
	//std::cout.sync_with_stdio(false);
	//std::ios::sync_with_stdio(false);
	std::ios_base::sync_with_stdio(false);
#endif

	for(i=0; i<MAXLINES; i++)
	{
#ifdef NOENDL
		//std::cout << PRINTSTRING << '\n';
		std::cout << PRINTSTRING << "\n";
#else
		std::cout << PRINTSTRING << std::endl;
#endif
	}
	return 0;
}
