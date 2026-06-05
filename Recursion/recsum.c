#include <stdio.h>

int recsum(int n)
{
    int sum;
    if(n==1){
        return 1;
    }
    else{
        sum=n+recsum(n-1);
    }
    return sum;
}
int main(){
printf("%d", recsum(5));}