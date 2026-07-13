#include "dll.h"

LIST createNewList()
{
    LIST li = malloc(sizeof(struct list));
    li->size = 0;
    li->head = NULL; 

    return li;
}

NODE createNewNode(int value)
{
    NODE n1 = malloc(sizeof(struct node));
    n1->next = NULL;
    n1->prev = NULL;
    n1->num = value;

    return n1;
}

void insertFisrt(NODE n1, LIST li)
{
    if( li->head == NULL){
    li->head = n1;
    n1->prev = NULL;
    n1->next = NULL;
    li->size++;
    return;
    }
    NODE temp = li->head;

    temp->prev = n1;
    li->head = n1;
    n1->next = temp;
    li->size++;

    return;

}

void insertLast(NODE n1, LIST li)
{
    if( li->head == NULL){
    li->head = n1;
    n1->prev = NULL;
    n1->next = NULL;
    li->size++;
    return;
    }
    NODE temp = li->head;



}

void insertAfter(int val, int newVal, LIST li)
{
}

void deleteFisrt(LIST li)
{
}

void deleteLast(LIST li)
{
}

void deleteElement(int val, LIST li)
{
}

void deleteEle(int val, LIST li)
{
}

void isEmpty(LIST li)
{
}

NODE search(LIST li, int value)
{
}

void printList(LIST li)
{
    
}