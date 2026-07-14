#include <sys/time.h>
#include "insersion_short.h"

int main()
{
    FILE * fp = fopen( "unsorted_numbers_50" , "r");
    int Arr[50];

    for (int i = 0 ; i < 50 ; i++){
        fscanf(fp, "%d" ,Arr[i]);
    }
    fclose(fp);

    //lets caculate the time taken by insersion short for shorting different datasets 

    struct timeval stating , ending; 



}