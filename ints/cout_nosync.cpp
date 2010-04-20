#include <iostream>

int main(int argc, char *argv[])
{
	int i;

	//std::cout.sync_with_stdio(false);
	//std::ios::sync_with_stdio(false);
	std::ios_base::sync_with_stdio(false);

	for(i=0; i<MAXLINES; i++)
	{
		std::cout << PRINTNUMBER << std::endl;
	}
	return 0;
}
