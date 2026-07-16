#include "mergeSort.h"




void merge(int A[], int st, int mid, int en)
{
    int temp[en - st + 1];
    int i = st , j = mid+1, k = 0;

    while (i <= mid && j <= en){
        if ( A[i] < A[j]){
            temp[k++] = A[i++]; 
        }
        else{
            temp[k++] = A[j++]; 
        }
    }

    while( i <= mid){
        temp[k++] = A[i++];
    }

    while ( j <= en){
        temp[k++] = A[j++]; 
    }

    for(int i = 0 ; i < en-st +1 ; i++){
        A[st + i] = temp[i];
    }
    
}
void merge_short(int A[], int start, int end)
{
    if ( end - start == 0){
        return ;
    }
    int middle = (start + end) /2;
    merge_short(A , start , middle);
    merge_short(A, middle +1 , end );
    merge(A, start , middle, end);
}
