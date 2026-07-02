#include <stdio.h>
int main()
{
    int a=7;
    void *p;
    p=&a;
    printf("Interger varaible is %d",*((int *)p));
}

// -> Void ptr can hold any type of address
// -> we can not directly derefernce it 
// -> before derefernce, we need to type cast.