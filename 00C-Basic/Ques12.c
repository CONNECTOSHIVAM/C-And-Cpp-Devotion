// Q.write a program to ask user about the cost price and selling price of per dozen.
// calculate the profit and loss upon selling 25 bananas.

#include<stdio.h>
int main()
{
    int cost, sell;
    printf("Enter the Cost price per banana dozen: ");
    scanf("%d",&cost);

    printf("Enter the Sell price per banana dozen: ");
    scanf("%d",&sell);

    float oneBC= cost/12;
    float oneSC= sell/12;

    float totalCostPriceOfBanana = (float)25*oneBC;
    float totalSellPriceOfBanana = (float)25*oneSC;

    float profit = totalSellPriceOfBanana - totalCostPriceOfBanana;

    if(profit>=0)
    {
        printf("Profit is : %.2f",profit);
    }else{
        printf("Loss is : %.2f",profit);
    }

    return 0;

}