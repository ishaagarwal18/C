#include <stdio.h>

// int main(){
//     auto int b;
//     for (b=0; b<5; b++){
//         auto int a=b+a;
//         printf("%d ", a);
//     }
//     printf("%d", b);
//     return 0;
// }

// int main()
// {
//     register int a = 5;
//     printf("%d", a);
//     return 0;
// }

// int g; //Local variable 
// static int f;

// void increment(){
//     static int count=0;
//     count++;
//     printf("%d\n",count);
// }

// int main()
// {
//     increment();
//     increment();
//     increment();
//     increment();
// }


// static int y=5; //static global 
// void fun(){
//     static int y; // static local 
//     y++;
//     return;
// }
// int main(){
//     fun();
//     printf("%d\n",y);
//     return 0;
// }


// static int y=1;
// void fun(){
//     static int y;
//     y=5;
//     return;
// }
// int main(){
//     static int y=2;
//     fun();
//     printf("%d",y);
//     return 0;
// }


// main()
// {
//     int x=0;
//     for (int i =1;i<5;i++)
//     {
//         x+=fun1()+fun2();
//     }
//     printf("%d\n",x);
// }

// int fun1(){ 
//     static int y=5;
//     y--;
//     return y;
// }
// int fun2(){
//     static int y;
//     y++;
//     return y;
// }


// int max;
// int main()
// {
//     int len;
//     //(this is useless)
//     extern int max; //it is a way to tell compiler that there is a global variable 
//                     // max which is either in this file or in another file. 
//     printf("%d",max);  
//     max=5;
//     printf("%d",max);
// }



// int main()
// {
//     int len;
//     //(this is usefull)
//     extern int max; 
//     max=5;
//     printf("%d",max);
// }
// int max;


extern int gInt;
void change_extern(void);
int main()
{
    printf("main1 gInt %d\n", gInt);
    change_extern();
    gInt = 5;
    change_extern();
    printf("main2 gInt %d\n", gInt);
    return 0;
}