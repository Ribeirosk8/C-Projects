#include <stdio.h>

int main() {
    int n;

    printf("Enter the height of the pyramid: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        // Calculate the number of spaces needed for alignment
        int spaces = n - i;

        // Print spaces followed by hashes
        for (int j = 0; j < spaces; j++) {
            printf(" ");
        }
        for (int j = 0; j < 2 * i - 1; j++) {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}
