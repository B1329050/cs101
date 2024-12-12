#include <stdio.h>

int main() {
    int i = 12345;
    int a = i % 10;
    int b = (i/1000)%10;
    int k = i - a - b *1000 + b + a*1000;
    printf ("%d",k);
    return 0;

