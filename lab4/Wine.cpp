#include "Wine.hpp"

Wine::Wine()
{
    ages = 3;
    valarray<int> years = {1888, 1992, 1996};
    valarray<int> quontity = {24, 48, 144};
    info = pair <valarray<int>, valarray<int>> (years, quontity);
    label = "future";

}

Wine::Wine(const char* label, int* years, int* quontity, size_t ages)
{
    this->label = label;
    this->ages = ages;
    info.first = valarray<int>(ages);
    info.second = valarray<int>(ages);
        for (size_t i = 0; i < ages + 1; i++)
        {
            info.first[i] = years[i];
            info.second[i] = quontity[i];
        }
}

Wine::Wine(const char* label, size_t ages)
{
    this->label = label;
    this->ages = ages;
    info.first = valarray<int>(ages);
    info.second = valarray<int>(ages);
}

void Wine::getBottles() 
{
    info.first = valarray<int>(ages);
    info.second = valarray<int>(ages);
    for (size_t i = 0; i < ages; i++)
    {
        cout << "Year: ";
        cin >> info.first[i];
        cout << "Bottles: ";
        cin >> info.second[i];
    }
}

string Wine::getLabel() 
{
    return label;
}

int Wine::getSumOfBottles() 
{
    int sum = 0;
    for (size_t i = 0; i < ages; i++)
    {
        sum += info.second[i];
    }
    return sum;
}

void Wine::print() 
{
    cout << "label: " << label << "\n";
    for(size_t i = 0; i < ages; i++)
    {
        cout << "Year: " << info.first[i] << " Bottles: " << info.second[i] << "\n";
    }
    cout << "Ages: " << ages << "\n";
}

Wine::Wine(const char* label, pair<valarray<int>, valarray<int>> info)
{
    this->label = label;
    this->info = info;
}

