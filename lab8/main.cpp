#include <iostream>
#include <vector>
#include <memory>

using iterator = std::vector<std::shared_ptr<std::string>>::iterator;


void sort(std::vector<std::shared_ptr<std::string>> arr)
{
    for (iterator i = arr.begin(); i != arr.end(); i++) 
    {
        for (iterator j = i + 1; j != arr.end(); j++) 
        {
            if ((**i).compare((**j)) > 0) 
            {
                std::swap((**j), (**i));
            }
            else if((**i).compare((**j)) == 0)
            {
                (**i).erase();
            }
        }
    }
}

int main()
{
    std::vector<std::shared_ptr<std::string>> MatFriends;
    std::vector<std::shared_ptr<std::string>> PatFriends;
    std::vector<std::shared_ptr<std::string>> BothFriends;

    MatFriends.push_back(std::make_shared<std::string>("Rob"));
	MatFriends.push_back(std::make_shared<std::string>("Bob"));
	MatFriends.push_back(std::make_shared<std::string>("Rick"));
	MatFriends.push_back(std::make_shared<std::string>("Morty"));

    sort(MatFriends);
    std::cout << "---------------Mat friends--------------\n";
    for (iterator i = MatFriends.begin(); i != MatFriends.end(); i++) 
    {
        std::cout << (**i) << "\n";
    }

    PatFriends.push_back(std::make_shared<std::string>("Rick"));
	PatFriends.push_back(std::make_shared<std::string>("Morty"));
    PatFriends.push_back(std::make_shared<std::string>("Anton"));
    PatFriends.push_back(std::make_shared<std::string>("Valeriy"));

    sort(PatFriends);
    std::cout << "---------------Pat friends--------------\n";
    for (iterator j = PatFriends.begin(); j != PatFriends.end(); j++) 
    {
        std::cout << (**j) << "\n";
    }

    iterator i = MatFriends.begin();
    iterator j = PatFriends.begin();
   
    while(i != MatFriends.end() || j != PatFriends.end())
    {
        BothFriends.push_back(*i);
        BothFriends.push_back(*j);
        i++;
        j++;
    }

    sort(BothFriends);
    
    std::cout << "---------------Both friends--------------\n";
    for (iterator i = BothFriends.begin(); i != BothFriends.end(); i++) 
    {
        if(!((**i).empty()))
        {
            std::cout << (**i) << "\n";
        }
    }

    return 0;
}