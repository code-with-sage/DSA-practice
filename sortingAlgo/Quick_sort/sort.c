#include "sort.h"


int partition(int Arr[] , int lo , int hi,int pivort_index){
    swap( Arr , pivort_index , hi);
    int pivort_position;
    int lower = lo;
    int higher = hi - 1;
    int pivort = Arr[hi];

    while( lower < higher){
        while ( lower < higher && Arr[lower] <= pivort){
            lower++;
        }
        while( higher > lower && Arr[higher] > pivort){
            higher--;
        }

        if ( lower < higher ){
            swap(Arr , lower , higher);

            lower++;
            higher--;
        }
    }
    if(Arr[higher] > pivort && higher >= lo){
        pivort_position = higher;
    }
    else{
        pivort_position = higher + 1;
    }
    swap(Arr, pivort_position ,hi);

    return pivort_position;
    
}

void quich_sort(int Arr[] , int lo , int hi){

    if (Arr == NULL){
        printf("Array is empty shorting failed");
        return ; 
    }

    if (lo < hi){
        int pIndex = hi;
         pIndex =  partition(Arr , lo , hi, pIndex);

       quich_sort(Arr, lo , pIndex -1);
       quich_sort(Arr , pIndex + 1 , hi);

    }
}