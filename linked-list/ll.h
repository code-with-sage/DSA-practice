#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Header files .h contain declarations only , function definitions store in seprate .c file 

//ll.h → declarations
//ll.c → implementations

//1. Defineing structure for linked-list nodes 

typedef struct node {
    int ele;
    // NODE next;  this is bad practice we are using typedef before decalreing it 
    struct node* next;
     
}*NODE;

//2. Defining the struct for head of linked list that will contain first node pointer 

//typedef struct linked_list *node --> this is also bad practice we are using typedef for the struct that don;t exist yet 

typedef struct linked_list {
    int count;
    NODE head;

}*LIST;

//3. declaring  required functions for linked list 

LIST createNewList();

NODE createNewNode(int value);

void printList(LIST li);

void insertFisrt(NODE n1 , LIST li);

void insertLast(NODE n1 , LIST li);

void deleteFisrt(LIST li);

void deleteLast(LIST li);

void isEmpty(LIST li);

NODE search(LIST li, int value);





