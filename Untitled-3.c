#include<stdio.h>

int power (int a, int b) {
    if (b == 1) {
        return a;
    }

    return a * power(a, b - 1);
}

int power2 (int a, int b) {
    int result = a;
    for(int n = 1; n < b; n++) { // Same as (int n = 0; n < b-1; n++)
        result *= a; // Same as result = result * a;
    }
    return result;  
}

int main() {
    int a, b;
    a = 2;
    b = 3;
    int c = power2(a, b);
    printf("%d", c);
    
    return 0;    
}