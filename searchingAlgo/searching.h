#ifndef SERCHING_H
#define SERCHING_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/time.h>

int iter_linearSearchINT(int arr[], int n, int key);
int rec_linearSearchINT(int arr[], int n, int key);
int iter_binarySearchINT(int arr[], int n, int key);
int rec_binarySearchINT(int arr[], int n, int key);

#endif 