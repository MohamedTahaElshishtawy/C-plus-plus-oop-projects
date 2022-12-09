#ifndef MOVIES_H
#define MOVIES_H
#include "Movie.h"
#include <vector>

class Movies
{
private:
    vector<Movie>movies;
public:
    bool add_movie(string name, string rating,int watched);
    bool increment_watched(string name);
    void display()const;
};

#endif // MOVIES_H
