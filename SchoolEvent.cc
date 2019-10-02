#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

#include "SchoolEvent.h"


SchoolEvent::SchoolEvent(string name,int priority): Event(name,priority){




}

bool SchoolEvent::operator<(Event& event){
  // Since the date function has a lessThan function we can use it
  return (this->getDate().lessThan(event.getDate()));

}
