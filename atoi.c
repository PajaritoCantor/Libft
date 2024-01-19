#include<stdio.h>

int ft_atoi(const char *str)
{
    int sign;
    int value;

    while (*str == ' ' || (*str >= '\t' && <= '\r'))
    str++;

    if (*str == '-' || *str == '+')
        sign = 44 - *str++;

    while (ft_isdigit(*str))
    value = value * 10 +(*str++ - '0');

    return (sign * value);
}