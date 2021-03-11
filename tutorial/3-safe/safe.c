#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int x;
} S;

int main()
{
    const int NUM_ELEMS = 10;
    S* myStructs = malloc(NUM_ELEMS * sizeof(S));
    int i = 0;

    for (i = 0; i < NUM_ELEMS; ++i)
        myStructs[i].x = i;

    // Get last element
    S* last = myStructs + NUM_ELEMS;
    printf("Value of last elem is %d\n", last->x);

    return 0;
}
