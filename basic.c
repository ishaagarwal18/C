#include <stdio.h>


// =======================
// DATA TYPES IN C
// =======================

/*
1. int (4 bytes)
signed int
unsigned int
*/

/*
2. char (1 byte)
- signed char → positive + negative values
- unsigned char → only positive values
*/

/*
3. short (2 bytes)
- signed short → positive + negative values
- unsigned short → only positive values
*/

/*
4. float (4 bytes)
- Used to store decimal numbers
- Less accurate decimal values
- Example: 10.5, 99.9
*/

/*
5. double (8 bytes)
- Used to store decimal numbers
- More accurate than float
- Example: 3.141592
*/

/*
6. long double (10 bytes)
- Used for very precise decimal values
- More accurate than double
- Size may change depending on system/compiler
*/

// int main()
// {
//     int final_value=10;
//     char yes="x";
//     double balance =12.1234;
// }


/*
FORMAT SPECIFIERS IN C

1. char                        %c
2. int                         %d
3. unsigned int                %u
4. float                       %f
5. hexadecimal format          %x
6. address                     %p
7. string                      %s
*/

// int main()
// {
//     int a = 5;
//     int b=10;

//     // printf("%d", a);
//     // printf("Hey %d",a);
//     // printf("Hey %d......%d",a,b);
//     printf("5+10");
//     printf("%d",a+b);

//     return 0;
// }


int main()
{
    // int y=-9;
    unsigned int y=-9;
    printf("%d\n",y);
    printf("%u",y);
}