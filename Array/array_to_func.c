#include <stdio.h>

int main()
{
    int a[5]={1,2,3,4};
    fun(a);
}
// fun(int *p)
fun(int p[])
{
    for (int i=0;i<5;i++)
    {
        printf("%d\n",p[i]);
    }
}