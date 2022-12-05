#pragma once

#include <iostream>

class Review
{
    private:
    
        std::string review;
        int rating;

    public:

        Review();
        Review(std::string review, int rating);
        ~Review();
        std::string getReview();
        int getRating();
        void setRating(int rating);
        void setReview(std::string review);

        Review &operator=(const Review &reviev);
        friend std::ostream &operator<< (std::ostream &out, Review &reviev);

};
