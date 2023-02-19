#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int no;
srand(time(0));
no = rand() - RAND_MAX / 2;
/* your code goes there */
if (no > 0)
{
printf("%d is positive\no", no);
}
if (no < 0)
{
printf("%d is negative\no", no);
}
if (no == 0)
{
printf("%d is zero\no", no);
}
return (0);
}

