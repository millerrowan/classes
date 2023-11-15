#include <iostream>
#include "child.h"
#include <cstring>

//video games

videogame::videogame() {
  cout << "Enter the title" << endl;
  cin >> title;
  cout << "Enter the year published" << endl;
  cin >> year; 
  cout << "Enter the publisher" << endl;
  cin >> publisher;
  cout << "Enter a rating" << endl;
  cin >> rating;
  }


int videogame::getRating() {
  return rating; 
}

char* videogame::getPublisher() {
  return publisher; 
}

void videogame::print() {
  cout << "Title: " << title << endl;
  cout << "Year: " << year << endl;
  cout << "Publisher: " << publisher << endl;
  cout << "Rating: " << rating << endl; 
}
