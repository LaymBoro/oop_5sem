#include"fink.hpp"

const std::string Fink::ReportsTo () const 
{
    return reportsto;
}

std::string &Fink::ReportsTo ()
{
    return reportsto;
}

Fink::Fink() : abstr_emp()
{
    reportsto = "null";
}

Fink::Fink(const std::string &fn, const std::string &ln, const std::string &j, const std::string &rpo) : abstr_emp(fn, ln, j)
{
    reportsto = rpo;
}

Fink::Fink(const abstr_emp &е, const std::string &rpo) : abstr_emp(e)
{  
    reportsto = rpo;
}

Fink::Fink (const Fink &е) : abstr_emp(e)
{
    reportsto = e.reportsto;
}

void Fink::ShowAll() const
{
    abstr_emp::ShowAll();
    std::cout << "reports to: " << reportsto << "\n"; 
}

void Fink::SetAll()
{
    abstr_emp::SetAll();
    std::cout << "reports to: ";
    std::cin >> reportsto;
}