
#include <iostream>
#include "child2.h"
#include <cstring>

//movies 

movie::movie() {
  cout << "Enter the title" << endl;
  cin >> title;
  cout << "Enter the year published" << endl;
  cin >> year;
  cout << "Enter the director" << endl;
  cin >> director;
  cout << "Enter a rating" << endl;
  cin >> rating;
  cout << "Enter the duration in minutes" << endl;
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

void movie::print() {
  cout << "Title: " << title << endl;
  cout << "Year: " << year << endl;
  cout << "Director: " << director << endl;
  cout << "Rating: " << rating << endl;
  cout << "Duration: " << duration << endl; 
}
