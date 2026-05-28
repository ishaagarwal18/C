// #include <stdio.h>
// int main() {
//     int n1;
//     printf("Enter 1st number : ");
//     scanf("%d", &n1);
//     int n2;
//     printf("Enter 2nd number : ");  
//     scanf("%d", &n2);
//     char ch;
//     printf("Enter the operator (+, -, *, /) : ");
//     scanf(" %c", &ch);
//     switch (ch) {
//         case '+':
//             printf("Result: %d", n1 + n2);
//             break;
//         case '-':
//             printf("Result: %d", n1 - n2);
//             break;
//         case '*':
//             printf("Result: %d", n1 * n2);
//             break;
//         case '/':
//             if (n2 != 0) {
//                 printf("Result: %.2f", (float)n1 / n2);
//             } else {
//                 printf("Error: Division by zero is not allowed.");
//             }
//             break;
//         default:
//             printf("Invalid operator!");
//     }
//     return 0;
// }

// int main()
// {
//     int num = 8;

//     switch (num)
//     {
//         case 7:
//             printf("Value is 7");
//             break;

//         case 8:
//             printf("Value is 8");
//             break;

//         case 9:
//             printf("Value is 9");
//             break;

//         default:
//             printf("Out of range");
//             break;
//     }

//     return 0;
// }


// int main()
// {
//     int num = 2;

//     switch (num + 2)
//     {
//         printf("Hey");

//         case 1:
//             printf("Case1: Value is %d", num);

//         case 2:
//             printf("Case2: Value is %d", num);

//         case 3:
//             printf("Case3: Value is %d", num);

//         default:
//             printf("Default Value is %d", num);
//     }

//     return 0;
// }


// int main()
// {
//     int num = 3;

//     switch(num)
//     {
//         case 1:
//             printf("Case1: Value is %d \n", num);

//         case 2:
//             printf("Case2: Value is %d \n", num);

//         case 3:
//             printf("Case3: Value is %d \n", num);

//         default:
//             printf("Default Value is %d \n", num);
//     }

//     return 0;
// }

// int main()
// {
//     int value = 0;

//     switch (value)
//     {
//         default:
//             value++;

//         case 2:
//             printf("Humans are human centric ");
//             break;

//         case 1:
//             printf("This is inhuman ");
//     }

//     printf("%d", value);

//     return 0;
// }


int main()
{
    char inChar = 'A';

    switch (inChar)
    {
        case 'A':
            printf("Choice A \n");

        case 'B':

        case 'C':
            printf("Choice B");

        case 'D':

        case 'E':

        default:
            printf("No Choice");
    }

    return 0;
}