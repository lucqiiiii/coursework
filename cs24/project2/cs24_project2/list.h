#ifndef LIST_H
#define LIST_H
#include <cstdlib>
#include <iostream>
#include "itemtype.h"
using namespace std;

struct ldnode
{
public:
    ldnode(itemtype* i, ldnode* n, ldnode* p){
        info = i;
        next = n; 
        prev = p;
    }

    itemtype* get_file() const { return info; }
    ldnode* prevn() const { return prev; }
    ldnode* nextn() const { return next; }

    void set_next(ldnode* n) { next = n; }
    void set_prev(ldnode* p) { prev = p; }
    void set_info(itemtype* i) { info = i; }

private:
    itemtype* info;
    ldnode* next;
    ldnode* prev;
};

class list
{
public:
    typedef string value_type;
    // constructor
    list();
    // modifiers
    void add(const value_type& fname);
    // observers
    value_type get_fname() const;
    int get_count() const;

private:
/*    struct ldnode{
        itemtype* info;
        ldnode* next;
        ldnode* prev;
        ldnode(itemtype* i, ldnode* n, ldnode* p) : info(i), next(n), prev(p) {}
    };*/
    ldnode *head;
 
};
#endif
