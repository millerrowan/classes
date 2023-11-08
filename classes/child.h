#include <iostream>
#include "parent.h"
//video games

using namespace std;

class videogame : public media {
  //include what is unique to child class like publisher and rating
  int rating;
  char publisher[30];
}
