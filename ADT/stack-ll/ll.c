#include "ll.h"

LIST createNewList()
{
    LIST li = (struct Linked_list *)malloc(sizeof(struct Linked_list));

    li->size = 0;
    li->head = NULL;

    return li;
}

NODE createNewNode(int value)
{
    NODE n = (struct node*)malloc(sizeof(struct node));

    n->ele = value;
    n->next = NULL;

    return n;
}

void insertFisrt(NODE n1, LIST li)
{
    NODE temp = li->head;
    li->head = n1;
    n1->next = temp;
    li->size++;

    return;
}

int deleteFisrt(LIST li)
{
    if(isListEmpty(li)){                             //silly mistake i write isEMpty instead of isEmpry(li)
        printf("no element in list \n");
        return 1;
    }
    NODE temp = li->head;
    int val = temp->ele;
    li->head = temp->next;
    li->size--;
    free(temp);
    return val;

}

int isListEmpty(LIST li)
{
    return li->size == 0;
}

void printList(LIST li)
{
    if(isListEmpty(li)){
        printf("there is no element in list\n ");
        return;
    }
    NODE temp = li->head;
    while(temp != NULL){
        printf("%d  ", temp->ele);
        temp = temp->next;
    }

    return;
}