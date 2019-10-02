#include <iostream>
#include <iomanip>
#include <string>

#include "Calendar.h"




Calendar::Calendar(){

 
  //numberOfEvents = 0;
  

}

Calendar::~Calendar(){
  

}

void Calendar::setName(string n){
  calendarName = n;

}

void Calendar::print(){
  
  cout << endl << "Calendar: " << calendarName << endl;
  list.print();


}

void Calendar::addEvent(Event* event){

  list.add(event);

}

void Calendar::copyEvents(Array& arr){

  list.copy(arr);


}
