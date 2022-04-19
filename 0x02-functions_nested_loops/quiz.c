#include "main.h"

/**
* main - prints even numbers from 0 to 100
* Return: 0
*/

int main(void)
{
        int i;

        for (i = 0; i < 100; i++)
        {
                if (i % 2 != 0)
                {
                        continue;
                }
                else
                {
                        break;
                }

                printf("%d\n", i);
        }

        return(0);
}
Let’s add printf statements to the code. What information do the printf statements tell us about how our code is executed?

#include "main.h"

/**
* main - prints even numbers from 0 to 100
* Return: 0
*/

int main(void)
{
        int i;

        printf("Before loop\n");

        for (i = 0; i < 100; i++)
        {
                if (i % 2 != 0)
                {
                        printf("i is not even so don't print\n");
                        continue;
                }
                else
                {
                        printf("i is even, break to print\n");
                        break;
                }

                printf("Outside of if/else, still inside for loop\n");

                printf("%d\n", i);
        }

        printf("For loop exited\n");

        return(0);
}
