#ifndef LIST_H
#define LIST_H
#include <cstdlib>

#include "Event.h"
#include "Array.h"

template <class T>
class List
{
  class Node
  {
    friend class List;
    private:
      T data;
      Node*    next;
  };

  public:
    List();
    ~List();
    void add(T);
    void del(const string&);
    void print();
    void copy(Array& arr);

  private:
    Node* head;
};

template<class T>
List<T>::List()
{
  head = NULL;
}

template<class T>
List<T>::~List()
{
  Node *currNode, *nextNode;

  currNode = head;

  while (currNode != NULL) {
    nextNode = currNode->next;
    delete currNode->data;// Since each event is a pointer as well
    delete currNode;
    currNode = nextNode;
  }
}

template<class T>
void List<T>::add(T newEvent)
{
  Node* tmpNode;
  Node* currNode;
  Node* prevNode;

  tmpNode = new Node;
  tmpNode->data = newEvent;
  tmpNode->next = NULL;

  currNode = head;
  prevNode = NULL;

  while (currNode != NULL) {
    /*Now we can pass events instead of date, as WorkEvent and SchoolEvent  have
     their own lessThan function*/
    if (*newEvent< (*(currNode->data)))
      break;
    prevNode = currNode;
    currNode = currNode->next;
  }

  if (prevNode == NULL) {
    head = tmpNode;
  }
  else {
    prevNode->next = tmpNode;
  }

  tmpNode->next = currNode;
}


template<class T>
void List<T>::print()
{
  Node* currNode = head;

  while (currNode != NULL) {
    currNode->data->print();
    currNode = currNode->next;
  }



}

template<class T>
void List<T>::copy(Array& arr){
  Node *currNode = head;

  while(currNode!=NULL){
    
    arr.add(currNode->data);
    currNode = currNode->next;

  }


}




#endif
