#include "abstr_emp.hpp"

abstr_emp::abstr_emp()
{
	fname = "null";
    lname = "null";
    job = "null";
}

abstr_emp::abstr_emp(const std::string &fn, const std::string &ln, const std::string &j)
{
	fname = fn;
    lname = ln;
    job = j;
}

abstr_emp::abstr_emp(const abstr_emp &e)
{
	fname = e.fname;
    lname = e.lname;
    job = e.job;
}

void abstr_emp::ShowAll() const 
{
	std::cout << "first name: " << fname << "\n"<< "last name: " << lname << "\n"<< "job: " << job << "\n";
}

void abstr_emp::SetAll ( ) {
	std::cout << "first name: ";
    std::cin >> fname;
    std::cout << "last name: ";
    std::cin >> lname;
    std::cout << "job: ";
    std::cin >> job;
}

// std::ostream &operator<<(std::ostream &os, const abstr_emp &е) 
// {
//     os << "first name: " << e.fname << "\n"<< "last name: " << e.lname << "\n"<< "job: " << e.job << "\n";
// 	return os;
// }  

std::ostream &operator<<(std::ostream &out, const abstr_emp &ae)
{
	out << "First name: " << ae.fname << "\nLast name: " << ae.lname << "\nJob: " << ae.job;
	return out;
}

