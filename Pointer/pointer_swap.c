// #include <stdio.h>

// void swap(int *x, int *y)
// {
//     static int *temp;

//     temp = x;
//     x = y;
//     y = temp;
// }

// void printab()
// {
//     static int i, a = -3, b = -6;

//     i = 0;

//     while (i <= 4)
//     {
//         if ((i++) % 2 == 1)
//             continue;

//         a = a + i;
//         b = b + i;
//     }

//     swap(&a, &b);

//     printf("a = %d, b = %d\n", a, b);
// }

// int main()
// {
//     printab();
//     printab();
// }


#include <stdio.h>

#define print(x) printf("%d", x)

int x;

void Q(int z)
{
    z += x;
    print(z);
}

void P(int *y)
{
    int x = *y + 2;

    Q(x);

    *y = x - 1;

    print(x);
}

int main(void)
{
    x = 5;

    P(&x);

    print(x);
}