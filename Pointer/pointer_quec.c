// #include <stdio.h>
// void main()
// {
//     char *p = "UNIVERSSITY";
//     printf("%c", ++*(p++));
// }


// #include <stdio.h>
// void abc(char []);
// int main()
// {
//     char arr[100];
//     arr[0] = 'a';
//     arr[1] = 'b';
//     arr[2] = 'c';
//     arr[4] = 'd';
//     abc(arr);
//     return 0;
// }
// void abc(char arr[])
// {
//     printf("%c", *++arr);
//     printf("%c", *arr++);
// }


// int main()
// {
//     char *p, *q, y = 0;
//     char x[8] = {0, 1, 2, 3, 4, 5, 6, 7};
//     int i = 0;
//     p = x;
//     q = &x[6];
//     *q = 'a';
//     for (i = 0; i < 6; i++)
//     {
//         *p++ = *q;
//     }
//     q = p;
//     printf("%d", x[1]);
//     return 0;
// }

// int main()
// {
//     char *p="1234";
//     while(*p){
//         printf("%c",*++p);
//     }
// }


// int main()
// {
//     int i,*p,count=0;
// }


#include <stdio.h>
int *confuse(int *x, int *y)
{
    (*y)++;
    y = x;
    *y = 10;
    return y;
}
int main(void)
{
    int a = 6, b = 7;
    int *f = &b;
    f = confuse(&a, &b);
    (*f)++;
    printf("a = %d and b = %d\n", a, b);
    return 0;
}