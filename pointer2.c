#include <stdio.h>

// int main()
// {
//     int x, y;
//     int *ptr;

//     x = 10;
//     ptr = &x;
//     y = *ptr;

//     printf("Value of x is %d\n\n", x);

//     printf("%d is stored at addr %u\n", x, &x);
//     printf("%d is stored at addr %u\n", *&x, &x);
//     printf("%d is stored at addr %u\n", *ptr, ptr);
//     printf("%d is stored at addr %u\n", ptr, &ptr);
//     printf("%d is stored at addr %u\n", y, &y);

//     *ptr = 25;

//     printf("\nNow x = %d\n", x);

//     return 0;
// }

int main()
{
    // int a[5]={2,4,5,6,7};
    // int *p;
    // p=&(a[1]);
    // printf("%d %d\n",a[0],p[-1]);
    // printf("%d\n",p[0]);
    // printf("%d %d\n",a[0],*(--p));
    // printf("%d\n",p[0]);

    // int a[] = {1,10,20}, *p = a, i = 1, j = 2;

    // for (i = 0, p = a; i < 2; i++) {
    //     int j = *p;
    //     p++;
    //     *p = *p + j;
    // }

    // printf("out: i=%d j=%d a=%d,%d,%d\n", i, j, a[0], a[1], a[2]);

    int a[4] = {5, 2, 9, 4};
    int sum = 0;

    for (int *p = a; p < a + 4; p++) {
        sum += *p;
    }

    printf("%d", sum);

}