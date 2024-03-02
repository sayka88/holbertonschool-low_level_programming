#include <stddef.h>

char *_strncat(char *dest, char *src, int n)
{
    char *ptr_dest = dest;

    while (*ptr_dest != '\0')
    {
        ptr_dest++;
    }

    while (*src != '\0' && n > 0)
    {
        *ptr_dest = *src;
        ptr_dest++;
        src++;
        n--;
    }

    *ptr_dest = '\0';

    return (dest);
}
