#include <stdio.h>
#include <stdlib.h>
// int main()
// {
//     int *p= malloc(4);
//     *p=3;
//     printf("%d",p);
// }

// int main()
// {
//     int *p= malloc(1);
//     *p=3;       // This may crash
//     printf("%d",p);
// }

// int main()
// {
//     int *p= malloc(4);
//     *(p+1)=5;       // This may crash 
//     printf("%d",p);
// }

int main()
{
    int *ip;
    ip=(int*)molloc(10*sizeof(int));
    if (ip == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }
    ip[6] = 42;
    printf("ip[6] = %d\n", ip[6]);
    free(ip);
    return 0;
}