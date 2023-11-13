#include <iostream>
#include "child2.h"
#include <cstring>

//moviescd 

movie::Movie(char* title[30], int year, char* publisher[30], int rating, int duration) {
  cout << "Enter the title" << endl;
  cin >> title;
  cout << "Enter the year published" << endl;
  cin >> year;
  cout << "Enter the director" << endl;
  cin >> director;
  cout << "Enter a rating" << endl;
  cin >> rating;
  cout << "Enter the duration" << endl;
  cin >> duration;
}
  
int movie::getDuration() {
  return duration; 

}

char* movie::getDirector() {
  return director; 

}

int movie::getRating() {
  return rating; 
}
