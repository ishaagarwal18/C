#include <stdio.h>
// int main(){
//     int n;
//     printf("enter n : ");
//     scanf("%d", &n);

    //print even numbers from 0 to n

    // method-1
    // for(int i=0; i<=n; i++){
    //     if(i%2==0){
    //         printf("%d ", i);
    //     }
    // }

    //method-2
    // for(int i=0; i<=n; i+=2){
    //     printf("%d ", i);
    // }


    //table of 19
//     for(int i=1; i<=10; i++){
//         printf("19 x %d = %d\n", i, 19*i);
//     }

//     return 0;
// }


// int main()
// {
//     int i;

//     for(i = 0; i <= 3; i++);

//     printf("%d", i);

//     return 0;
// }


// #include <stdio.h>

// void main()
// {
//     int i = 0;

//     for(; i <= 9;)
//     {
//         i++;
//         printf("\n value is:%d", i);
//     }
// }

// #include <stdio.h>

// int main(void)
// {
//     int hours = 10;
//     int i = 0;

//     for(i = 0; i < hours; i++)
//     {
//         if(i == 5)
//         {
//             break;
//         }

//         printf("%d ", i);
//     }

//     return 0;
// }


#include <stdio.h>

int main()
{
    // nested for loops with break statement
    // at inner loop

    for(int i = 0; i < 5; i++)
    {
        for(int j = 1; j <= 10; j++)
        {
            if(j > 3)
                break;
            else
                printf("*");
        }

        printf("\n");
    }

    return 0;
}