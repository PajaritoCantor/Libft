#include <stdio.h>
#include <string.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t  needle_len;
    size_t  haystack_len;

    if (!needle)
        return ((char *)haystack);
    if (len == 0)
        return (NULL);
    needle_len = ft_strlen(needle);
    haystack_len = ft_strlen(haystack);
    if (len > haystack_len)
            len = haystack_len;
    while (len >= needle_len)
        {
            if (ft_strncmp(haystack, needle_len) == 0)
                return ((char *)haystack);
            haystack++;
            len--;
        }
        return (NULL);
}
int main ()
{
    char haystack [] = "Perritos y palomas cagando";
    char needle[] = "cagan";

    char *cagan = ft_strnstr(haystack, needle);

    printf("cagan: %s\n", cagan);

    return 0;


}