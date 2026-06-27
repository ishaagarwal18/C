#include <stdio.h>

int strlen(char *c){
    int i=0;
    // while(c[i]!='\0') i++;
    while(*c!='\0'){ c++; i++; }
    return i;
}

int main()
{
    // String s;//Noooooo

    char c[10]="Hello";
    printf("%s\n",c+1);

    int l=strlen(c);
    printf("%d\n",l);
}