// convert kilometers to miles

#include <stdio.h>

int main() {

    double km;
    
    scanf("%lf", &km);

    double mi = km / 1.6;

    printf("%lf", mi);
	
    return 0;
}