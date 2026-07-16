#include <sys/time.h>
#include "insersion_short.h"

int main()
{
    FILE * fp = fopen( "unsorted_numbers_50.txt" , "r"); // i forget to add .txt 
    int Arr[50];

    

    for (int i = 0 ; i < 50 ; i++){
        fscanf(fp, "%d" ,&Arr[i]);
    }
    fclose(fp);

       for ( int i = 0 ; i < 50 ; i++){
        printf("%d , ", Arr[i]);
    }

    //lets caculate the time taken by insersion short for shorting different datasets 

    struct timeval stating , ending; 

    gettimeofday(&stating, NULL);

    insersion_short(Arr , 50);

    gettimeofday(&ending , NULL);

    // leats calculate the time taken by insersion short algotithm 

    // time taken = starting + ending 

    //but in programing we measure secounds and microsecunds seprately and add then together 

    //time_taken = secound_difference + microsecound_difference 


    double secounds_diff = (ending.tv_sec - stating.tv_sec ) *1e6 ;//1e6 convers secounds in microsec 

    double microsec_diff = (ending.tv_usec - stating.tv_usec) ; 

    double total_time_taken = secounds_diff + microsec_diff;


    printf("talal time taken to short 50 integers is %lf microseounds and %lf in secounds \n\n" , total_time_taken, total_time_taken * 1e-6);

    for ( int i = 0 ; i < 50 ; i++){
        printf("%d , ", Arr[i]);
    }

    fp = fopen("shorted_50_NUMbers.txt", "w");
    for( int i = 0 ; i < 50 ; i++){
        fprintf(fp, "%d\n", Arr[i]);
    }

    fclose(fp);

    fp = fopen("unsorted_numbers_5000.txt" , "r");

    int size = 5000;

    int * Arr2 = ( int *)malloc(sizeof(int) * size);

    for ( int i = 0; i < size; i++){
        fscanf(fp , "%d" , &Arr2[i]);
    }
    fclose(fp);

    gettimeofday(&stating, NULL );

    insersion_short(Arr2 , size);

    gettimeofday(&ending , NULL );

    double Time_taken = (ending.tv_sec - stating.tv_sec) * 1e6;
    Time_taken = Time_taken + (ending.tv_usec - stating.tv_usec); 

    printf("total time taken to shoritng 5000 elemets is %lf microsecounds %lf in secunds \n\n" , Time_taken, Time_taken * 1e-6);

    fp = fopen("shorted_5000_NUMbers.txt", "w");

    for (int i = 0; i < size; i++){
        fprintf(fp, "%d\n" , Arr2[i]);
    }

    fclose(fp);
    free(Arr2);
    return 0;

}