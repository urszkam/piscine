unsigned int    ft_strlen(char *str)
{
    unsigned int    i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

unsigned int    ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int    len_d;
    unsigned int    len_s;
    unsigned int    i;
    
    len_d = ft_strlen(dest);
    len_s = ft_strlen(src);
    i = 0;
    if (size > len_d)
    {
        while (src[i] && i < size - len_d - 1)
        {
            dest[len_d + i] = src[i];
            i++;
        }
        dest[len_d + i] = '\0';
        return (len_d + len_s);
    }
    return (size + len_s);
}