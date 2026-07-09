#include "cll.h"

int main()
{
    printf("\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ \n");
    printf("                 welcome to database                     \n");
    printf("/////////////////////////////////////////////////////////\n");

    C_LIST stdData =  createNewList();

    NODE n1 = createNewNode(101 , "sidhart", 4.55);

    printf("how many student data you want to store?:");
    int sNum;  
    scanf("%d", &sNum);

    for (int i = 1; i <= sNum; i++){
        printf("ender data for studnet %d roll name cgpa", i );
        int roll ;
        char name[20] ;
        float cgpa ;
        scanf("%d %19s %f", &roll, name ,&cgpa );
        NODE n =createNewNode(roll, name , cgpa);
        insertlast(stdData, n);
        printf("\n");
    }

    isEmpty(stdData);

   
    insertlast(stdData ,n1);

    isEmpty(stdData);

    printlist(stdData);


    return 0;

}