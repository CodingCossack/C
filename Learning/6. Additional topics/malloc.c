// Dynamic memory allocation
#include <stdio.h>
#include <stdlib.h>

int main() {

    int n;
    int* marks;

    scanf("%d", &n);

    marks = (int*) malloc(n * sizeof(int));

    for (int i = 0; i < n; i++){
        scanf("%d", marks + i);
    }

    for (int i = 0; i < n; ++i) {
        printf("%d\n", *(marks + i));
    }

    free(marks);

    return 0;
}