#pragma once
#include <iostream>
#include <utility>
#include <valarray>
#include <string>

using namespace std;

class Wine
{
    private:
    pair <valarray<int>, valarray<int>> info;
    string label;
    int  ages;

    public:
    Wine();
    Wine(const char* label, int* years, int* quontity, size_t ages);
    Wine(const char* label, size_t ages);
    Wine(const char* label, pair<valarray<int>, valarray<int>> info);
    void getBottles();
    string getLabel();
    int getSumOfBottles();
    void print();
};
