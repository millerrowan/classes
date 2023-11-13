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
  VideoGame(publisher, title, year, rating);
  int getRating();
  char* getPublisher(); 
protected:
  int rating;
  char publisher[30]; 
};
#endif
