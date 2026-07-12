#include "fast_food.h"

int main()
{
    printf("welcome to fast food restorent ");

    QUE q = createnewQue();


    char command[50];

    while (1)
    {
        printf("enter your command ~~> ");
        fgets(command, sizeof(command), stdin);

        char *cmd = strtok(command, " \n");
        char *cmd2 = strtok(NULL, " \n");
        char *itemNUMB = strtok(NULL, "\n");

        if (strcmp(cmd, "exit") == 0)
        {
            printf("thank you \n visit again  \n");
            return 0;
        }
        else if (strcmp(cmd, "man") == 0)
        {
            printf(
                "================ FAST FOOD RESTAURANT ================\n"
                "\n"
                "COMMANDS\n"
                "\n"
                "order <table_number> <item_number>\n"
                "    Place a new order.\n"
                "\n"
                "orders <filename>\n"
                "    Read multiple orders from a file.\n"
                "\n"
                "serve\n"
                "    Serve the oldest pending order.\n"
                "\n"
                "printorder\n"
                "    Display all pending orders.\n"
                "\n"
                "total\n"
                "    Display total pending orders.\n"
                "\n"
                "man\n"
                "    Display this manual.\n"
                "\n"
                "exit\n"
                "    Exit the application.\n"
                "\n"
                "Queue Policy : FIFO (First In First Out)\n"
                "=====================================================\n");
        }
        else if (strcmp(cmd, "order") == 0)
        {
            int item = atoi(itemNUMB);
            int table = atoi(cmd2);
            giveOrded(q, table, item);
        }
        else if (strcmp(cmd, "orders") == 0)
        {
            FILE *fp = fopen(cmd2, "r");

            if (fp == NULL)
            {
                printf("Cannot open file.\n");
            }
            char buff[50];
            while (fgets(buff, sizeof(buff), fp)!= NULL) //fgets return NULL 
            {

                char *comd = strtok(buff, " \n");
                char *cmnd2 = strtok(NULL, " \n");
                int fptable = atoi(cmnd2);
                char *cmnd3 = strtok(NULL, " \n");
                int fpitem = atoi(cmnd3);

                giveOrded(q, fptable, fpitem);
            }
            printf("all items order sucessfully ");

            fclose(fp);
        }
        else if (strcmp(cmd, "serve") == 0)
        {
            if (isEmpty(q))
            {
                printf("list is empty can not print anything");
            }
            ServeOrded(q);
        }
        else if (strcmp(cmd, "total") == 0)
        {
            totalOrder(q);
        }
        else if (strcmp(cmd, "printorder") == 0)
        {
            printTotalOrder(q);
        }
        else
        {
            printf("wrong command please try agian \n");
        }

      
    }
    return 0;
}