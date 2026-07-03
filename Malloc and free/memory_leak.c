// a memory leak is a memory which hasn't been freed, there is no way to access(or free it) now. 

#include <stdio.h>
#include <stdlib.h>

void func()
{
    char *ch=malloc(10);
}

int min()
{
    func();
    //ch not valid outside , no way to access malloc-ed memory
}  