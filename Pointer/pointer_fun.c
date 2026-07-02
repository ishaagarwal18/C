#include <stdio.h>

// int (*p[5])(); // p is a array of pointer to function 

// int (*x[10])(char *);  //x is an array of 10 pointers to functions that take a char * and return an int.

// int *a[]; //a is a array of pointer 
// int (*a)[]; //a is a pointer of array 
// int* (*a)(); //a is a pointer to a function returning a pointer to int 
// // int* ((a1())[])();// decalartion is invalid (error)
// int (*(*a())[])(); // a is a function returnig a pointer to an array of pointer to function returning int 
// int* (*(*a[])())[];// a is a array of pointer returning a pointer to a to an array of pointer to int 

// char *(*(*x)[10])();// x is a pointer to an array of 10 pointer and returning a pointer to int


// int main()
// {
//     char a[3] = {'p', 'q', 'r'};
//     char b[3] = {'s', 't', 'u'};
//     char c[3] = {'w', 'x', 'z'};

//     char *d[3] = {a, b, c};

//     char *e = d[1];
//     char *f = e + 2;
//     char g = *f;

//     printf("%c\n", g);
// }

int main()
{
    int x[6] = {11, 12, 13, 14, 15, 16};
    int y[2] = {21, 22};

    int *z[2] = {x, y};

    int *w = z[0] + 3;
    int a = *w;

    printf("%d", a);
}