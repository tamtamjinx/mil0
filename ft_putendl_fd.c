#include "libft.h"
#include <unistd.h>

void ft_putendl_fd(char *s, int fd)
{
    if (!s)
        return;
    (void)write(fd, s, ft_strlen(s));
    (void)write(fd, "\n", 1);
}
