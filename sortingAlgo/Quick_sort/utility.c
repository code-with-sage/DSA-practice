#include "Utility.h"

void swap(int Arr[], int lo, int hi)
{
    int *temp = Arr[lo];
    Arr[lo] = Arr[hi];
    Arr[hi] = temp;
}
int readfile(char *filename)
{
    FILE *fp = fopen(filename, "r");

    if(fp == NULL){
        return -1;
    }
    int n;
    fscanf(fp , "%d", &n);

    int *Arr = malloc(sizeof(int) * n);

    int i = 0;

    while ( fscanf(fp , "%d", Arr[i]) == EOF){
        i++;

    }

    return Arr;

}