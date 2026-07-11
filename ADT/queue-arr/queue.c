#include "queue.h"
#define N 20

QUEUE createNewQueue()
{
    QUEUE list = (struct queue *)malloc(sizeof(struct queue));

    list->n = 0;
    list->f = 0;
    list->r = 0;
    list->Q = (struct data *)malloc(sizeof(struct data) * N);
    return list;
}
int size(QUEUE A)
{
    return A->n;
}
int isEmpty(QUEUE A)
{
    return A->n == 0;
}
void enqueue(QUEUE A, char name[])
{
    if (A->n == (N - 1))
    {
        printf("queue is full no more users \n");
        return;
    }
    strcpy(A->Q[A->r].name, name);
    time_t now = time(NULL);
    struct tm *gm_time = gmtime(&now);
    strftime(A->Q[A->r].bookingTime, 30, "%x ,%X", gm_time);
    A->r = (A->r + 1) % N;
    A->n++;
    return;
}
USER dequeue(QUEUE A)
{
    if (A->n == 0)
    {
        printf("Queue is empty\n");
        exit(1);
    }
    USER temp = A->Q[A->f];
    A->f = (A->f + 1) % N;
    A->n--;
    return temp;
}
