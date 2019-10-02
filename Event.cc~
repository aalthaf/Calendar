#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Event.h"

Event::Event(string n,int p)
{
  name = n;
  pNumber = p;
  //date.set(d,m,y,h,min);
}


void Event::setDate(int d, int m, int y, int h, int min)
{
  date.set(d,m,y,h,min);
}


Event::~Event(){



}

Date& Event::getDate()
{
  return date;
}

void Event::print()
{
  cout << setfill(' ') << setw(20) << name << ": ";
  date.printShort();
  cout << setfill(' ') << setw(10) << "#" << pNumber << endl;
}

int& Event::getPriority(){

  return pNumber;

}
