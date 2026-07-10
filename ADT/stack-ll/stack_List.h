#ifndef STACK_LIST_H
#define STACK_LIST_H

#include "ll.h"

typedef struct  stack{
    char name[15];
    LIST ll;
}*STACK;

STACK createNewStack(char name[]);
int isEmpty(STACK s);
int top(STACK s);
int pop(STACK s);
void push(STACK s, int ele);

#endif