#include <stdio.h>
// int main()
// {
//     int *arrop[3];
//     int a = 10, b = 20, c = 50, i;
//     arrop[0] = &a;
//     arrop[1] = &b;
//     arrop[2] = &c;
//     for(i = 0; i < 3; i++)
//     {
//         printf("Address = %d\t Value = %d\n",
//                arrop[i], *arrop[i]);
//     }
//     return 0;
// }



// int main() {

//     int a = 2, b = 3, c = 4, d = 5;
//     int arr[5] = {1,2,3,4,5};

//     int *pOne[5];
//     int *p = arr;

//     pOne[0] = arr;
//     pOne[1] = &a;
//     pOne[2] = &b;
//     pOne[3] = &c;
//     pOne[4] = &d;

//     printf("*p is %d\n", *p);
//     printf("*pOne[4] is %d\n", *pOne[4]);

//     return 0;
// }

int main()
{
    int a[4]={1,2,3,4};
    int b[4]={5,6,7,9};
    int c[4]={6,7,8,9};
    int *d[3]={a,b,c};
    int *p=d[0];
    int *q=d[1];
    int *r=d[2];

    printf("%d\n",(p-q));
    printf("%d\n",(p-r));
    printf("%d\n",(q-r));
    printf("%d\n",(p-q));
    printf("%d\n",(p-q));
}