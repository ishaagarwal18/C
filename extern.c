#include <stdio.h>
int gInt;
void change_extern(void)
{
    printf("Change_extern1 gInt %d\n",gInt);
    gInt=10;
    printf("Change_extern2 gInt %d\n",gInt);
}