
#include <iostream>
#include "movies.h"


using std::cout, std::endl, std::string;

void add_movie(Movies &movies, string name, string rating, int watched)
{
    if (movies.addMovie(name, rating, watched))
    {
        cout << "Added" << endl;
    }
    else
    {
        cout << "Movie already exists in collection" << endl;
    }
}

void increment_watched(Movies &movies, string name)
{
    if (movies.incrementWatched(name)) {
        std::cout << name << " watch incremented" <<  std::endl;
    } else {
        std::cout << name << " not found" <<  std::endl;
    }
}

int main()
{
    Movies my_movies {};

    my_movies.display();

    add_movie(my_movies, "Big", "PG-13", 2);     // OK
    add_movie(my_movies, "Star Wars", "PG", 5);  // OK
    add_movie(my_movies, "Cinderella", "PG", 7); // OK

    my_movies.display(); // Big, Star Wars, Cinderella

    add_movie(my_movies, "Cinderella", "PG", 7); // Already exists
    add_movie(my_movies, "Ice Age", "PG", 12);   // OK

    my_movies.display(); // Big, Star Wars, Cinderella, Ice Age

    increment_watched(my_movies, "Big");     // OK
    increment_watched(my_movies, "Ice Age"); // OK

    my_movies.display(); // Big and Ice Age watched count incremented by 1

    increment_watched(my_movies, "XXX"); // XXX not found
    return 0;
}