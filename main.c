#include "ft_printf.h"
#include <stdio.h>

int main()
{
   
    ft_printf("Hello, %s! The value is %d.\n", "world", 42);
    return 0;
}

// int main()
// {
//     int i;
//     i = 1337;
//     printf("Them:\n");
//     printf (" => %i\n", printf("%"));
//     printf("Mine:\n");
//     ft_printf (" => %i", ft_printf("%"));
//     return 0;
// }