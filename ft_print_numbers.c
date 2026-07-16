#include <unistd.h>
void ft_print_numbers(void)
{
    char s='0';
    if(s<='9')
    {
        write(1, "p", 1);
    else
        write(1, "n", 1);
        s++;
    }
}
int main()
{
    ft_print_numbers();
    return 0;
}