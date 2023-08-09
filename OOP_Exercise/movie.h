#ifndef MOVIE
#define MOVIE

#include <iostream>

using std::cout, std::string, std::endl;

class Movie
{
    string name;
    string rating;
    int watched;

public:
    string getName()const;
    string getRating() const;
    int getWatched() const;
    void setWatched();
    void setName(string n);
    void setRating(string r);

    void displayMovie() const;

    Movie(string n, string r, int w);
   // Movie(const Movie &movie);
    ~Movie();
};

#endif 