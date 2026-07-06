#include "ll.h" // user define header written in ""

// in this file we will write all implimentation of funtions we have created in header file

LIST createNewList()
{
    LIST newList = malloc(sizeof(struct linked_list));

    newList->count = 0;
    newList->head = NULL;

    // Initially the list contains no nodes,
    // so head points to NULL.
    // It will point to the first node after the first insertion.

    // (*newList).count is equivalent to newList->count
    // The arrow operator is shorthand for dereferencing a structure pointer.

    return newList;
};

NODE createNewNode(int value)
{
    NODE newNode = malloc(sizeof(struct node));

    newNode->ele = value;
    newNode->next = NULL;

    return newNode;
};

void insertFisrt(NODE n1, LIST li)
{
    if (li->head == NULL)
    {
        li->head = n1;
        n1->next = NULL;
    }
    else
    {

        NODE temp = li->head;
        li->head = n1;
        n1->next = temp;
    }
    li->count++;
    return;
};

void insertLast(NODE n1, LIST li)
{
    if (li->head == NULL)
    {
        li->head = n1;
        n1->next = NULL;
    }
    else
    {
        NODE temp = li->head;

        while (temp->next != NULL)
        { // i used temp->next not temp beause we need to stop at last element not NULL
            temp = temp->next;
        }

        temp->next = n1;
        n1->next = NULL;
    }
    li->count++;
    return;
}

// void printList(LIST li)
// {
//     NODE temp = li->head;
//     int count = li->count;
//     for ( int i = 0; i < count ; i++ ){
//         printf("%d ->", temp->ele);
//         temp = temp->next;
//     }
//     return;

// }    althogh this is a valid way of printing elemts of list but we avoid it because it depends on metadata better we use following apraoch to print elements

void printList(LIST li)
{
    NODE temp = li->head;

    printf("[HEAD]-> ");

    while (temp != NULL)
    {
        printf("%d ->", temp->ele);
        temp = temp->next;
    }
    printf("[NULL]\n");

    return;
};

void deleteFisrt(LIST li)
{
    if (li->head == NULL)
    {
        printf("list is eplty no element found to delete");
        return;
    }
    else
    {
        NODE temp = li->head;  // temp storing first node address
        li->head = temp->next; // now head storing address of node after first node = secound node
        li->count--;
        free(temp); // temp storing first node pointer we can still free and and there is no memeory leak
    }
    return;
}

void deleteLast(LIST li)
{
    if (li->head == NULL)
    {
        printf("the list is empty unable to process yoru request ");
        return;
    }
    else
    {
        NODE curr = li->head;
        NODE prev = curr;

        while (curr->next != NULL)
        {
            prev = curr;
            curr = curr->next;
        }
        prev->next = NULL;
        free(curr);
        li->count--;
        
    }

    return;
}
