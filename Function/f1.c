#include <stdio.h>

int square(int x)
{
    return x*x;
}

float mul(float a,float b){
    float result;
    result=a*b;
    return result;
}

void display()
{
    printf("No args,no parameter\n");
}

void sum(int a,int b){
    printf("Sum=%d",a+b);
}

int main()
{
    int x=square(3);
    float y=mul(2,3);
    printf("Fucntion Square : %d\n",x);
    printf("Fucntion mul : %f\n",y);
    display();
    sum(4,5);
}

