import std.stdio;

void foo(int *p)
{
    if (p != null) {
        printf("Value is %d\n", *p);
    } else {
        printf("Is null\n");
    }
}

int* getPtr(int x)
{
    int* b;
    if (x > 10)
        b = &x;
    return b;
}

int main()
{
    int* b = getPtr(1);
    foo(b);

    return 0;
}
