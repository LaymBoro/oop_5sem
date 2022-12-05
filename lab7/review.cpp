#include"review.hpp"

Review::Review()
{
    review = "none";
    rating = 0;
}

Review::Review(std::string review, int rating) : review(review), rating(rating)
{   }

Review::~Review()
{

}

int Review::getRating()
{
    return rating;
}

void Review::setRating(int rating) 
{
    this->rating = rating;
}

void Review::setReview(std::string review) 
{
    this->review = review;
}

Review &Review::operator=(const Review &review) 
{
    this->rating = review.rating;
    this->review = review.review;

    return (*this);
}

std::string Review::getReview()
{
    return review;
}

std::ostream &operator<< (std::ostream &out, Review &review) 
{
    out << "Review: " << review.getReview() << "\nRating: " << review.getRating() << "\n";
    
    return out;
}
