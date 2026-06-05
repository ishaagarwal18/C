#include <stdio.h>

// void recurse(){
//     static int i=4;
//     if(--i){
//         recurse();
//         printf("%d",i);
//     }
// }

// void recurse(){
//     static int i=4;
//     printf("%d",i);
//     if(--i){
//         recurse();
//     }
// }



// void recurse(int i){
//     if(--i){
//         printf("%d",i);
//         recurse(i);
//     }
// }



void recurse(int i){
    printf("%d",i);

    if(--i){
        recurse(i);
    }
}

int main()
{
    // recurse();
    recurse(3);
}