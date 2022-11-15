#include "Classic.hpp"

Classic::Classic() : Cd()
{
	mostFamous = nullptr;
}

Classic::Classic(const Classic &c) : Cd(c)
{
	mostFamous = new char[strlen(c.mostFamous) + 1];
	mostFamous = strcpy(mostFamous, c.mostFamous);
}

Classic::Classic(char* s1, char* s2, char* s3, int n, double x) : Cd(s1, s2, n, x)
{
	mostFamous = new char[strlen(s3) + 1];
	mostFamous = strcpy(mostFamous, s3);
}

Classic& Classic::operator=(const Classic& c)
{
	if (this == &c)
		return (*this);
	delete[] mostFamous;
	mostFamous = new char[strlen(c.mostFamous) + 1];
	mostFamous = strcpy(mostFamous, c.mostFamous);

	return (*this);

}

void Classic::Report()
{
	std::cout << "Most famous audio: " << mostFamous << "\n";
}