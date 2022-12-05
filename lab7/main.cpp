#include <vector>
#include <memory>
#include "review.hpp"

using iterator = std::vector<std::shared_ptr<Review>>::iterator;

void sortByRating(std::vector<std::shared_ptr<Review>> arr)
{
    for (iterator i = arr.begin(); i != arr.end(); i++) 
    {
        for (iterator j = i + 1; j != arr.end() ; j++) 
        {
            if ((**i).getRating() > (**j).getRating()) 
            {
                std::swap((**i), (**j));
            }
        }
    }
}

void sortByReview(std::vector<std::shared_ptr<Review>> arr)
{
    for (iterator i = arr.begin(); i != arr.end(); i++) 
    {
        for (iterator j = i + 1; j != arr.end() ; j++) 
        {
            if ((**i).getReview().compare((**j).getReview()) > 0) 
            {
                std::swap((**j), (**i));
            }
        }
    }
}

int main()
{
    std::vector<std::shared_ptr<Review>> array;
    std::vector<std::shared_ptr<Review>> arr;

    arr.push_back(std::make_shared<Review>("0", 0));
	arr.push_back(std::make_shared<Review>("3", 123));
	arr.push_back(std::make_shared<Review>("1", 100));
	arr.push_back(std::make_shared<Review>("2", 2));


    sortByRating(arr);
    std::cout << "-------------------------------------\n";
    for (iterator j = arr.begin(); j != arr.end() ; j++) 
    {
        std::cout << (**j) << "\n";
    }
    sortByReview(arr);
    std::cout << "-------------------------------------\n";
    for (iterator i = arr.begin(); i != arr.end() ; i++) 
    {
        std::cout << (**i) << "\n";
    }

    return 0;
}