#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef struct node {
    struct node * prev;
    int num;
    struct node * next;
} *NODE;

typedef struct list {
    int size;
    NODE head;
}*LIST;


LIST createNewList();

NODE createNewNode(int value);

void printList(LIST li);

void insertFisrt(NODE n1 , LIST li);

void insertLast(NODE n1 , LIST li);

void insertAfter(int val, int  newVal, LIST li);

void deleteFisrt(LIST li);

void deleteLast(LIST li);

void deleteElement(int val, LIST li);

void deleteEle(int val, LIST li);

void isEmpty(LIST li);

NODE search(LIST li, int value);

#endif