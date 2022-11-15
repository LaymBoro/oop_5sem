#include<iostream>
#include <cstring>

using namespace std;

template<typename T>
T maxn(T* arr, size_t len)
{
    T max = arr[0];
    size_t i = 0;
    while(i < len + 1)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
        i++;
    }
    return max;
}

template<>
char* maxn(char** arr, size_t len)
{
    char* max = arr[0];
    int maxValue = strlen(arr[0]);
    size_t i = 0;
    char* resultAdress = nullptr;

    while(i < len + 1)
    {
        if (strlen(arr[i]) > maxValue)
            {
                maxValue = strlen(arr[i]);
                resultAdress = arr[i]; 
            }
            i++;
    }
   return resultAdress; 

}

int main()
{
    int arr[6] = {10, 2, 15, 141, 10};    
    double array[4] = {1.15, 5.45, 3.20, 2.30};
    char* str[5] = {"long", "long string", "short", "short str", "str"};

    cout << maxn(arr, 6) << "\n";
    cout << maxn(array, 4) << "\n";
    cout << maxn(str, 5) << "\n";

    return 0;
}