#include <iostream>
#include "child.h"
//video games

videgogame::VideoGame(char* publisher[30], char* title[30], int year, int rating) {
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

char videogame::getPublisher() {
  return publisher; 
}
