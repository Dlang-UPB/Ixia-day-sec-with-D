import std.stdio;

void foo(int *p)
{
    if (p != null) {
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
