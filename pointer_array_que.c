#include <stdio.h>

int main(void) {
    // int a[5] = {2, 4, 6, 8, 22};

    // int *p;

    // p = &(a[1]);

    // printf("%d %d\n", a[0], p[-1]);
    // printf("%d\n", p[0]);
    // printf("%d %d\n", a[0], *(--p));
    // printf("%d\n", p[0]);

    // printf("%d %d\n", a[0], *(p--));
    // printf("%d\n", p[0]);

    // int a1[]={ 1, 2, 4, 8};
    // int *b=a1+2;
    // int *c=b--+1;
    // printf("%d\n",*b);
    // printf("%d\n",*c);

    // printf("%d\n",a1[-1]);

    // return 0;

    // int a[4] = {5, 2, 9, 4};
    // int sum = 0;

    // for (int *p = a; p < a + 4; p++) {
    //     sum += *p;
    // }

    // printf("%d", sum);

    // int x[] = {1, 2, 3, 4};

    // int *p = &x[2];
    // int *q = &x[1];
    // int *r = ++q;

    // printf("%d\n", *(p + 1));
    // printf("%d\n", *(p - 1));
    // printf("%d\n", *q);
    // printf("%d\n", *r);


    int a[7] = {5, 3, 4, 7, 8, 3, 1};

    int *p = a;
    int *q = &(a[6]);   // points to last element

    while (p != q) {
        *q += *p;
        p++;
        q--;
    }
    printf("%d\n",a[0]);
    printf("%d\n",a[1]);
    printf("%d\n",a[2]);
    printf("%d\n",a[3]);
    printf("%d\n",a[4]);
    printf("%d\n",a[5]);
    printf("%d\n",a[6]);
}