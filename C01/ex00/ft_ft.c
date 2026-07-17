#include <unistd.h>
#include <stdio.h>

void ft_ft(int *nbr)
{
    *nbr = 42;
}
void ft_ft(int *nbr);

int main(void)
{
    int x;

    x = 0;
    ft_ft(&x);
    printf("%d\n", x);
    return (0);
}
