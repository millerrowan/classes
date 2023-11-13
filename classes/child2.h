#ifndef MOVIE_H
#define MOVIE_H

#include <iostream>
#include "parent.h"
#include <cstring>

//movies

using namespace std;

class movie : public media {

public:
  Movie(title, year, publisher, rating, duration); 
  int getDuration();
  char* getDirector();
  int getRating();
protected: 
  int duration;
  int rating;
  char director[30]; 
  
};
#endif
