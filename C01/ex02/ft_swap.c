#include <stdio.h>
void ft_swap(int *x, int *y)
{
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int a = 5;
    int b = 10;

    printf("Before swap: a = %d, b = %d\n", a, b);
    ft_swap(&a, &b);
    printf("After swap: a = %d, b = %d\n", a, b);

    return 0;
}