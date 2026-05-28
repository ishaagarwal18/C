// // #include <stdio.h>

// // int main()
// // {
// //     int weight;

// //     while(weight > 65)
// //     {
// //         printf("Go, exercise, ");
// //         printf("then come back. \n");

// //         printf("Enter your weight: ");
// //         scanf("%d", &weight);
// //     }

// //     return 0;
// // }


// #include <stdio.h>


// int main()
// {
//     int count = 0;

//     while(count < 100)
//     {
//         printf("Programming is fun!\n");
//         count = count + 1;
//     }

//     return 0;
// }

// int main()
// {
//     int weight;

//     while(weight > 65)
//     {
//         printf("Go, exercise, ");
//         printf("then come back. \n");

//         printf("Enter your weight: ");
//         scanf("%d", &weight);
//     }

//     return 0;
// }

#include <stdio.h>

int main()
{
    int a;

    while(1)
    {
        printf("enter the number:");
        scanf("%d", &a);

        if(a == 0)
            break;
    }

    return 0;
}