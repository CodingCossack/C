//calculating profit given the cost price and selling price

#include <stdio.h>

int main () {
    
    double costPrice, sellingPrice;

    scanf("%lf %lf", &costPrice, &sellingPrice);

    double profit = sellingPrice - costPrice;

    double profitPercent = (profit / costPrice) * 100;

    printf("%.2lf\n", profit);
    printf("%.2lf", profitPercent);

    return 0; 
}