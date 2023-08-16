#ifndef MOVIES
#define MOVIES

#include <iostream>
#include <vector>
#include "movie.h"

using std::cout, std::string, std::endl;

class Movies
{
    std::vector<Movie> collection;
public:
    bool addMovie(string name, string rating, int watched);
    bool incrementWatched(string name);
    void display()const;
    Movies();
    ~Movies();
};

#endif