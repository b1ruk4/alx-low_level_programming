#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	
	srand(time(0));
	for(int i = 0; i < 1; i++)
		if(n>0){
			printf("%d is postive", rand());
		}
		else if (n == 0){
			printf("%d is zero", rand());
		}
		else {
			printf("%d is negative", rand());
		}
	return (0);
}
