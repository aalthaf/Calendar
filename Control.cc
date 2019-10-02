#include <iostream>
#include <string>


#include "Calendar.h"
#include "Control.h"
#include "WorkEvent.h"
#include "SchoolEvent.h"

using namespace std;


Control::Control(){

  Array schoolEvents;
  Array workEvents;
 

  
  eS.retrieve(schoolEvents,workEvents);
  // Retrieve the events from the server and store them in their
  // respective calendar
  
  for(int i = 0; i < schoolEvents.getSize();i++){

    schoolCalendar.addEvent(schoolEvents.get(i));

  }
  for(int j=0; j< workEvents.getSize();j++){

    workCalendar.addEvent(workEvents.get(j));

  }



}

Control::~Control(){
   Array school;
  Array work;

  schoolCalendar.copyEvents(school);
  workCalendar.copyEvents(work);

    //copy all events from calendar to the server 

  eS.update(school,work);
}



void Control::launch(){
  
  int menuSelect;
  string eventName;
  int year;
  int month;
  int day;
  int minute;
  int hour;
  int priority;
  string eventType;
  //

  while(1){
    view.displayMenu(menuSelect);
    //Use menuSelect to determine users decision
    if(menuSelect==0)
      break;


    else if(menuSelect==1){
      view.readEventType(eventType);
      view.readInfo(eventName,hour,minute,day,month,year,priority);// passing by reference

      if(eventType=="Work"){
	// If type of event is Work
	Event* newEvent = new WorkEvent(eventName,priority);
	newEvent->setDate(day,month,year,hour,minute);
	workCalendar.addEvent(newEvent);

      }else if(eventType =="School"){
	// If type of event is School
	Event* newEvent = new SchoolEvent(eventName,priority);
	newEvent->setDate(day,month,year,hour,minute);
	schoolCalendar.addEvent(newEvent);
	
	
      }
    }
      
  }
  //Since we have two calendars , we can differentiate them by setting names
  schoolCalendar.setName("School"); 
  workCalendar.setName("Work");
  
}




