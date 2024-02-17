#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int largest = a;
    int smallest = a;
    if (b > largest) {
        largest = b;
    } else if (b < smallest) {
        smallest = b;
    }
    if (c > largest) {
        largest = c;
    } else if (c < smallest) {
        smallest = c;
    }

    int second_largest;
    if (a != largest && a != smallest) {
        second_largest = a;
    } else if (b != largest && b != smallest) {
        second_largest = b;
    } else {
        second_largest = largest;
    }

    printf("%d", second_largest);

    return 0;
}