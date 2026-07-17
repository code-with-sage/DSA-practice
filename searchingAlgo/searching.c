#include "searching.h"

int iter_linearSearchINT(int arr[], int n, int key)
{
    if ( n <= 0) {
        printf("Error: Array size must be greater than 0.\n");
        return -1; // Key not found
    }
    for ( int i = 0 ; i < n ; i ++) {
        if ( arr[i] == key) {
            return i; // Key found at index i
        }
    }
    printf("Key not found in the array.\n");
    return -1; // Key not found
}
int rec_linearSearchINT(int arr[], int n, int key)
{
    if ( n <= 0) {
        printf("Error: Array size must be greater than 0.\n");
        return -1; // Key not found
    }
    if ( arr[n - 1] == key) {
        return n - 1; // Key found at index n-1
    }
    return rec_linearSearchINT(arr, n - 1, key); // Recursive call with reduced size

}
int iter_binarySearchINT(int arr[], int n, int key)
{
    if( n <= 0){
        printf("Error: size of array must be greater than 0. \n");
        return -1;
    }
    int low = 0, high = n -1;
    int mid = (high + low)/2;

    if(key == arr[mid]){
        return mid;
    }
    else if(key > arr[mid]){
        
    } 
}
int rec_binarySearchINT(int arr[], int n, int key)
{
}