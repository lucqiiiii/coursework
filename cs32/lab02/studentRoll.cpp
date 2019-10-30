#include <string>
#include "studentRoll.h"
#include <sstream>

StudentRoll::StudentRoll() {
  head = tail = NULL;
}

void StudentRoll::insertAtTail(const Student &s) {
  Node* temp = new Node;
  temp -> s = new Student(s.getName(),s.getPerm());
//  temp -> s -> setName(s.getName());
//  temp -> s -> setPerm(s.getPerm());
  temp -> next = NULL;
  if(head == NULL){
    head = temp;
    tail = temp;
  }
  else{
    tail -> next = temp;
    tail = temp;
  }
  
}

std::string StudentRoll::toString() const {
/*  ::string result;
  result += "[";
  Node* cursor = head;
  while(cursor -> next){
    result += cursor -> s -> toString();
    result += ",";
    cursor = cursor -> next;
  }
  result += cursor -> s -> toString();
  result += "]";
  return result;*/
  std::ostringstream oss;
  
  oss << "[";
  Node* cursor = head;
  if(head == NULL){
    oss << "]";
    return oss.str();
  }
  while (cursor -> next){
    oss << cursor -> s -> toString() << ",";
    cursor = cursor -> next;
  }
  oss << cursor -> s -> toString() << "]";

  return oss.str();

}

StudentRoll::StudentRoll(const StudentRoll &orig) {
  head = tail = NULL;

  Node* cursor = orig.head;
  while(cursor){
//    Student temp(cursor -> s -> getName(), cursor -> s -> getPerm());
    insertAtTail(*(cursor -> s));
    cursor = cursor -> next;
  }
 
}

StudentRoll::~StudentRoll() {
  Node *cursor = head;
  Node *deleteNode = cursor;
  while(cursor){
    deleteNode = cursor;
    cursor = cursor -> next;
    delete deleteNode -> s;
    delete deleteNode;
    //cursor = cursor -> next;
  }
  //delete cursor;
}

StudentRoll:: ~StudentRoll(){
  Node* cursor = head;
  while(cursor){
    delete cursor -> s;
    cursor = cursor -> next;
  }
  delete cursor;
}
StudentRoll & StudentRoll::operator =(const StudentRoll &right ) {
  // The next two lines are standard, and you should keep them.
  // They avoid problems with self-assignment where you might free up 
  // memory before you copy from it.  (e.g. x = x)

  if (&right == this) 
    return (*this);
  Node *cursor = head;
  while(cursor){
    Node *deleteNode = cursor;
    cursor = cursor -> next;
    delete deleteNode -> s;
    delete deleteNode;
  }
  
  Node* temp = right.head;
  while(temp){
    insertAtTail(*(temp -> s));
    temp = temp -> next;
  }

  // KEEP THE CODE BELOW THIS LINE
  // Overloaded = should end with this line, despite what the textbook says.
  return (*this); 
  
}





