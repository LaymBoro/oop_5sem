#pragma once
#include "abstr_emp.hpp"

class Employee : public abstr_emp {
    public :
        Employee ();
        Employee (const std::string & fn, const std::string & ln, const std::string & j);
        virtual void ShowAll () const;
        virtual void SetAll();
};
