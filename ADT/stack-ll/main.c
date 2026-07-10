#include "stack_List.h"
#include <stdlib.h>
#include <stdio.h>

int main()
{
    printf("====================================================\n");
    printf("======   welcme to stack implimetioan program  =====\n");
    printf("====================================================\n\n");

    char name[20];

    printf("please enter your nickname: ");

    scanf("%19s", name);

    getchar();

    printf("hello %s if you are new here type man ^ _ ^ :\n\n", name);

    char cmd[100];

    printf("please ceate atlest one stack : ");
    char stkn[10];
    scanf("%9s", stkn);
    getchar();
    createNewStack(stkn);

    while (1)
    {

        printf("write your comman ~~> ");
        fgets(cmd, sizeof(cmd), stdin);

        char *command = strtok(cmd, " ");
        char *stackname = strtok(NULL, " ");
        char *val = strtok(NULL, "\n");

        if (strcmp(command, "push") == 0)
        {
            if (stackname == NULL || val == NULL)
            {
                printf("Usage: push <stack> <value>\n");
                continue;
            }
            int value = atoi(val);
            push(stackname, value);
        }
        else if (strcmp(command, "pop") == 0)
        {
            pop(stackname);
        }
        else if (strcmp(command, "top") == 0)
        {
            top(stackname);
        }
        else if (strcmp(command, "new") == 0)
        {
            createNewStack(stackname);
        }
        else if (strcmp(command, "exit") == 0)
        {
            break;
        }
        else
        {
            printf("Unknown command\n");
        }
    }
}