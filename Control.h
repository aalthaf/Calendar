#ifndef CONTROL_H
#define CONTROL_H

#include "View.h"
#include "Calendar.h"
#include "EventServer.h"

using namespace std;


class Control{



 public:
  Control();
  ~Control();
  void launch();
  

  
 private:
  Calendar schoolCalendar;
  Calendar workCalendar;
  EventServer eS;
  View view;
 


};



#endif
