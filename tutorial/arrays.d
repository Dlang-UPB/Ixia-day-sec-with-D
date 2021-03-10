import std.stdio;

void foo(int[] arr)
{
    writefln("value at 10 is %d\n", arr[10]);
}

int main()
{
    int a = 5;
    int[10] b;
    //b[11] = 9;
    foo(b);

    writefln("a has val %d\n", a);

    return 0;
}
