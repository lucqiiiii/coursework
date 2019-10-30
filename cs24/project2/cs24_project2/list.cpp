//Qi Guo Project2
#include "list.h"
#include <iostream>
using namespace std;

//Constructor
list::list(){
    head = NULL;
}

void list::add(const value_type& fname){
    ldnode* temp = head;
    while(temp){
        if(temp -> get_file() -> filename() == fname){
            temp -> get_file() -> inc_count();
            return; 
        }
        temp = temp -> nextn();
    }
    itemtype* file = new itemtype(fname);
    ldnode* newnode = new ldnode(fname,NULL,NULL);
    if(head == NULL){
        head = newnode;
    }
    else{
        temp -> prevn() -> set_next(newnode);
        
        while(file -> count() > temp -> get_file() -> count()){
        
    /*ldnode* temp = head();

    if(head == NULL){
        ldnode* temp = new ldnode;
        temp -> info -> set_filename(fname);
        temp -> info -> inc_count();
        head = temp;
    }
    else{
        ldnode *n = head;
        while(n){
            if(n -> info -> filename() == fname){
                n -> info -> inc_count();
                return;
            }
            n = n -> next;    
        }
        ldnode *temp = new ldnode;
        temp -> info -> set_filename(fname);
        temp -> info -> inc_count();
        n -> prev -> next = temp;
        n -> prev = temp;
    }*/
}

