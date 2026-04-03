#include <stdio.h>

void swap_value(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void swap_ref(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void main() {
    int a, b;
    int ch;
    
    printf("Enter a: ");
    scanf("%d", &a);
    
    printf("Enter b: ");
    scanf("%d", &b);
    
    printf("Enter choice (1 for call by value, 2 for call by reference): ");
    scanf("%d", &ch);

    switch (ch) {
        case 1:
            printf("Call by value\n");
            swap_value(a, b);
            printf("After swap: a = %d, b = %d\n", a, b);
            break;
        case 2:
            printf("Call by reference\n");
            swap_ref(&a, &b);
            printf("After swap: a = %d, b = %d\n", a, b);
            break;
        default:
            printf("Invalid choice\n");
    }
}