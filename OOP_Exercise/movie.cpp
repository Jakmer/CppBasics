#include <iostream>
#include "movie.h"

using std::cout, std::string, std::endl;

void Movie::setName(string n)
{
    name = n;
}

void Movie::setRating(string r)
{
    rating = r;
}

void Movie::setWatched()
{
    watched++;
}

string Movie::getName() const
{
    return name;
}

string Movie::getRating() const
{
    return rating;
}

int Movie::getWatched() const
{
    return watched;
}

Movie::Movie(string n, string r, int w)
{
    name = n;
    rating = r;
    watched = w;
}

Movie::Movie(const Movie &movie) : name(movie.name), rating(movie.rating), watched(movie.watched)
{
}

Movie::~Movie()
{
}

void Movie::displayMovie() const
{
    cout << name << " - " << rating << " - " << watched << endl;
}