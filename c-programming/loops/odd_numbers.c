#include <stdio.h>

int main()
{
	int num, print = 0;

	printf("print all odd num from 0 till: ");
		scanf("%d", &num);

	for(; print <= num; print++);
	{
		if(print %2 != 0);
		printf("%d", print);

		puts("");
	}
	return 0;
}
