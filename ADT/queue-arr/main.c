#include "queue.h"

int main()
{

    printf("====================================================\n");
    printf("======   welcme to ticket booking system (tts) =====\n");
    printf("====================================================\n\n");

    QUEUE bookingReq = createNewQueue();

    printf("please enter man for understankding workings of this program\n\n");

    char command[30];

    while (1)
    {
        printf("please enter a cammand ~~> ");

        fgets(command, sizeof(command), stdin);

        if (command == NULL)
            continue;

        char *cmd = strtok(command, " \n");
        char *val = strtok(NULL, "\n");

        if (strcmp(cmd, "exit") == 0)
        {
            printf("thanks for using tts\n");
            return 0;
        }
        else if (strcmp(cmd, "next") == 0)
        {
            USER temp = dequeue(bookingReq);
            printf("%s : \n", temp.name);
            printf("%s : \n", temp.bookingTime);
        }
        else if (strcmp(cmd, "book") == 0)
        {
            if (val == NULL)
            {
                printf("Usage : book <username> \n");
                continue;
            }
            enqueue(bookingReq, val);
        }
        else if (strcmp(cmd, "size") == 0)
        {
            printf("Users Waiting : %d\n", size(bookingReq)); // silly mistake i was forgot to including printf hehe
        }
        else if (strcmp(cmd, "isempty") == 0)
        {
            if (isEmpty(bookingReq))
                printf("Queue is Empty\n");
            else
                printf("Queue is Not Empty\n");
        }
        else if (strcmp(cmd, "man") == 0)
        {

            printf("DESCRIPTION\n");
            printf("-----------\n");
            printf("This program simulates a simple railway ticket\n");
            printf("booking system using a Queue (FIFO).\n\n");

            printf("COMMANDS\n");
            printf("--------\n");
            printf("book <username>   Add a booking request.\n");
            printf("next              Process the next booking.\n");
            printf("size              Display total waiting users.\n");
            printf("isempty           Check whether queue is empty.\n");
            printf("man               Display this manual.\n");
            printf("exit              Exit the program.\n\n");
        }
        else
        {
            printf("wring request please type man to see format \n");
        }
    }
    return 0;
}