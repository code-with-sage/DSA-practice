#include "stack_List.h"

STACK createNewStack(char n[])
{
     STACK s = malloc(sizeof(STACK));
     s->ll = createNewList;
     strcpy(s->name, n);
     return s;
}
int isEmpty(STACK s)
{
    isListEmpty(s->ll);
}
int top(STACK s)
{
    return  s->ll->head->ele;
}
int pop(STACK s)
{ 
    if (isEmpty(s)){
        printf("stack underflow error\n");
        exit(1);
    }
    return deleteFisrt(s->ll);
}
void push(STACK s, int ele)
{
    if (isEmpty(s)){
        printf("stack underflow error\n");
        exit(1);
    }
    NODE n = createNewNode(ele);
    insertFisrt(n , s->ll);
}