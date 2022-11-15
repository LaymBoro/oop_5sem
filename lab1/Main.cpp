#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;


class Cow
{
private:
	char* name;
	char* hobby;
	double weight;
public:
	Cow();
	Cow(const char* nm, const char* ho, double weight);
	Cow(const Cow& c);
	~Cow();
	Cow& operator=(const Cow& c);
	void ShowCow() const;
};

Cow::Cow()
{
	this->name = new char[5];
	this->hobby = new char[5];
	strcpy(name, "none");
	strcpy(hobby, "none");
	this->weight = 0.0;
}

Cow::Cow(const char* nm, const char* ho, double weight)
{
	this->name = new char[strlen(nm) + 1];
	this->hobby = new char[strlen(ho) + 1];
	strcpy(this->name, nm);
	strcpy(this->hobby, ho);
	this->weight = weight;
}

Cow::Cow(const Cow& c)
{
	this->name = new char[strlen(c.name) + 1];
	this->hobby = new char[strlen(c.hobby) + 1];
	strcpy(this->name, c.name);
	strcpy(this->hobby, c.hobby);
	this->weight = c.weight;
}

Cow& Cow::operator=(const Cow& c)
{
	if (this == &c)
		return (*this);
    delete[] this->name;
    delete[] this->hobby;
	this->name = new char[strlen(c.name) + 1];
	this->hobby = new char[strlen(c.hobby) + 1];
	strcpy(this->name, c.name);
	strcpy(this->hobby, c.hobby);
	this->weight = c.weight;

	return *this;
}

Cow::~Cow()
{
	delete[] name;
	delete[] hobby;
}

void Cow::ShowCow() const
{
	std::cout << this->name << " " << this->hobby << " " << this->weight << "\n";
}




int main()
{
	Cow TestDefault = Cow();
	TestDefault.ShowCow();
	Cow TestParam = Cow("Jora", "walking", 2121);
	TestParam.ShowCow();
	Cow c = Cow(TestDefault);
	c.ShowCow();
	TestDefault = TestParam;
	TestDefault.ShowCow();

	return 0;
}