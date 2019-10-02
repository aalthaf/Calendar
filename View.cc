#include <iostream>
#include <string>


#include "Calendar.h"

#include "View.h"

using namespace std;


View::View(){



}





void View::readInfo(string &eventName, int& hour, int& minute, int& day, int& month, int& year,int& priority)
{
  
  cout << "Event name: ";
  cin >> eventName;
  cout << "day:   ";
  cin  >> day;
  cout << "month: ";
  cin  >> month;
  cout << "year:  ";
  cin  >> year;
  cout <<"hour: ";
  cin >> hour;
  cout << "minute: ";
  cin >> minute;
  cout << "Priority: ";
  cin >> priority;

}

void View::displayMenu(int& selection){
  int numOptions = 1;
  selection  = -1;

  cout << endl;
  cout << "(1) Add event" << endl;
  cout << "(0) Exit" << endl;

  while (selection < 0 || selection > numOptions) {
    cout << "Enter your selection: ";
    cin  >> selection;
  }
  


}

void View::readEventType(string& eventType){

  cout << "Work or School: " ; //Prompt the user for type of event
  cin >> eventType;

}

void View::print(Calendar& calendar){

  calendar.print();
  

}
