/*                                                                                                   
** my_basicfct.c for push_swap in /home/bourge_v/rendu/CPE_2013_Pushswap                             
**                                                                                                   
** Made by bourge_v                                                                                  
** Login   <bourge_v@epitech.net>                                                                    
**                                                                                                   
** Started on  Sun Jan  5 15:37:49 2014 bourge_v                                                     
** Last update Sun Jan  5 15:37:51 2014 bourge_v                                                     
*/

int     my_putchar(char c)
{
  write(1, &c, 1);
  return (1);
}

int     my_putstr(char *str)
{
  write(1, str, my_strlen(str));
  return (1);
}

int     my_strlen(char *str)
{
  int   i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}

char    *my_strcat(char *dest, char *src)
{
  int   i;
  int   j;

  j = 0;
  i = my_strlen(dest);
  while (src[j])
    {
      dest[i] = src[j];
      i = i + 1;
      j = j + 1;
    }
  dest[i] = '\0';
  return (dest);
}

void    my_putnbr(int n)
{
  if (n == -2147483648)
    my_putstr("-2147483648");
  else if (n < 0)
    {
      my_putchar('-');
      n = n * -1;
      my_putnbr(n);
    }
  else if (n >= 10)
    {
      my_putnbr(n / 10);
      my_putnbr(n % 10);
    }
  else
    my_putchar(n + '0');
}
