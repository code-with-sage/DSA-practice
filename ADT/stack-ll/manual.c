#include "ll.h"

void manual(){
    printf("\n");
    printf("=============================================================\n");
    printf("                 STACK MANUAL (Version 1.0)\n");
    printf("=============================================================\n");
    printf("\n");
    printf("GENERAL FORMAT:\n");
    printf("  <command> <stack_name> <value>\n");
    printf("\n");

    printf("AVAILABLE COMMANDS\n");
    printf("-------------------------------------------------------------\n");
    printf("new  <stack>           Create a new stack\n");
    printf("push <stack> <value>   Push value into stack\n");
    printf("pop  <stack>           Remove top element\n");
    printf("top  <stack>           Display top element\n");
    printf("exit                   Exit the program\n");
    printf("man                    Display this manual\n");
    printf("\n");

    printf("EXAMPLES\n");
    printf("-------------------------------------------------------------\n");
    printf("new s1\n");
    printf("push s1 10\n");
    printf("push s1 25\n");
    printf("top s1\n");
    printf("pop s1\n");
    printf("exit\n");
    printf("\n");

    printf("NOTES\n");
    printf("-------------------------------------------------------------\n");
    printf("- Stack names are case-sensitive.\n");
    printf("- Create a stack before using push/pop/top.\n");
    printf("- Maximum number of stacks: 20.\n");
    printf("- Values must be integers.\n");
    printf("\n");
}
