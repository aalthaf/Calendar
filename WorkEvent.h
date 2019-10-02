#ifndef WORKEVENT_H
#define WORKEVENT_H


#include "Event.h"

using namespace std;

class WorkEvent: public Event{

 public:
  WorkEvent(string,int);
  
  

 private:
  bool operator<(Event&);

};




#endif
