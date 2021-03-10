#include <stdio.h>

void foo(int arr[])
{
    printf("value at 10 is %d\n", arr[10]);
}

int main()
{
    int a = 5;
    int b[10];
    //b[-1] = 9;
    foo(b);

    printf("a has val %d\n", a);

    return 0;
}
