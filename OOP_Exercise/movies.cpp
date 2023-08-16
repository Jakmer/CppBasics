#include "movies.h"
#include <iostream>

using std::cout, std::string, std::endl;

bool Movies::addMovie(string name, string rating, int watched)
{
    for (const Movie &i : collection)
    {
        if (name == i.getName())
        {
            return false;
        }
    }
    
    Movie m {name, rating, watched};
    collection.push_back(m);
    
    return true;
}
bool Movies::incrementWatched(string name)
{
    for (Movie &i : collection)
    {
        if (name == i.getName())
        {
            i.setWatched();
            return true;
        }
    }
    return false;
}
void Movies::display()const
{
    cout << "=================================" << endl;
    if (collection.size() == 0)
        cout << "0 movies found" << endl;
    else
        for (const auto &i : collection)
        {
            i.displayMovie();
        }
    cout << "=================================" << endl;
}

Movies::Movies()
{
}

Movies::~Movies()
{
    cout<<"~~~~~~~~~~"<<endl;
}

