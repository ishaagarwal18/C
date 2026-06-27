#include <stdio.h>

// int main()
// {
//     int a,b;
//     int c=5;
//     int *p;
//     a=4*(c+5);
//     p=&c;
//     b=4*(*p+5);
//     printf("a=%d\nb=%d",a,b);
//     return 0;
// }

// #define N 6

// main() {
//     int i;
//     int a[N];
//     int *p, *q;

//     p = &a[N-1];
//     q = p - (N-1);

//     for (i = 0; i < N; i++) {
//         *(p-i) = i;
//         *(q+i) = i;
//     }

//     for (i = 0; i < N; i++) {
//         printf("%d ", a[i]);
//     }
// }

#include <stdio.h>

int main()
{
    int a[] = {1,2,3,4,5};
    int *p = a;

    printf("p = %u\n", p);
    printf("p+1 = %u\n", p+1);

    printf("*p = %u\n", *p);
    printf("*(p+1) = %u\n", *(p+1));
}