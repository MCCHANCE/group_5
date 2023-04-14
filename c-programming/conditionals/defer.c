#include <stdio.h>

int main ()
{
	int score, cohort;
	char month;

	printf("Are you in the first month: (Type \"Y\" for yes and \"N\" for No) "); 
	scanf("%c", &month);

	if (month ==  'Y' || month == 'y')
	{
		printf("What is your score: ");
		scanf("%d", &score);

		if (score < 80)
			printf("Sorry you're out \n");

	}

	else if (month ==  'N' || month == 'n')
	{

		printf("What cohort are you: ");
		scanf("%d", &cohort);

		printf("What is your score: ");
		scanf("%d", &score);

		if (score < 70)
			printf("You have been defered to a prev cohort \n");
	}


}
