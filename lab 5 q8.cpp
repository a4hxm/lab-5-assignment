#include <stdio.h>
int main() {
    int num, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        count += num & 1; 
        num = num >> 1; 
    }
    printf("Number of 1s in the binary representation is: %d\n", count);

    return 0;
}

