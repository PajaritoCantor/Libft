#include <stdio.h>

void    *ft_calloc(size_t count, size_t size);
{
    size_t  total_size;

    total_size = count * size;

    if (count != 0 && total_size / count != size)
    {
        return NULL;
    }
    
    void *ptr = malloc(total size);

    if (ptr != NULL)

        ft_bzero(ptr, total_size);

    {
        return ptr;
    }

}