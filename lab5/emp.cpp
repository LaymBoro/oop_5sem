#include"emp.hpp"
Employee::Employee() : abstr_emp()
{
}

Employee::Employee (const std::string & fn, const std::string & ln, const std::string & j) : abstr_emp(fn, ln, j)
{
}

void Employee::ShowAll () const 
{
    std::cout << "employee: \n";
    abstr_emp:ShowAll();
}

void Employee::SetAll() 
{
    abstr_emp:SetAll();
}
