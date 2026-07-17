#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
    if (b != 0)
    {
        *div = a / b;
        *mod = a % b;
    }
}

void test(int a, int b)
{
    int div;
    int mod;

    div = -1;
    mod = -1;
    ft_div_mod(a, b, &div, &mod);
    printf("a=%d b=%d -> div=%d mod=%d\n", a, b, div, mod);
}

int main(void)
{
    test(21, 6);
    test(-21, 6);
    test(21, -6);
    test(-21, -6);
    return (0);
}