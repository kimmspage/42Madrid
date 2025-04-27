#include "ft_printf.h"
#include <stdio.h> 


int main(void)
{
    int ret1, ret2;
    char c = 'A';
    char *s = "Hello, world!";
    char *null_str = NULL;
    int d = -12345;
    int i = 67890;
    unsigned int u = 4294967295U;
    void *p = &d;
    void *null_p = NULL;
    int x = 0x1a3f;
    int X = 0xBEEF;

    // %c
    ret1 = ft_printf("ft: %%c: [%c]\n", c);
    ret2 =    printf("og: %%c: [%c]\n", c);

    // %s
    ft_printf("ft: %%s: [%s] [%s]\n", s, null_str);
    printf("og: %%s: [%s] [%s]\n", s, null_str);

    // %p
    ft_printf("ft: %%p: [%p] [%p]\n", p, null_p);
    printf("og: %%p: [%p] [%p]\n", p, null_p);

    // %d %i
    ft_printf("ft: %%d: [%d] %%i: [%i]\n", d, i);
    printf("og: %%d: [%d] %%i: [%i]\n", d, i);

    // %u
    ft_printf("ft: %%u: [%u]\n", u);
    printf("og: %%u: [%u]\n", u);

    // %x %X
    ft_printf("ft: %%x: [%x] %%X: [%X]\n", x, X);
    printf("og: %%x: [%x] %%X: [%X]\n", x, X);

    // %%
    ft_printf("ft: %%: [%%]\n");
    printf("og: %%: [%%]\n");

    // Return value check
    int len1 = ft_printf("ft: return value test [%d]\n", 42);
    int len2 =    printf("og: return value test [%d]\n", 42);
    printf("Return values: ft_printf=%d, printf=%d\n", len1, len2);

    return 0;
}