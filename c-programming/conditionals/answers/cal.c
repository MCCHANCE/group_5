#include <stdio.h>

int main()
{
	/**
	 * TODO
	 * print out a simple calculator in C.
	 * Ask for two numbers and sign.
	 * Perform the calculation based on the sign that was given to you.
	 * If the sign is +, then: print out the result of num1 + num2.
	 * etc
	 */

	int num1, num2, result;
	char ope;

	printf("Enter two numbers and an operator: eg: 2 + 5 \n");
	scanf("%d %c %d", &num1, &ope, &num2);
	
	if (ope == '+')
	{
		result = num1 + num2;
		printf("%d \n", result);
	}
	else if (ope == '-')
	{
		 result = num1 - num2;
		 printf("%d \n", result);
	}
	else if (ope == '*')
	{
		result = num1 * num2;
		printf("%d \n", result);
	}
	else if (ope == '/')
	{
		result = num1 / num2;
		printf("%d \n", result);
	}
	else 
		printf("Operand is not recognised please use either of: + - * /");




}
