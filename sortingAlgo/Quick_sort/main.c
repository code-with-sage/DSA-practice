#include "Utility.h"
#include "sort.h"

#include <sys/time.h>

int main(){

    int *Arr = readfile("input/rand_1M.txt");
    printf("the file readed sucessfully\n");
    quich_sort(Arr, 0 , 999);
    printf("file sorterd sucessfully \n");
    write_in_file(Arr , 1000000 , "output/sorted_1M_num.txt");
    printf("the file written  sucessfully\n");

}