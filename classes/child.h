#ifndef VIDEOGAME_H
#define VIDEOGAME_H

#include <iostream>
#include "parent.h"
#include <cstring>

//video games

using namespace std;

class videogame : public media {
  //include what is unique to child class like publisher and rating
public: 
  videogame();
  int getRating();
  char* getPublisher();
  void print();
protected:
  int rating;
  char publisher[30]; 
};
#endif
