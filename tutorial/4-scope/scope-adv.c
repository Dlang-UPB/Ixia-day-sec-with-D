#include <stdio.h>

int* gp;

void thorin(int* p)
{
    *p = 10;
}

void gloin(int* p) { gp = p; }

int* balin(int* q, int* r)
{
    gp = q;
    gp = r;

    thorin(q);
    thorin(r);

    gloin(q);
    gloin(r);

    return q;
}

void gun()
{
    int x = 42;
    int y = 70;

    balin(&x, &y);
}

int main()
{
    gun();
    printf("Print some rand values %d %d %d %d %d %d %d %d %d\n", 11, 12, 13, 14, 15, 16, 17, 18, 19);
    printf("Val is %d\n", *gp);

    return 0;
}

