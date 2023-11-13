#ifndef MEDIA_H
#define MEDIA_H

#include <iostream>
#include <cstring>

//all digital media

using namespace std; 


class media {
 public:
  int getYear();
  char* getTitle();
 protected:
  //title, year what is unique to parent class as well as get title 
  int year;
  char title[30]; 
};
#endif
