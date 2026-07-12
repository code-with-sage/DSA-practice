#include "ll.h"

typedef struct queue
{
    LIST ll;
} * QUE;

QUE createnewQue();
void giveOrded(QUE q, int table, int item);
void ServeOrded(QUE q);
int totalOrder(QUE q);
void printTotalOrder(QUE q);
int isEmpty(QUE q);