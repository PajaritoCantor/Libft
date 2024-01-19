
#include <string.h>
#include <stdios.h>

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    unsigned char *d;
    unsigned char *s;

    if (!dst && !src)
        return (NULL);
    d = (unsigned char *)dst;
    s = (unsigned char *)src;
    while (n--)
        *d++ = *s++;
    return (dst);
}