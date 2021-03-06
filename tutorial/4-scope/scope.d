import std.stdio;

@safe:

int* gp;

void thorin(scope int* p)
{
    *p = 10;
}

int* balin(scope int* q)
{
    gp = q; // error, q escapes to global gp

    thorin(q); // ok, q does not escape thorin()

    return q; // error, cannot return 'scope' q
}

void gun()
{
    int x = 42;

    balin(&x);
}

int main()
{
    gun();
    writeln(*gp);

    return 0;
}

