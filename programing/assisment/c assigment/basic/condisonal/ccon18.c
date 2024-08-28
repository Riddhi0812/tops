#include<stdio.h>
main()
{
    int cost_price,selling_price, profit_amnt;
    printf("Input Cost Price: ");
    scanf("%d", &cost_price);
    printf("Input Selling Price: ");
    scanf("%d", &selling_price);
 
    if(selling_price>cost_price)
    {
        profit_amnt = selling_price-cost_price;
        printf("\nYou can booked your profit amount : %d\n", profit_amnt);
    }
    else if(cost_price>selling_price)
    {
        profit_amnt = cost_price-selling_price;
        printf("\nYou got a loss of amount : %d\n", profit_amnt);
    }
    else
    {
        printf("\nYou are running in no profit no loss condition.\n");
    }
}
