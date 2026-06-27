#include <stdio.h>

int main()
{
    char c[]="Hello";
    char *t="Hello";
    c[0]="t";//this is correct
    t[0]="g";//this is not correct
}