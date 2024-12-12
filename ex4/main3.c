#include <stdio.h>

int main() {
    int i;
    for (i = 1; i <= 9 * 9; i++) {
       （i / 9 + 1）
        int row = (i - 1) / 9 + 1;
      （i % 9 + 1）
        int col = (i - 1) % 9 + 1;

        printf("%d x %d = %2d  ", row, col, row * col);

       
        if (i % 9 == 0) {
            printf("\n");
        }
    }

    return 0;
}
