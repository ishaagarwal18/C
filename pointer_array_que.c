#include <stdio.h>

int main(void) {
    int a[5] = {2, 4, 6, 8, 22};

    int *p;

    p = &(a[1]);

    // printf("%d %d\n", a[0], p[-1]);
    // printf("%d\n", p[0]);
    // printf("%d %d\n", a[0], *(--p));
    // printf("%d\n", p[0]);

    // printf("%d %d\n", a[0], *(p--));
    // printf("%d\n", p[0]);

    int a1={1,2,4,8};
    int *b=a+2;
    int *c=b--+1;
    printf("%d\n",*b);
    printf("%d\n",*c);

    return 0;
}