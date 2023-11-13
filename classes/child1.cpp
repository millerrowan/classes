#include <iostream>
#include "child1.h"
#include <cstring>

//music

//defines 

music::Music(char* title[30], int year, char* publisher, char* artist[30], int duration) {
  cout << "Enter the title" << endl;
  cin >> title;
  cout << "Enter the year published" << endl;
  cin >> year;
  cout << "Enter the publisher" << endl;
  cin >> publisher;
  cout << "Enter the artist" << endl;
  cin >> artist;
  cout << "Enter the duration" << endl;
  cin >> duration;
}

}

int music::getDuration() {
  return duration; 
}

char* music::getArtist() {
  return artist; 

}

char* music::getPublisher() {
  return publisher; 

}
