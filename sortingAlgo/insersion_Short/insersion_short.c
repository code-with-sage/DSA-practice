#include "insersion_short.h"

void insersion_short(int A[], int size)
{
     if(size>1)
    {
       insersion_short(A, size - 1);
       insert_in_order(A, A[size - 1],  size - 1);
    }
//insert_in_order(A, A[size - 1],  size - 1);  // why we can't keep it outside?/

// It actually works for this implementation because when size == 1,
// insert_in_order(A, A[0], 0) performs no shifts and simply writes A[0] back to itself.
// However, the recursive base case should perform no work.
// Keeping insert_in_order() inside the if makes the algorithm match its recursive definition:
// "If size > 1, first sort the first (size - 1) elements, then insert the last element."
// This avoids an unnecessary function call in the base case and makes the code clearer.
    

}
void insert_in_order(int A[], int key, int last)
{
    int j = last - 1;
    while(j >= 0 && key < A[j])
    {
        A[j + 1] = A[j];
        j--;
    }
    A[j + 1] = key;
}