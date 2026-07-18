#include "readfile.h"

int *read_intFile_by_filename(char *filename, int size)
{
    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return NULL; // Error opening file
    }

    int *arr = (int *)malloc(size * sizeof(int));
    if (arr == NULL) {
        printf("Error: Could not allocate memory for array\n");
        fclose(fp);
        return NULL; // Error allocating memory
    }

    int i = 0;

    while ( fscanf(fp, "%d", &arr[i]) != EOF) {
        i++;
    }

    printf("Read %d integers from file %s\n", i, filename);
    fclose(fp);
    return arr;
}