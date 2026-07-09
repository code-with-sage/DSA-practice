#include "cll.h"

int main()
{

    C_LIST stdDATA = createNewList();
    printf("\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ \n");
    printf("                 welcome to database                     \n");
    printf("/////////////////////////////////////////////////////////\n");



    printf("if you are usig databse first time type man for manual of commads\n");

    char cmnd[10];
    while (1)
    {

        printf("\nplese enter command --~> : ");
        scanf("%9s", cmnd);

        
        if (strcmp(cmnd, "q") == 0)
        {
            printf("thanks for using database:)\n");
            break;
        }
        else if (strcmp(cmnd, "insl") == 0)
        {
            printf("\nHow amny student data you want to insert in the end of list: ");
            int nStd;
            scanf("%d", &nStd);
            for (int i = 1; i <= nStd; i++){
                printf("enter data for student %d : name roll cgpa : ", i );
                int roll;
                char name[20];
                float cgpa;
                scanf("%19s %d %f",name , &roll, &cgpa);
                NODE n = createNewNode(roll, name, cgpa);
                insertlast(stdDATA, n);
            }
        }
        else if (strcmp(cmnd, "emp") == 0)
        {
            isEmpty(stdDATA);
        }
        else if(strcmp(cmnd, "man") == 0)
        {
            printmenu();
        }
        else if((strcmp(cmnd, "prnt") == 0))
        {
            printlist(stdDATA);
        }
        else
        {
            printf("Unknown command\n");
        }
    }

    return 0;
}