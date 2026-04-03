#include <stdio.h>

int main() {
    int a,b;
    int temp;
    
    printf("Enter a:\n ");
    scanf("%d", &a);
    
    printf("Enter b:\n ");
    scanf("%d", &b);

    temp=a;
    a=b;
    b=temp;
    printf("a=%d, b=%d", a, b);

    return 0;  
}