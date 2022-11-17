#include"manager.hpp"

Manager::Manager() : abstr_emp()
{
    inChargeOf = 0;
}

Manager::Manager(const std::string& fn, const std::string& ln, const std::string& j, int ico) : abstr_emp()
{
    inChargeOf = ico;
}

Manager::Manager(const abstr_emp& e, int ico) : abstr_emp(e)
{
    inChargeOf = ico;
}

Manager::Manager(const Manager& m) : abstr_emp(m)
{
    inChargeOf = m.inChargeOf;
}

void Manager::ShowAll() const
{
    abstr_emp::ShowAll();
    std::cout << "in charge of:" << inChargeOf << "\n";
}

void Manager::SetAll()
{
    abstr_emp::SetAll();
    std::cout << "in charge of:";
    std::cin >> inChargeOf;
}