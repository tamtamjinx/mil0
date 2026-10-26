#include "libft.h"

int    ft_atoi(const char *nptr)
{
    int    sign;
    long    result;
    int    i;
    
    i = 0;
    sign = 1;
    result = 0;
    while (nptr[i] == ' ' || (nptr[i] >= '\t' && nptr[i] <= '\r'))
        i++;
    if (nptr[i] == '-' || nptr[i] == '+')
    {
        if (nptr[i] == '-')
            sign = -1;
        i++;
    }
    while (nptr[i] >= '0' && nptr[i] <= '9')
    {
        result = result * 10 + (nptr[i] - '0');
        i++;
    }
    return ((int)(result * sign));
}
