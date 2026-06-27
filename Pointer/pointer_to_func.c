#include <stdio.h>
// main()
// {
//     int x;
//     x=20;
//     change(&x);
//     printf("%d\n",x);
// }
// change(int *p)
// {
//     *p=*p+10;
// }


// void f(int *p,int *q)
// {
//     p=q;
//     *p=2;
// }
// int i=0,j=1;
// int main()
// {
//     f(&i,&j);
//     printf("%d\n%d",i,j);
// }


#include <stdio.h>

void swap(int *a, int *b)
{
    int *t;

    // t = a;
    // a = b;
    // b = t;

    
    t = *a;
    *a = *b;
    *b = t;
}

int main()
{
    int x, y;

    x = 100;
    y = 200;

    printf("Before call : x = %d y = %d\n\n", x, y);

    swap(&x, &y);   /* call */

    printf("After call : x = %d y = %d\n\n", x, y);

    return 0;
}