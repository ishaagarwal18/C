#include <stdio.h>

// int main()
// {
//     int (*p)[4]; //p is an pointer to an integer array of size 4.
//     int *p[4]; //p is an array of 4 integer pointers.
// }

// int main()
// {
//     int (*p)[4];
//     int a[4] = {1,2,3,4};
//     p = &a;
//     for(int i=0; i<4; i++)
//         printf("%d\n", *(*p + i));
//     return 0;
// }


// int main()
// {
//     int (*a)[5];
//     int arr[5][5]={{1,2,3,4},{5,6,7,8}};
//     a=arr;
//     ++a;
//     printf("%d",**a);
// } 

// int main()
// {
//     int a[]={1,2,3,45,5,6};
//     int *ptr=(int)(&a+1);
//     printf("%d",*(ptr-1));
// }



// int main() {
//     int arr[] = {3,5,6,7,9};
//     int *p = arr;
//     int (*ptr)[5] = &arr;
//     printf("p = %d\n", *p);
//     printf("ptr[0][3] = %d\n", ptr[0][3]);
//     printf("sizeof(p) = %d\n", sizeof(p));
//     printf("sizeof(*p) = %d\n", sizeof(*p));
//     printf("sizeof(ptr) = %d\n", sizeof(ptr));
//     printf("sizeof(*ptr) = %d\n", sizeof(*ptr));
//     return 0;
// } 

int main()
{
    int (*a)[2];
    int arr[4][4]={1,2,3,4,5,6,7,8};
    a=arr;
    ++a;
    printf("%d",**a);
}