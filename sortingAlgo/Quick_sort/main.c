#include "Utility.h"
#include "sort.h"

#include <sys/time.h>

int main(){

    int *Arr = readfile("input/rev_sorted_1k.txt");
    printf("the file readed sucessfully\n");
    quich_sort(Arr, 0 , 999);
    printf("file sorterd sucessfully \n");
    write_in_file(Arr , 1000 , "output/sorted_1kRs_num.txt");
    printf("the file written  sucessfully\n");

}