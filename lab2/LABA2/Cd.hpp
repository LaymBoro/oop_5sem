#include <cstring>
#include <iostream>

class Cd
{
    private:
    char* performers;
    char* labels;
    int selection;
    double playtime;

    public:
    Cd(char* s1, char* s2, int n, double x);
    Cd(const Cd & d);
    Cd();
    ~Cd();
    virtual void Report();
    Cd & operator= (const Cd & d);
};
