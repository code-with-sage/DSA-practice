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
    fclose(fp);

    return Arr;

}

void write_in_file(int Arr[], int size, const char *filename)
{
    FILE *fp = fopen(filename, "w");

    if (fp == NULL)
    {
        return;
    }

    for (int i = 0; i < size; i++)
    {
        fprintf(fp, "%d\n", Arr[i]);
    }

    fclose(fp);
}