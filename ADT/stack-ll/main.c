#include "stack_List.h"

// declareing the structure of string that will store all stack will be created

typedef struct entry
{
    char name[20];
    STACK ptr;
} stackesEntry;

stackesEntry arr[20]; // inicializing adday of user defined datatype  for storing data
int stackCount = 0;   // it will kewp track of how many entry are in the stack

void addEntry(char *name);   // using void becuse no need to return anyhtig
STACK findStack(char *name); // using stack because need to find stack and return stack pointer

int main()
{
    printf("====================================================\n");
    printf("======   welcme to stack implimetioan program  =====\n");
    printf("====================================================\n\n");

    char userName[20];

    printf("please enter your username: ");

    scanf("%19s", userName);

    getchar(); // when we use scanf in last \n remain it helps to crlear that

    char cmd[100]; // defining the size of inpout possible in command

    printf("please ceate atlest create atlest one buy writeing stack name : ");
    char stkn[10];
    scanf("%9s", stkn);
    getchar();

    addEntry(stkn);
    printf("hello %s if you are new here type man ^ _ ^ \n\n", userName);

    while (1)
    {

        printf("@%s ~~> ", userName);

        // fgets with stdin use to copy the dtring types in command line
        fgets(cmd, sizeof(cmd), stdin);

        // parsing using strtok and storing values

        char *command = strtok(cmd, " \r\n");
        char *stackname = strtok(NULL, " \r\n");
        char *val = strtok(NULL, " \r\n");


        if (strcmp(command, "push") == 0) // strcmp() use to compare 2 tring and if both same it return 0
        {
            STACK s = findStack(stackname); // finding stack

            if (s != NULL)
            {
                printf("Pushing %s\n", val);
                push(s, atoi(val)); // IMPORTANT : check the datatype before passing to fun
                printf("push completed\n");
            }
            else
            {
                printf("Stack not found.\n");
            }
        }
        else if (strcmp(command, "pop") == 0)
        {
            STACK s = findStack(stackname);
            if (s != NULL)
            {
                pop(s); // performing operation if the stack found
            }
            else
            {
                printf("Stack not found.\n");
            }
            printf("removing suceeded: ");
        }
        else if (strcmp(command, "top") == 0)
        {
            STACK s = findStack(stackname);
            if (s != NULL)
            {
               printf("Top = %d\n", top(s));
            }
            else
            {
                printf("Stack not found.\n");
            }
        }
        else if (strcmp(command, "new") == 0)
        {
            addEntry(stackname);
            printf("we created new stack %s", stackname);
        }
        else if (strcmp(command, "man") == 0)
        {
            manual();
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

void addEntry(char *name)
{
    STACK n = createNewStack(name);     // creating stack
    strcpy(arr[stackCount].name, name); // silly mistake srtcpy used for STING COPY PASTE OPERATION
    arr[stackCount].ptr = n;            // silly mistake we alwaawa need to pass array key [n]
    stackCount++;
}

STACK findStack(char *name)
{
    int i;

    for (i = 0; i < stackCount; i++)
    {
        if (strcmp(arr[i].name, name) == 0)
        {
            return arr[i].ptr; // if pointer fount it return the pointer
        }
    }

    return NULL; // if pointer not fount it return NULL
}