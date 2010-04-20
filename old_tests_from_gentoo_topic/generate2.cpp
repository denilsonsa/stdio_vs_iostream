#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char *argv[])
{
	register long int i;
	ofstream f;

	f.open("sample.in");
	srand(time(0));

	for(i=0; i<100000000; i++)
	{
		f << (double)rand()/rand() << "\n";
	}
	f.close();

	return 0;
}
