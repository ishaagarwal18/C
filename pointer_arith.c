#include <stdio.h>

//When two pointers are subtracted, both shall point to elements 
//of the same array object.
// int main()
// {
//     int a[10]={1,2,3,4,5,6,7,8,9,10};
//     int *p1=a;
//     int *p2=p1+3;
//     printf("%d",p2-p1);
// }



#include <stdio.h>

int main() {

    int a[] = {1,2,3,4,5,6,7,8,9,10};

    int *ip = a + 2;

    int *p1, *p2;

    p1 = (int *)((short *)ip + 4);

    p2 = (int *)((short *)(ip - 2) + 2);

    printf("p1 = %d\n", *p1);
    printf("p2 = %d\n", *p2);
}