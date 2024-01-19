#include <string.h>
#include <stdio.h>

size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t  src_len;
    size_t i;

    src_len = ft_strlen(src);
    i = 0;
    if (dstsize > 0)
    {
        while (src[i] && i < dstsize - 1)
        {
            dst[i] = src[i];
            i++;
        }
        dst[i] = '\0';
    }
        return (src_len);
}