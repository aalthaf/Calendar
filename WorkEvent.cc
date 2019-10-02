#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

#include "WorkEvent.h"


WorkEvent::WorkEvent(string name,int priority ): Event(name,priority){




}

bool WorkEvent::operator<(Event& event){

  if(this->getPriority() < event.getPriority()){

    return true;

  }

  return false;


}
