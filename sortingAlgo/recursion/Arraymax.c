#include <stdio.h>


int ArrMax( int array[], int s);

int main(){
    int arr[10] = {2,5,4,3,1,8,9,0,6,4};
    int size = 10;

    printf("the max of the given array is %d", ArrMax(arr, size));

    return 0;

}

int ArrMax( int array[], int s){
    if (s == 1){
        return array[0];
    }

    int max = ArrMax(array, s-1);
    if ( max > array[s-1]){
       return max;
    }
    else{
        return array[s-1];
    }
}