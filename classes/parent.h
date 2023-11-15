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
  virtual void print(); 
 protected: 
  int year;
  char title[30]; 
};
#endif
