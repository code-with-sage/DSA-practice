#include "ll.h"

typedef struct  stack{
    LIST ll;
}*STACK;

STACK createNewStack(int n);
int isEmpty(STACK s);
int top(STACK s);
int pop(STACK s);
void push(STACK s, int ele);