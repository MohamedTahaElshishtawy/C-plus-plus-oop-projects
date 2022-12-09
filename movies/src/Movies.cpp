#include "Movies.h"

bool Movies::add_movie(string name, string rating,int watched)
{
    for(Movie&movie:movies) //note that type of looping is looping by value
    {
        if(movie.get_name() == name)
            return false;
    }
    Movie temp(name,rating,watched);
    movies.push_back(temp);
    return true;

}
bool Movies::increment_watched(string name)
{
    for(Movie&movie:movies)
    {
        if(movie.get_name() == name)
            movie.increment_watched();
        return true;
    }
    return false;
}
void Movies::display()const
{
    if(movies.size() == 0)
        cout<<"Sorry no movies to display"<<endl;
    else
    {
        cout<<"====================================="<<endl;
        for(Movie&movie:movies)
            movie.display();
        cout<<"====================================="<<endl;
    }
}


