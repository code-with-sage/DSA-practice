#include "stack_Arr.h"

STK createNewStack(int n)
{
    STK s = malloc(sizeof(struct stack));

    s->size = 0;
    s->array = (int *)calloc(n , sizeof(int));
    s->max_size = n;

    return s;
}
int isEmpty(STK s)
{
    return s->size == 0;
}
int top(STK s)
{
    if (isEmpty(s)){
        printf("empty stack error\n");
        exit(1);
    }
    return s->array[s->size - 1];
}
int pop(STK s)
{
    if (isEmpty(s)){
        printf("empty stack error\n");
        exit(1);
    }
    int temp = s->array[s->size - 1];
    s->size--;
    return temp;
}
void push(STK s, int ele)
{
    if (s->size == s->max_size){
        printf("stack is full error\n");
        exit(1);
    }
    s->array[s->size] = ele;
    s->size++;

}