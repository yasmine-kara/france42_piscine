//ft_putstr
#include<unistd.h>
void    ft_putstr(char *str)
{
    int n = 0;
    while(str[n] != '\0')
    {
        write(1,&str[n],1);
        //or write(1,str,1);
        n++;
    }
}