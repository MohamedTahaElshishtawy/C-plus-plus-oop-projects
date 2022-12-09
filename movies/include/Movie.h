#ifndef MOVIE_H
#define MOVIE_H
#include<iostream>
using namespace std;

class Movie
{
private:
    string name; //the name of movie
    string rating;// the movie rating G,PG,PG-13,R
    int watched;//the number of times you've watched the movie
public:
    Movie(string name , string rating ,int watched);
    Movie(const Movie & source);

    void set_name(string name){this->name = name;}
    string get_name(){return name;}

    void set_rating(string rating){this->rating = rating;}
    string get_rating(){return rating;}

    void set_watched(int watched){this->watched = watched;}
    int get_watched(){return watched;}

    void increment_watched(){watched++;}
    void display() const ;

};

#endif // MOVIE_H
