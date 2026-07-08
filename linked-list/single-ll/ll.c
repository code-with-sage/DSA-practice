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

// from here i am writing my own funtions implimentatios

void isEmpty(LIST li)
{
    if (li->head == NULL && li->count == 0)
    {
        printf("list is empty");
        return;
    }
    else
    {
        printf("this list contasin %d nodes\n", li->count);
    }
}

NODE search(LIST li, int value)
{

    if (li->head == NULL)
    {
        printf("the list emptuy seraching is not possible\n");
        return NULL;
        ;
    }
    else
    {
        NODE temp = li->head;
        int count = 1;

        while (temp != NULL)
        {
            if (temp->ele == value)
            {
                printf("yipee we fount your vaue at %d node of list\n", count);
                return temp;
            }
            else
            {
                temp = temp->next;
                count++;
            }
        }
        return NULL;
    }
}

void insertAfter(int val, int newVal, LIST li)
{
    if (li->head == NULL)
    {
        printf("list is empty ");
        return;
    }
    else
    {
        NODE temp = li->head;
        int incialCount = li->count;
        NODE n = createNewNode(newVal);
        while (temp != NULL)
        { // i made silly mistake again i was wrote == insted of != hahaha :)
            if (temp->ele == val)
            {
                n->next = temp->next;
                temp->next = n;
                li->count++;
                printf("node the update sucessful\n");
                return;
            }
            else
            {
                temp = temp->next;
            }
        }

        printf("we fialed ot find the element your given node value \n failed to update the list\n");
    }
    return;
}

void deleteElement(int val, LIST li)
{
    if (li->head == NULL)
    {
        printf("the list is empty cant delete from here\n");
        return;
    }
    else
    {
        NODE temp = li->head;
        NODE prev = temp;
        while (temp != NULL)
        {
            if (temp->ele == val)
            {

                if (prev->next == NULL)
                {
                    li->head = NULL;
                    free(temp);
                    li->count--;
                    return;
                }
                else if (prev->next == temp->next)
                {
                    li->head = temp->next;
                    free(temp);
                    li->count--;
                    return;
                }
                else
                {
                    if (temp->next == NULL)
                    {
                        prev->next = NULL;
                        li->count--;
                        free(temp);
                        return;
                    }
                    else
                    {
                        prev->next = temp->next;
                        li->count--;
                        free(temp);
                        return;
                    }
                }
            }
            else
            {
                prev = temp;

                temp = temp->next;
            }
        }

        printf("value not found");
        return;
    }
}

void deleteEle(int val, LIST li)
{
    if (li->head == NULL)
    {
        printf("list is empty");
        return;
    }

    NODE temp = li->head;
    NODE prev = NULL; // incially for the first iteration previus value will remain null

    while (temp != NULL)
    {
        if (temp->ele == val)
        {
            if (prev == NULL) // here we can takele both edge caed 1. when we need to chacge fi there is only one ele 2. when we need to change the first element
            {
                li->head = temp->next;
            }
            else
            {
                prev->next = temp->next;
            }

            printf("the deletation is sucessfull\n");
            li->count--;
            free(temp);
            return;
        }
        else
        {
            prev = temp;
            temp = temp->next;
        }
    }
    printf("the value uyou passed  not founnd");

    return;
}
