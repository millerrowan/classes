#include <iostream>
#include "parent.h"
#include "child.h"
#include "child1.h"
#include "child2.h"
#include <vector>
#include <cstring> 

using namespace std;

/* 
Classes is a program that allows you to add, search, and delete mediatypes to and from a database
Author: Rowan Miller
11/15/23
 */

void add(vector<media*>* mediatypes, char input[10]);
void search(vector<media*>* mediatypes);
void erase(vector<media*>* mediatypes); 

int main() {
  
 bool stillUsing = true;

  vector <media*>* mediatypes;

  while (stillUsing == true)  {
    cout << "Please type in either ADD, SEARCH, DELETE, or QUIT" << endl;
    char input [10];
     cin >> input;
     cin.ignore(10, '\n');
     //if the user types in ADD
    if(strcmp(input, "ADD") == 0) {
      add(mediatypes, input);
    }

    //if user types PRINT
    if(strcmp(input, "SEARCH") == 0) {
      search(mediatypes);
    }

     //if user types DELETE
    if(strcmp(input, "DELETE") == 0) {
      erase(mediatypes);
    }

     //if user types QUIT
    if(strcmp(input, "QUIT") == 0) {
      cout << "Quitting..." << endl;
      bool stillUsing = false;
      exit(0);
    }

  }
  return 0; 
}

//function to add mediatypes to database
void add(vector<media*>* mediatypes, char input[10]) {
  cout << "what media type would you like to add?" << endl;
  cout << "type 'videogame', 'music', or 'movie'" << endl;
  cin >> input;
  cin.ignore();
  if (strcmp(input, "videogame") == 0) {
    videogame* vg = new videogame();
    mediatypes -> push_back(vg); 
  }
  if (strcmp(input, "music") == 0) {
    music* mu = new music();
    mediatypes -> push_back(mu);
  }
  if (strcmp(input, "movie") == 0) {
    movie* mv = new movie();
    mediatypes -> push_back(mv);
  }

}

//search for and print media
void search(vector<media*>* mediatypes) {
  cout << "search for media" << endl;
  cout << "Would you like to search by year or by title" << endl;
  cout << "Type YEAR or TITLE" << endl;
  char input[10];
  cin >> input;
  cin.ignore();
  //if user searches by year
  if (strcmp(input, "YEAR") == 0) {
    int inputYear;
    cout << "enter a year" << endl;
    cin >> inputYear;
    for(vector<media*>::iterator it = mediatypes->begin(); it != mediatypes->end(); it++) {
      if((*it) -> getYear() == inputYear) {
	cout << "Printing..." << endl; 
	(*it) -> print(); 
      }
    }
  }
  //if user searches by title
  else if (strcmp(input, "TITLE") == 0) {
    char inputTitle[30];
    cout << "Enter a title" << endl;
    cin >> inputTitle;
    cin.ignore(); 
    for(vector<media*>::iterator it = mediatypes->begin(); it != mediatypes->end(); it++) { 
      if(strcmp((*it) -> getTitle(), inputTitle) == 0) {
	cout << "Printing..." << endl; 
        (*it) -> print();
      }
    }
  }
}

 
//deletes media from the database
void erase(vector<media*>* mediatypes) {
  cout << "deleting a media type" << endl;
  cout << "Would you like to search by year or by title" << endl;
  cout << "Type YEAR or TITLE" << endl;
  char input[10];
  cin >> input;
  cin.ignore();
  //if user searches by year
  if (strcmp(input, "YEAR") == 0) {
    int inputYear;
    cout << "enter a year" << endl;
    cin >> inputYear;
    for(vector<media*>::iterator it = mediatypes->begin(); it != mediatypes->end(); it++) {
      if((*it) -> getYear() == inputYear) {
        delete *it;
	mediatypes->erase(it);
	cout << "deleting..." << endl; 
	break;
      }
    }
  }
  //if user searches by title
  else if (strcmp(input, "TITLE") == 0) {
    char inputTitle[30];
    cout << "Enter a title" << endl;
    cin >> inputTitle;
    cin.ignore();
    for(vector<media*>::iterator it = mediatypes->begin(); it != mediatypes->end(); it++) {
      if(strcmp((*it) -> getTitle(), inputTitle)==0)  {
        delete *it;
	mediatypes->erase(it);
	cout << "deleting..." << endl;
	break;
      }
    }
  }
}

