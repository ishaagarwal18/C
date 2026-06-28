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


// int f(int x, int *py, int **ppz)
// {
//     int y, z;

//     **ppz += 1;
//     z = **ppz;

//     *py += 2;
//     y = *py;

//     x += 3;

//     return x + y + z;
// }

// void main()
// {
//     int c, *b, **a;

//     c = 4;
//     b = &c;
//     a = &b;

//     printf("%d", f(c, b, a));
// }


// void inc_prt(int **h)
// {
//     *h=*h+1;
// }
// int main()
// {int a[3]={50,60,70};
// int *q=a;
// inc_prt(&q);
// printf("%d",*q);}


int main()
{
    int a = 4;
int b = 6;
int c = 9;

int *p = &a;
int *q = p;

p = &b;

a++;

(*q)++;

b = *q * 2;

c = *q + *p;
}