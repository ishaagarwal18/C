#include <stdio.h>

// void r();

// int i = 20;

// int main()
// {
//     int i = 5;

//     printf("%d ", i);
//     r();

//     printf("%d ", i);
//     r();

//     return 0;
// }

// void r()
// {
//     static int j;

//     if (i < 10)
//     {
//         i = 3;
//         printf("%d ", i);
//     }

//     printf("%d ", i + j);

//     i++;
//     j++;
// }


// int f(int n)
// {
//     static int r = 0;
//     if (n <= 0)
//         return 1;
//     if (n > 3)
//     {
//         r = n;
//         return f(n - 2) + 2;
//     }
//     return f(n - 1) + r;
// }
// //answer of f(5)


// void count(int n)
// {
//     static int d = 1;

//     printf("%d", n);
//     printf("%d", d);

//     d++;

//     if (n > 1)
//         count(n - 1);

//     printf("%d", d);
// }
// //3 1 2 2 1 3 4 4 4
// void main()
// {
//     count(3);
// }


void fun1(int n)
{
    if (n == 0) return;

    printf("%d", n);
    fun2(n - 2);
    printf("%d", n);
}
// 
void fun2(int n)
{ 
    if (n == 0) return;

    printf("%d", n);
    fun1(++n); 
    printf("%d", n);
}
//answer of fun1(5)