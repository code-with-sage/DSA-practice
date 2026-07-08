#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct student {
      int roll;
      char name[20];
      float cgpa;
      struct student * next;
} *NODE ;

typedef struct Linked_list{
     int count;
     NODE head;
} *C_LIST;

///////////////////////////////////////////////////////////

/////////////////FUNCTIONS////////////////////////////////

///////////////////////////////////////////////////////////

C_LIST createNewList();
NODE createNewNode(int roll, char name[], float gpa);
void isEmpty(C_LIST li);
void printlist(C_LIST li);
void insert(C_LIST li ,NODE n);
void deleteEle(C_LIST li ,int roll);
NODE searchByROll(C_LIST li ,int roll);
NODE searchByName(C_LIST li, char name[]);



