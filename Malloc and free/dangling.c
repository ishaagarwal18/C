// A dangling pointer points to memory that has already been freed.

char *func()
{
    char str[10]={'h','e','l','l','o'};
    return str;
}
int main()
{
    char *c;
    c=func();
}
