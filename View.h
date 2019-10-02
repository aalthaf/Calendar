#ifndef VIEW_H
#define VIEW_H

#include "Calendar.h"


class View{


 public:
  View();
  
  void displayMenu(int&);
  void readInfo(string& ,int&,int&,int&,int&,int&,int&);
  void print(Calendar&);
  void readEventType(string&);

 private:
  


};


#endif
