#include <stdio.h>  

int main() {  
    int A, B, C;  

    printf("A, B va C sonlarini kiriting: ");  
    scanf("%d %d %d", &A, &B, &C);  

    int V = A;  
    A = B;  
    B = C;
	C = V;
    
     
      

    printf("Yangi qiymatlar:\n");  
    printf("A = %d\n", A);  
    printf("B = %d\n", B);  
    printf("C = %d\n", C);  

    return 0;  
}
