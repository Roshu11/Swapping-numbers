#include <stdio.h>
int main() 
{
    double a, b;
    printf("Enter the value of a: "); 
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%lf", &b); // Swapping

    // a = (initial_a - initial_b)
    a = a - b;   
 
    // b = (initial_a - initial_b) + initial_b = initial_a
    b = a + b;

    // a = initial_a - (initial_a - initial_b) = initial_b
    a = b - a;

    printf("After swapping, a = %d\n", a);
    printf("After swapping, b = %d", b);
    return 0;
}
