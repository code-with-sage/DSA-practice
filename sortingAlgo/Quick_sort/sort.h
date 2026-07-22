#ifndef SORT_H
#define SORT_H

#include "Utility.h"

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int partition(int Arr[] , int lo , int hi, int pivort_index);
void quich_sort(int Arr[] , int lo , int hi);



#endif