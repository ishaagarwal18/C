#include <stdio.h>

// void countdown(int n)
// {
//     if(n==0){
//         return ;
//     }
//     printf("%d\n",n);
//     countdown(n-1);
// }
// int main(){
// countdown(5);}



void countdown()
{
    static int n=5;
    if(n==0){
        return ;
    }
    n--;
    countdown();
    printf("%d\n",n);
}
int main(){
countdown();}