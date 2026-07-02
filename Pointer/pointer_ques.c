#include <stdio.h>

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

// int main()
// {
//     int x[6] = {11, 12, 13, 14, 15, 16};
//     int y[2] = {21, 22};

//     int *z[2] = {x, y};

//     int *w = z[0] + 3;
//     int a = *w;

//     printf("%d", a);
// }


// void swap(int **x, int i, int j)
// {
//     int *temp;
//     temp = x[i];
//     x[i] = x[j];
//     x[j] = temp;
// }

// int main()
// {
//     int a[6] = {1, 2, 3};
//     int (*p)[6] = &a;
//     int *arr[3] = {a, a+2, a+4};

//     p[0][2]  = 5;

//     swap(arr, 1, 2);

//     printf("%d\n", *arr[2]);

//     return 0;
// }


#include <stdio.h>

int main(void)
{
    int a = 15;
    int b = 12;

    int *p = &a;
    int *q = p;
    char *cp = (char *)&a;

    *p++;      // Equivalent to *(p++)
    q++;       // Move q to the next int
    cp += 2;   // Move cp by 2 bytes

    printf("*p  = %d\n", *p);   // Undefined Behavior
    printf("*q  = %d\n", *q);   // Undefined Behavior
    printf("a   = %d\n", a);
    printf("b   = %d\n", b);
    printf("*cp = %d\n", *cp);

    return 0;
}