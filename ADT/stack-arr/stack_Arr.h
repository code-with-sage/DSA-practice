#include <stdio.h>
#include <stdlib.h>

typedef struct stack {
    int max_size;
    int size;
    int *array;
} *STK;

//funtions delcareation 

STK createNewStack(int n);
int isEmpty(STK s);
int top(STK s);
int pop(STK s);
void push(STK s, int ele);

