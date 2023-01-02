// convert pounds to kilograms

#include <stdio.h>

int main()  {
    double pound;

    scanf("%lf", &pound);

    double kg = pound * 0.453592;

    printf("%lf", kg);
    
    return 0;
}