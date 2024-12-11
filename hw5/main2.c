#include <stdio.h>

int main() {
    int n;                  
    double pi = 0.0;        
    int terms = 1000000;    

    for (n = 0; n < terms; n++) {
        if (n % 2 == 0) {
            pi += 4.0 / (2 * n + 1); 
        } else {
            pi -= 4.0 / (2 * n + 1); 
        }
    }

    printf("Calculated pi = %.5f\n", pi); 
    return 0;
}
