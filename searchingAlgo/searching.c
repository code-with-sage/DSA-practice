#include "searching.h"

int iter_linearSearchINT(int arr[], int n, int key)
{
    if (n <= 0)
    {
        printf("Error: Array size must be greater than 0.\n");
        return -1; // Key not found
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i; // Key found at index i
        }
    }
    printf("Key not found in the array.\n");
    return -1; // Key not found
}
int rec_linearSearchINT(int arr[], int n, int key)
{
    if (n <= 0)
    {
        printf("Error: Array size must be greater than 0.\n");
        return -1; // Key not found
    }
    if (arr[n - 1] == key)
    {
        return n - 1; // Key found at index n-1
    }
    return rec_linearSearchINT(arr, n - 1, key); // Recursive call with reduced size
}
int iter_binarySearchINT(int arr[], int n, int key)
{
    if (n <= 0)
    {
        printf("Error: size of array must be greater than 0. \n");
        return -1;
    }
    int low = 0, high = n - 1;

    while (low <= high)
    {

        int mid = (high + low) / 2;

        if (key == arr[mid])
        {
            return mid;
        }
        else if (key < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    printf("element not found \n");

    return -1; // elemt not found
}
int rec_binarySearchINT(int arr[], int n, int key)
{
    if (n <= 0)
    {
        printf("Error: size of array must be greater than 0. \n");
        return -1;
    }

    int low = 0, high = n - 1;
    if (low > high)
    {
        return -1;
    }

    int mid = (low + high) / 2;

    if (arr[mid] == key)
    {
        return mid;
    }
    else if (key < arr[mid])
    {
        return rec_binarySearchINT(arr, mid, key);
    }
    else
    {
        int rec = rec_binarySearchINT(arr + mid + 1, n - mid - 1, key);

        //the we are simply using pointer arithmatic here Ar + mid + 1 will make the array start form 4th potion 
        // n - mid - 1 we are reducing the size of array becuse we move the pointer to the right by mid + 1 

        if (rec != -1)
        {
            return rec + mid + 1;

            //lastly we are returning the actual arr index by adding the value how much we was reduce via pointer arithmatics 
        }
    }
}