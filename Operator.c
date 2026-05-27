#include <stdio.h>

// int main()
// {
//     int a=9-12/3+3*2-1;
//     printf("%d",a);
// }

// int main()
// {
//     int a = 10, b = 20, c = 30;

//     if (a < b < c)
//     {
//         printf("True\n");
//     }
//     else
//     {
//         printf("False\n");
//     }

//     return 0;
// }


// int main()
// {
//     int a = 10, b = 20, c = 30;
//     if (c>b>a){
//         printf("True\n");
//     }
//     else{
//         printf("False\n");
//     }
//     return 0;
// }



// --------------------------------------
// ----------BITWISE operator------------

// int main()
// {
//     int a=10;
//     int b=23;
//     printf("%d\n",a&b);
//     printf("%d\n",a|b);
//     printf("%d\n",a^b);
//     printf("%d\n",a<<3);
//     printf("%d\n",a>>3);
// }


// int main()
// {
//     int number;
//     int test = 1;
//     scanf("%d", &number);
//     if(number & test)
//         printf("Number is odd\n\n");
//     else
//         printf("Number is even\n\n");
//     return 0;
// }


// int main()
// {
//     int x, y = 10;
//     x = y << 1;
//     printf("%d", x);
//     return 0;
// }


// int main()
// {
//     int x, y = 10;
//     x = y >> 1;
//     printf("%d", x);
//     return 0;
// }


int main()
{
    int x=8;
    printf("%d\n",~x);
    printf("%d",~x+1);
    printf("%d",-x-~x);
}