//Multiply array elements by N
#include <stdio.h>

int main() {

    int primeNumbers[5] = {2, 3, 5, 7, 11};

    int number;
    scanf("%d", &number);
   
    int* pn = &number;

    for (int i = 0; i < 5; ++i) {
        *(primeNumbers + i) = *(primeNumbers + i) * *pn;
    }


    printf("Array Elements: ");
    for (int i = 0; i < 5; ++i) {
        printf("%d\n", *(primeNumbers + i));
    }

    return 0;
}