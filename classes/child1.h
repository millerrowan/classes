#ifndef MUSIC_H
#define MUSIC_H

#include <iostream>
#include "parent.h"
#include <cstring>

//music

using namespace std;

class music : public media {

 public:
  music(); 
  int getDuration();
  char* getArtist();
  char* getPublisher();
  void print();
 protected: 
  int duration;
  char artist[30];
  char publisher[30];

};
#endif
