#ifndef QUEUE_H
#define QUEUE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


typedef struct data{
    char name[20];
    char bookingTime[30];
}USER;

typedef struct queue {
    int f;
    int r;
    int n;
    USER *Q;

}*QUEUE;



//funtions of queue 

QUEUE createNewQueue();
int size(QUEUE A);
int isEmpty(QUEUE A);
void enqueue(QUEUE A, char name[]);
USER dequeue(QUEUE A);

#endif 