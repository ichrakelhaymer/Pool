#include <unistd.h>

void ft_print_alphabet()
{
    char s='a';
    while(s<='z')
    {
        write(1, &s, 1);
        s++;
    }
}
