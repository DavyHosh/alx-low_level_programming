#include <stdio.h>
#include <string.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int a[5];
int *p;

memset(a + 2, 98, sizeof(int));
p = a + 2;
*p = 98;
/* The line below will print "a[2] = 98" */
printf("a[2] = %d\n", *(a + 2));
return (0);
}
