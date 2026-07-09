#include "stack_Arr.h"

int main()
{
    STK s1 = createNewStack(50);

    push(s1, 30);
    push(s1,40);
    push(s1, 60);
    
    printf("the top is %d : \n", top(s1));

    printf("%d  is removed :\n", pop(s1));
    printf("%d  is removed :\n", pop(s1));
    printf("%d  is removed :\n", pop(s1));
    printf("%d  is removed :\n", pop(s1));

    free(s1->array);
    free(s1);
    return 0;
}