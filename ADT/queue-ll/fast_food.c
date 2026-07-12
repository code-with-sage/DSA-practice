#include "fast_food.h"

QUE createnewQue()
{
    QUE Q1 = malloc(sizeof(struct queue));

    Q1->ll = createNewList();
    return Q1;
}
void giveOrded(QUE q, int table, int item)
{
    NODE n1 = createNewNode(table, item);
    inserLast(q->ll, n1);
    printf("order placed suxessfully\n");
}
void ServeOrded(QUE q)
{
    NODE temp = deleteFirst(q->ll);

    printf("Serving Table %d Item %d\n",
           temp->order->tableNum,
           temp->order->itemNumber);

    free(temp);
}
int totalOrder(QUE q)
{
    return q->ll->size;
}
void printTotalOrder(QUE q)
{
    printList(q->ll);
}
int isEmpty(QUE q){
    return q->ll->size == 0;
}