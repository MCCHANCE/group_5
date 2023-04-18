#include <stdio.h>

int main ()
{
	int score, cohort;
	char month;
	/*TODO
	 * Ask for users name	
	 */
	char name[20];

	printf("What is your name: ");
	scanf("%s", name);

	/* User name recieved*/

	printf("Are you in the first month: (Type \"Y\" for yes and \"N\" for No) "); 
	scanf(" %c", &month);

	if (month ==  'Y' || month == 'y')
	{
		printf("What is your score: ");
		scanf("%d", &score);

		if (score < 80)
			printf("Sorry you're out %s \n", name);

	}

	else if (month ==  'N' || month == 'n')
	{

		printf("What cohort are you: ");
		scanf("%d", &cohort);

		if (cohort < 1 || cohort > 15)
		{
			printf("%s Invalid cohort \n", name);

		}
		else
			printf("What is your score: ");
			scanf("%d", &score);
			
			if (score < 70)
			{
				cohort = cohort + 1;

				printf("%s You have been defered to cohort  %d \n", name, cohort);
			}

			else if (score > 185)
			{
				 printf("%s Invalid score \n", name);
			}
	}


}
