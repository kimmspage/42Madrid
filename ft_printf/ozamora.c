#include "ft_printf.h"
#include <stdio.h> 
#include <stdarg.h>
#include <limits.h>

int main()
{
    int ft_len;
    int og_len;
    char *str = NULL;
    // ft_len = ft_printf("Hola %c %c %c %c| %s %s %s | %d  \n", 'a', 'A', ' ' , '\0', "Adios", str, "World\n", INT_MIN);
    // og_len = printf("Hola %c %c %c %c| %s %s %s | %d  \n", 'a', 'A', ' ' , '\0', "Adios", str, "World\n", INT_MIN);
    ft_len = ft_printf("%u | %p %p %p %p %p| %x | %X | %%\n", -123123, str, LONG_MIN, LONG_MAX, ULONG_MAX, -ULONG_MAX, 42, 0x42);
    og_len = printf("%u | %p %p %p %p %p| %x | %X | %%\n", -123123, str, LONG_MIN, LONG_MAX, ULONG_MAX, -ULONG_MAX, 42, 0x42);
    printf("og: %d VS ft: %d\n", og_len, ft_len);
}