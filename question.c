#include <stdio.h>

// int main()
// {
//     int i, j, k = 0;

//     j = 2 * 3 / 4 + 2.0 / 5 + 8 / 5;

//     k -= --j;

//     for(i = 0; i < 5; i++)
//     {
//         switch(i + k)
//         {
//             case 1:

//             case 2:
//                 printf("\n%d", i + k);

//             case 3:
//                 printf("\n%d", i + k);

//             default:
//                 printf("\n%d", i + k);
//         }
//     }

//     return 0;
// }

// int main()
// {
//     int a=1,b=1,c=1;
//     // if ( a==b || (c++) )
//     // if ( a!=b || (c++) )
//     // if ( a==b && (c++) )
//     if ( a!=b && (c++) )
//     {
//         printf("%d\n",c);
//     }
//     printf("%d\n",c);
// }


// int main()
// {
//     int i=0,j=1,k=2,m;
//     m=i++||j++||k++;
//     printf("%d\n %d\n %d\n %d\n",i,j,k,m);
// }


// int main()
// {
//     int x=1,y=0,z=5;
//     int a=x&&y||z++;
//     printf("%d %d",a,z);
// }


// int main()
// {
//     int x,i=4,j=7;
//     x=j||i++&&1;
//     printf("%d",i);
// }


// int main()
// {
//     int i = -3, j = 2, k = 0, m;
//     m = ++i && ++j && ++k;
//     printf("%d, %d, %d, %d\n", i, j, k, m);
//     return 0;
// }

// int main()
// {
//     int i, j, count;
//     count = 0;
//     i = 0;
//     for(j = -3; j <= 3; j++)
//     {
//         if((j >= 0) && (i++))
//             count = count + j;
//     }
//     count = count + i;
//     printf("%d", count);
//     return 0;
// }


// void main()
// {
//     int k, i = 50, j = 100, l;
//     i = i | (j && 100);
//     k = i || (j || 100);
//     l = i & (j && 100);
//     printf("%d %d\n", i, j);
//     printf("%d %d", k, l);
// }


int main()
{
    int i = -3, j = 2, k = 0, m;
    m = ++i || ++j && ++k;
    printf("%d, %d, %d, %d\n", i, j, k, m);
    return 0;
}