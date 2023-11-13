#include <iostream>
#include "parent.h"
#include "child.h" 
#include <vector>
#include <cstring> 

using namespace std;

int main() {
  //includes where you create new Parent and well as new childs
  //in the add function ask which media type person would like to create and create a pointer of that media type
 bool stillUsing = true;

  vector <media*> mediatypes;

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
      cout << "Quitting" << endl;
      bool stillUsing = false;
      exit(0);
    }

  
  return 0; 
}

void add(vector<media*>& mediatypes, char input[10]) {
  cout << "what media type would you like to add?" << endl;
  cout << "type 'videogame', 'music', or 'movie'" << endl;
  cin >> input;
  cin.ignore();
  if (strcmp(input, "videogame") == 0) {
    videogame* vg = new VideoGame(publisher, title, year, rating); 
  }
  if (strcmp(input, "music") == 0) {
    music* mu = new Music(title, year, publisher, artist, duration);
  }
  if (strcmp(input, "movie") == 0) {
    movie* mv = new Movie(title, year, director, rating, duration);
  }

}

//prints student
void search(vector<media*>& mediatypes) {
  cout << "search for media" << endl;
  }
}

//deletes students from the database
void erase(vector<media*>& mediatypes) {
  
      break;
    }
   }
}
