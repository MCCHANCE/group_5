#include <stdio.h>

int main()
{
	/** TODO
	 * Calculate profit or loss for a seller.
	 * Amount seller bought the goods
	 * Amount the seller sold the goods
	 * Calculate the differences between the cp, and sp.
	 * If the cost price is greater than he selling price, print out to the seller the exact ammount lost.
	 * else print out the exact amount made as profit
	 * or tell the seller that there was neither profit nor loss.
	 */

	int cost_p, sell_p, amount;

	printf("Enter the Cost price: ");
	scanf("%d", &cost_p);
	
	printf("Enter the Selling price: ");
	scanf("%d", &sell_p);

	if (cost_p > sell_p)
	{
		amount = cost_p - sell_p;

		printf("You made a loss of = %d \n", amount);
	}
	else if (cost_p < sell_p)
	{
		amount = sell_p - cost_p;

		printf("You made a profit of = %d \n", amount);
	}
	else
		printf("You made neither profit nor loss \n");
	

	
}
