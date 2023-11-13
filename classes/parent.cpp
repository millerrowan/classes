#include <iostream>
#include "parent.h"
#include <cstring>

//all digital media

//defines all the function in the parent class lie getTitle, getYear

int media::getYear() {
  return year; 
}

char* media::getTitle() {
  return title; 
}
