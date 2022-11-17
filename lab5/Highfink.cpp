#include "Highfink.hpp"

Highfink::Highfink() : Manager()
{
    
}

Highfink::Highfink (const std::string &fn, const std::string &ln, const std::string &j, const std::string &rpo, int ico) : Manager(fn, ln, j, ico), Fink(fn, ln, j, rpo)
{
	
}

Highfink::Highfink (const abstr_emp &е, const std::string &rpo, int ico) : Manager(e, ico), Fink(e, rpo)
{
	
}

Highfink::Highfink (const Fink &f, int ico) : Manager(f, ico), Fink(f)
{
	
}

Highfink::Highfink (const Manager & m, const std::string & rpo) : Manager(m), Fink(m, rpo)
{

}

Highfink::Highfink (const Highfink & h) : Manager(h), Fink(h) 
{
	
}

void Highfink::ShowAll() const 
{
    Manager:ShowAll();
    std::cout << "reports to: " << ReportsTo() << "\n"; 
}

void Highfink::SetAll() 
{
	Manager::SetAll();
    Fink::SetAll();
}
