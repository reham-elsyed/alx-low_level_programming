#include <stdio.h>
#include <stdlib.h>

/**
*main - print sum
*@argc: num of cmd
*@argv:pointer of input array
*Return:0 success
*/
int main(int argc, char *argv[])
{
int res;

if (argc == 3)
{
res = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", res);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
