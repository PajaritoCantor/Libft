#include <string.h>
#include <stdio.h>

size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t  dst_len;
    size_t  src_len;

    src_len = ft_strlen(src);

    if (dstsize == 0)
        return (src_len);

    dst_len = ft_strlen(dst);

    if (dst_len >= dstsize)
        return (src_len + dstsize);

    dst += dst_len;
    dstsize -= dst_len;
    while (*src && --dstsize)
        *dst++ = *src++;
    *dst = '\0';
    return (dst_len + src_len);
}
int main ();
{
    char dest[20] = "Michis peluditos";
    char src [] = "Ronroneando";

    ft_strlcat(dest, src, sizeof(dest));

    return 0; 
}