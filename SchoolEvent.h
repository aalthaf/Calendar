#ifndef SCHOOLEVENT_H
#define SCHOOLEVENT_H


#include "Event.h"

using namespace std;

class SchoolEvent: public Event{

 public:
  SchoolEvent(string,int);
  
  

 private:
  bool operator<(Event&);

};




#endif
