#include <stdio.h>

int factorial(int n) {
    if (n == 1) return 1;        
    return n * factorial(n - 1);  
}

int main() {
    int n = 5;
    int m = factorial(n);         // 計算 5 的階乘
    printf("factorial %d = %d\n", n, m);  // 輸出結果：factorial 5 = 120
    return 0;
}
