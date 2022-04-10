#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main()
{

	char n = rand();
	srand(time(0));
	if(rand>0)
		{
		printf("%d is postive\n", rand());
		}
	else if (rand==0){
		printf("%d is zero\n", rand());
		}
	else
		{
		printf("%d is negative\n", rand());
		}
	return (0);
}
