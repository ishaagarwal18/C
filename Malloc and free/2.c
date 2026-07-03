#include <stdio.h>
#include <stdlib.h>

int x;
int main()
{
    int y;
    char *str;
    y=4;
    printf("Stack memory : %d\n",y);

    str=malloc(100*sizeof (char));
    str[0]='m';
    printf("Heap memory :%c",str[0]);
    free(str);
    return 0;
}