#include "ft_printf.h"

int main(void)
{
    // %c
    printf("length:%d\n",ft_printf("%c %c %c",'h', 'H', 48));
    printf("\nlength:%d\n",printf("%c %c %c",'h', 'H', 48));
    // %s
    printf("length:%d\n",ft_printf("%s %s %s","Hello", "Good Morning", "Good bye"));
    printf("\nlength:%d\n",printf("%s %s %s","Hello", "Good Morning", "Good bye"));
    // %p
    printf("length:%d\n",ft_printf("%p %p %p","Hello", "Good Morning", "Good bye"));
    printf("\nlength:%d\n",printf("%p %p %p","Hello", "Good Morning", "Good bye"));
    // %d
    printf("length:%d\n",ft_printf("%d %d %d",INT_MAX, INT_MIN, 0));
    printf("\nlength:%d\n",printf("%d %d %d",INT_MAX, INT_MIN, 0));
    // %i
    printf("length:%d\n",ft_printf("%i %i %i",INT_MAX, INT_MIN, 0));
    printf("\nlength:%d\n",printf("%i %i %i",INT_MAX, INT_MIN, 0));
    // %u
    printf("length:%d\n",ft_printf("%u %u ",UINT_MAX, 0));
    printf("\nlength:%d\n",printf("%u %u ",UINT_MAX, 0));
    // %x
    printf("\nlength:%d\n",ft_printf("%x %x %x", "Hello", "Good Morning", "Good bye"));
    printf("\nlength:%d\n",printf("%x %x %x", "Hello", "Good Morning", "Good bye"));
    // %X
    printf("\nlength:%d\n",ft_printf("%X %X %X", "Hello", "Good Morning", "Good bye"));
    printf("\nlength:%d\n",printf("%X %X %X", "Hello", "Good Morning", "Good bye"));
    // %%
    printf("\nlength:%d\n",ft_printf("%%"));
    printf("\nlength:%d\n",printf("%%"));
    //mix
    printf("\nlength:%d\n",ft_printf("%c %s %p %d %i %u %x %X %%", 'H', "Good Morning", "Good bye", INT_MAX, INT_MIN, UINT_MAX, "Thank you", "Thank you"));
    printf("\nlength:%d\n",printf("%c %s %p %d %i %u %x %X %%", 'H', "Good Morning", "Good bye", INT_MAX, INT_MIN, UINT_MAX, "Thank you", "Thank you"));

}