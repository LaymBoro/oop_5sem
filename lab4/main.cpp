#include "Wine.hpp"

int main()
{
    cout << "Enter name of wine: "; 
    string label;
    cin >> label;

    cout << "Enter number of bottles: "; 
    int years;
    cin >> years;

    Wine firstLabel(label.c_str(), years); 
    firstLabel.getBottles(); 
    firstLabel.print(); 

    const int Ages = 3;
    int y[Ages] = { 2002, 14, 002};
    int b[Ages] = { 01, 50, 100 };

    Wine secondLabel("Test Wine", y, b, Ages);
    secondLabel.print();

    Wine thirdLabel;
    thirdLabel.print();

    cout << "Total bottles for " << thirdLabel.getLabel() 
        << ": " << thirdLabel.getSumOfBottles(); 
}