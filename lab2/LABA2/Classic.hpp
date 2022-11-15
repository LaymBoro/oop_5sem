#include "Cd.hpp"

class Classic : public Cd 
{
	private:

	char* mostFamous;
	
	public:

	Classic(char *s1, char* s2, char* s3, int n, double x);
	Classic();
	Classic(const Classic &c);
	Classic & operator = (const Classic& c);
	void Report() override;
};
