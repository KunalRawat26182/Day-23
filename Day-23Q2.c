#include <stdio.h>

int main() {
    int rows = 5;
    int columns = 5;

    for (int i = 1; i <= rows; i++) {          // Loop for each row
        for (int j = 1; j <= columns; j++) {   // Loop for each column
            printf("*");
        }
        printf("\n");  // Move to next row
    }

    return 0;
}
