//Allow us to indirectly access variables 

// A pointer 
//     . Contains an address
//     . Allow the memory at that address to be manipulated
//     . Associates a type with the manipulated memory

#include <stdio.h>
int main()
{
    int a=10;   // Variable
    int *p=&a;  // Address of a 
    printf("%d\n",a);
    printf("%d\n",p);
    printf("%d",*p);
}

//Illegal uses
//&123 (pointing a constant)
//&(x+y) (pointing a experssions)
// register int x;      int *p=&x;