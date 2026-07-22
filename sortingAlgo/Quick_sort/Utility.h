#ifndef UTIL_H
#define UTIL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/time.h>

void swap(int Arr[], int lo , int hi );
int *readfile(char *filename);
void write_in_file(int Arr[] , int size, const char *filename);

#endif