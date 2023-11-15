#include <iostream>
#include "child1.h"
#include <cstring>

//music

music::music() {
  cout << "Enter the title" << endl;
  cin >> title;
  cout << "Enter the year published" << endl;
  cin >> year;
  cout << "Enter the publisher" << endl;
  cin >> publisher;
  cout << "Enter the artist" << endl;
  cin >> artist;
  cout << "Enter the duration in seconds" << endl;
  cin >> duration;
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

void music::print() {
  cout << "Title: " << title << endl;
  cout << "Year: " << year << endl;
  cout << "Publisher: " << publisher << endl;
  cout << "Artist: " << artist << endl;
  cout << "Duration: " << duration << endl; 
  
}
