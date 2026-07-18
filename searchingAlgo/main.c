#include "searching.h"
#include "readfile.h"
#include <sys/time.h>

int main()
{

    FILE *fp = fopen("output.csv", "a");

    char cmd[100];
    while (1)
    {

        printf("Enter command (search <filename> <key> or exit): ");
        fgets(cmd, sizeof(cmd), stdin);

        char *command = strtok(cmd, " \n");
        char *filename = strtok(NULL, " \n");
        char *size = strtok(NULL, " \n");
        int n = atoi(size);
        char *key_str = strtok(NULL, " \n");
        int key = atoi(key_str);

        if (strcmp(command, "exit") == 0)
        {
            break;
        }
        else if (strcmp(command, "search") == 0)
        {
            if (filename == NULL || key_str == NULL)
            {
                printf("Error: Missing filename or key\n");
                continue;
            }

            int *arr = read_intFile_by_filename(filename, n);
            if (arr == NULL)
            {
                printf("Error: Could not read integers from file %s\n", filename);
                continue; // Error reading file
            }
            struct timeval start, end;
            
            gettimeofday(&start, NULL);
            int iter_result = iter_linearSearchINT(arr + 1, n, key); // Skip the first element
            gettimeofday(&end, NULL);
            long iter_linear_time = (end.tv_sec - start.tv_sec) * 1000000 + (end.tv_usec - start.tv_usec);

            gettimeofday(&start, NULL);
            int rec_result = rec_linearSearchINT(arr + 1, n, key); //
            gettimeofday(&end, NULL);
            long rec_linear_time = (end.tv_sec - start.tv_sec) * 1000000 + (end.tv_usec - start.tv_usec);

            gettimeofday(&start, NULL);
            int iter_binary_result = iter_binarySearchINT(arr + 1, n, key);
            gettimeofday(&end, NULL);
            long iter_binary_time = (end.tv_sec - start.tv_sec) * 1000000 + (end.tv_usec - start.tv_usec);

            gettimeofday(&start, NULL);
            int rec_binary_result = rec_binarySearchINT(arr + 1, n, key);
            gettimeofday(&end, NULL);
            long rec_binary_time = (end.tv_sec - start.tv_sec) * 1000000 + (end.tv_usec - start.tv_usec);

            printf("Iterative Linear Search: %d, Time: %ld microseconds\n", iter_result, iter_linear_time);
            printf("Recursive Linear Search: %d, Time: %ld microseconds\n", rec_result, rec_linear_time);
            printf("Iterative Binary Search: %d, Time: %ld microseconds\n", iter_binary_result, iter_binary_time);
            printf("Recursive Binary Search: %d, Time: %ld microseconds\n", rec_binary_result, rec_binary_time);

            fprintf(fp, "%s,%d,%d,%ld,%d,%ld,%d,%ld,%d,%ld\n", filename, key, iter_result, iter_linear_time, rec_result, rec_linear_time, iter_binary_result, iter_binary_time, rec_binary_result, rec_binary_time);

            free(arr);
        }
        else
        {
            printf("Error: Unknown command %s\n", command);
        }
    }

    fclose(fp);
    return 0;
}