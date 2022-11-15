#include<iostream>
#include<cstring>

using namespace std;

template<typename T>
class maxn
{
    private:
    T* arr;

    public:
    
    maxn(T* array)
    {
        T* arr = array;
    }
    
    T max()
    {
        T max = this->arr[0];
        size_t i = 0;
        while(this->arr[i])
        {
            if(this->arr[i] > max)
            {
                max = this->arr[i];
            }
            i++;
        }
        return max;
    }
};
template<>
class maxn<char*>
{
    private:
    char* arr[6];

    public:
    maxn(char* array[6])
    {
        char* arr = array[6];
    }

    char* max()
    {
        char* max = this->arr[0];
        int maxValue = strlen(arr[0]);
        size_t i = 0;
        char* resultAdress = nullptr;

        while(arr[i])
        {
            if (strlen(arr[i]) > maxValue)
            {
                maxValue = strlen(this->arr[i]);
                resultAdress = arr[i]; 
            }
            i++;
        }
       return resultAdress; 
    }
};

int main()
{
    int arr[5] = {10, 2, 15, 141, 10};    
    double array[4] = {1.15, 5.45, 3.20, 2.30};
    char* str[6] = {"long", "long string", "short", "short str", "str"};
    
    maxn<int> I(arr);
    maxn<double> D(array);
    maxn<char*> S(str);
    cout << I.max() << "\n" << D.max() << "\n" << S.max() << "\n";
    
    
    return 0;
}