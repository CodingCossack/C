//divide n chocolates among m people

#include <stdio.h>

int main() {
    int chocolate;
    int children;

    scanf("%d\n%d", &chocolate, &children);

    int each = chocolate / children;		//finds how much chocolate per child
    printf("%d\n", each);

    int remain = chocolate % children;		//finds remainder
    printf("%d", remain);

    return 0;
}