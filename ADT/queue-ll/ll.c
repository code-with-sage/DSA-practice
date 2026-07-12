#include "ll.h"

LIST createNewList()
{
    LIST li = malloc(sizeof(struct list));
    li->size = 0;
    li->front = NULL;
    li->rear = NULL;

    return li;
}
NODE createNewNode(int table, int item)
{
    NODE n = malloc(sizeof(struct node));

    if (n == NULL)
    {
        printf("Memory allocation failed\n");
        exit(1);
    }

    n->order = malloc(sizeof(struct order)); //i was forget ot inicialize the order pointer
    n->order->itemNumber = item;
    n->order->tableNum = table;
    n->next = NULL;

    return n;
}
void inserLast(LIST li, NODE n1)
{
    if (li->size == 0)
    {
        li->front = n1;
        li->rear = n1;
        n1->next = NULL;
        li->size++;
        return;
    }
    NODE temp = li->rear;
    temp->next = n1;
    li->rear = n1;
    n1->next = NULL;
    li->size++;
    return;
}
NODE deleteFirst(LIST li)
{
    if (li->front == NULL)
    {
        printf("no node found list is empty \n");
        exit(1);
    }
    NODE temp = li->front;
    li->front = temp->next;
    li->size--;
    return temp;
}
void printList(LIST li)
{
    if (li->size == 0)
    {
        printf("no node found list is empty \n");
        return;
    }
    NODE temp = li->front;

    while (temp != NULL)
    {
        printf("Table %d Item %d\n",
               temp->order->tableNum,
               temp->order->itemNumber);

        temp = temp->next;
    }
}