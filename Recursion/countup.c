#include <stdio.h>

// void countup(int n)
// {
//     if(n==0){
//         return ;
//     }
//     countup(n-1);
//     printf("%d\n",n);
// }
// int main(){
// countup(5);}



void countup()
{
    static int n=5;
    if(n==0){
        return ;
    }
    n--;
    printf("%d\n",n); 
    countup();
}
int main(){
countup();}