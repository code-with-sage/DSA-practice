#include "ll.h"

int main(){

    LIST mylist = createNewList(); // we are storing head and count values in mylist pointer; 

    // creating few nodes

    NODE n1 = createNewNode(10);
    NODE n2 = createNewNode(20);
    NODE n3 = createNewNode(30);
    NODE n4 = createNewNode(40);
    NODE n5 = createNewNode(50);
    NODE n6 = createNewNode(60);
    NODE n7 = createNewNode(70);
    NODE n8 = createNewNode(80);
    NODE n9 = createNewNode(90);
    NODE n10 = createNewNode(100);

    // insering each node at starting of list 

    insertFisrt(n1 , mylist);
    insertFisrt(n2 , mylist);
    insertFisrt(n3 , mylist);
    insertFisrt(n4 , mylist);
    insertFisrt(n5 , mylist);
    insertFisrt(n6 , mylist);
    insertFisrt(n7 , mylist);
    insertFisrt(n8 , mylist);
    insertFisrt(n9 , mylist);
    insertFisrt(n10 , mylist);
    
    printList(mylist);

    NODE n11 = createNewNode(110);

    insertLast(n11 , mylist);

    printList(mylist);

    deleteFisrt(mylist);
    printList(mylist);

    deleteLast(mylist);
    printList(mylist);

    return 1;



}