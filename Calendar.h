#ifndef CALENDAR_H
#define CALENDAR_H

#include "Event.h"
#include "List.h"
#include "Array.h"

using namespace std;
class Calendar


{
 public:
  Calendar();
  ~Calendar();
  void setName(string);
  void print();
  void addEvent(Event*);
  void copyEvents(Array&);
  
 private:
  string calendarName;
  List<Event*> list;

  
};
#endif
