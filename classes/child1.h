#ifndef MUSIC_H
#define MUSIC_H

#include <iostream>
#include "parent.h"
#include <cstring>

//music

using namespace std;

class music : public media {

 public:
  Music(title, year, publisher, artist, duration); 
  int getDuration();
  char* getArtist();
  char* getPublisher(); 
 protected: 
  int duration;
  char artist[30];
  char publisher[30];

};
#endif
