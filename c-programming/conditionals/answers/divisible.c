#include <stdio.h>

int main()
{
	/* TODO
	 * To check if a number is divisible by 4 and 13
	 * Printf function to ask the user for a number
	 * Scanf function to store the users input.
	 * If statement to check if the number the user inputs returns a remainder when divided by 4 and 13.
	 * If yes, then printf statement to tell the user that the number is not divisible by 4 and 13.
	 * If no, printf statement to tell the user that the number is divisible by 4 and 13.
	 * */

	int num;

	const int DIV_1  = 4;
	const int DIV_2 = 13;
	
	printf("Enter a number: ");
	scanf("%d", &num);

	if (num % DIV_1 == 0 && num % DIV_2 == 0)
		printf("%d is divisible by both %d and %d \n", num, DIV_1, DIV_2);
	else
		printf("%d is not divisible by both %d and %d because it returns a remainder \n", num, DIV_1, DIV_2);

}
