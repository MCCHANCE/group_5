#include <stdio.h>

//Variables = containers to store value; 

int main()
{
	char name[20];
	int cohort;
	float score;

	printf("What is your name? \n"); 
	printf("What is your cohort: \n");
	printf("What is your scores: \n");
	scanf("%s %d %f", name, &cohort, &score);


	printf("Your name is %s, your cohort is %d, and your score is %.2f", name, cohort, score);

	return 0;
}

