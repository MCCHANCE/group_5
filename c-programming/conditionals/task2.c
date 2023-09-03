#include <stdio.h>

int main(void)
{
	//Prompt user to agree
	 char c;
	 
 	 // Check whether agreed
         if (c == 'Y' || c == 'y')
	  {
		  printf("Agreed.\n");
	  }
	 else if (c == 'N' || c == 'n')
	 {
            printf("Not agreed.\n");
	 }
}
