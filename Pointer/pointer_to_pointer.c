#include <stdio.h>

// int main()
// {
//     int x,*p1,**p2;
//     x=100;
//     p1=&x;
//     p2=&p1;
//     printf("%d\n",**p2);
// }

// int main()
// {
//     int x,y,*p1,**p2;
//     x=100;
//     y=200;
//     p1=&x;
//     p2=&p1;
//     printf("%d\n",**p2);

//     *p2=&y;
//     printf("%d\n",**p2);
// }


int f(int x, int *py, int **ppz)
{
    int y, z;

    **ppz += 1;
    z = **ppz;

    *py += 2;
    y = *py;

    x += 3;

    return x + y + z;
}

void main()
{
    int c, *b, **a;

    c = 4;
    b = &c;
    a = &b;

    printf("%d", f(c, b, a));
}