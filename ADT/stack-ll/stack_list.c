#include "stack_List.h"

STACK createNewStack(char n[])
{
    STACK s = malloc(sizeof(struct stack));  //i was definde STACK it was throwing error 
    s->ll = createNewList();
    strcpy(s->name, n);
    return s;
}
int isEmpty(STACK s)
{
    isListEmpty(s->ll);
}
int top(STACK s)
{
    // printf("top() called\n");  used for debugging 

    if (s->ll->head == NULL)
    {
        printf("Head is NULL\n");
        return -1;
    }

    // printf("Head element = %d\n", s->ll->head->ele);  ued for debuggin 

    return s->ll->head->ele;
}

int pop(STACK s)
{
    if (isEmpty(s))
    {
        printf("stack underflow error\n");
        exit(1);
    }
    return deleteFisrt(s->ll);
}
void push(STACK s, int ele)
{
    // printf("pussig form stack_list %d", ele); used for dbugging
    NODE n = createNewNode(ele);
    insertFisrt(n, s->ll);
    // printf("pushing suceeded");  used for debugging
}