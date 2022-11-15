#include "Cd.hpp"

Cd::Cd(char* performer, char* label, int n, double playtime)
{
    performers = new char[50];
	performers = strcpy(performers, performer);
	labels = new char[20];
	labels = strcpy(labels, label);
	selection = n;
	this->playtime = playtime;
    
}

Cd::Cd(const Cd & d)
{
    performers = new char[strlen(d.performers) + 1];
	performers = strcpy(performers, d.performers);
	labels = new char[strlen(d.labels) + 1];
	labels = strcpy(labels, d.labels);
	selection = d.selection;
	playtime = d.playtime;
    
}

Cd::Cd()
{
    performers = nullptr;
    labels = nullptr;
}

Cd::~Cd()
{
    delete[] performers;
    delete[] labels;
}

void Cd::Report()
{
    std::cout << "performer: " << performers << "\nlabel: " << labels \
		<< "\nselection: " << selection << "\nplaytime: " << playtime << "\n";
}


Cd & Cd::operator= (const Cd & d) 
{
    if (this == &d)
		return(*this);
	delete[] performers;
	delete[] labels;
    performers = new char[strlen(d.performers) + 1];
	performers = strcpy(performers, d.performers);
	labels = new char[strlen(d.labels) + 1];
	labels = strcpy(labels, d.labels);
	selection = d.selection;
	playtime = d.playtime;
}
