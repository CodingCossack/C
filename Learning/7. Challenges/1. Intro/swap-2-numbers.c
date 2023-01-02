//swap two numbers

#include <stdio.h>

int main() {
    int x;
    int y;

    scanf("%d", &x);
    scanf("%d", &y);

    int temp;

    temp = x;
    x = y;
    y = temp;

    printf("%d\n%d", x, y);

    return 0;
}