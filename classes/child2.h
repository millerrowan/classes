#ifndef MOVIE_H
#define MOVIE_H

#include <iostream>
#include "parent.h"
#include <cstring>

//movies

using namespace std;

class movie : public media {

public:
  movie(); 
  int getDuration();
  char* getDirector();
  int getRating();
  void print();
protected: 
  int duration;
  int rating;
  char director[30]; 
  
};
#endif
