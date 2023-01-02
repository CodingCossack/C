//calculating cost price given selling price and profit percentage.

#include <stdio.h>

int main() {
  
    double sellingPrice, profitPercent;

    scanf("%lf %lf", &sellingPrice, &profitPercent);

    double costPrice = (sellingPrice * 100.0) / (100 + profitPercent);	//costPrice formula

    printf("%.2lf", costPrice);		//result printed to 2 decimal places
    
    return 0;
}