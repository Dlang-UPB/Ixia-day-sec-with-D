#include <stdio.h>

void foo(int *p)
{
    if (p != NULL) {
        printf("Value is %d\n", *p);
    } else {
        printf("Is null\n");
    }
}

int* getPtr()
{
    int* b;
    return b;
}

int main()
{
    int* b = getPtr();
    foo(b);

    return 0;
}
