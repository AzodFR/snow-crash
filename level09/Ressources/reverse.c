#include <stdio.h>
int main(int ac, char **av)
{
    for (int i = 0; av[1][i]; i++)
        av[1][i] = av[1][i] - i;
    printf("%s\n", av[1]);
    return (0);
}