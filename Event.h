#ifndef EVENT_H
#define EVENT_H

#include <string>
#include "Date.h"

using namespace std;


class Event
{
  public:
    Event(string="Default",int=0);
    virtual ~Event();
    Date& getDate();
    void setDate(int,int,int,int,int);
    void  print();
    virtual bool operator<(Event&)=0;
    int& getPriority();
    

  protected:
    int pNumber;
    string name;
    Date   date;
};

#endif
