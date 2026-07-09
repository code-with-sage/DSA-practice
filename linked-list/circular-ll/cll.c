#include "cll.h"

C_LIST createNewList()
{

    C_LIST mylist = malloc(sizeof(struct Linked_list));

    mylist->count = 0;
    mylist->head = NULL;
    return mylist;
}
NODE createNewNode(int roll, char name[], float gpa)
{
    NODE n = malloc(sizeof(struct student));
    n->roll = roll;
    strcpy(n->name, name);
    n->cgpa = gpa;
    return n;
}
void isEmpty(C_LIST li)
{

    if (li->head == NULL && li->count == 0)
    {
        printf("list is empty\n");
        return ;
    }
    printf("list have elements\n");
    return ;
}
void printlist(C_LIST li)
{
    if(li->head == NULL){
        printf("list is empty can not print\n ");
        return;
    }
    NODE temp = li->head;
    int count = 1;   
    do{
        printf("the student %d name: %s , roll: %d, cgpa : %.2f \n ",count, temp->name, temp->roll, temp->cgpa );
        count++;
        temp = temp->next;
    }while (temp != li->head);
    return;

}
void insertlast(C_LIST li, NODE n)
{
    if (li->head == NULL)
    {
        li->head = n;
        n->next = n;
        li->count++;
        return;
    }
    NODE temp = li->head;
    while (temp->next != li->head)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next = li->head;
    li->count++;
    return;
}
void deleteEle(C_LIST li, int roll)
{
}
NODE searchByROll(C_LIST li, int roll)
{
}
NODE searchByName(C_LIST li, char name[])
{
}
