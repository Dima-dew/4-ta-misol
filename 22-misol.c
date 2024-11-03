#include <stdio.h>  

int main() {  
    int A, B, V;  
    printf("A sonini kiriting: ");  
    scanf("%d", &A);  
    printf("B sonini kiriting: ");  
    scanf("%d", &B);  

     V = A;  
     A = B;  
     B = V;  

     printf("A: %d\n", A);  
     printf("B: %d\n", B);  

    return 0;  
}
