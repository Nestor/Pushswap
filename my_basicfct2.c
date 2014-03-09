/*                                                                                                   
** my_basicfct2.c for push_swap in /home/bourge_v/rendu/CPE_2013_Pushswap                            
**                                                                                                   
** Made by bourge_v                                                                                  
** Login   <bourge_v@epitech.net>                                                                    
**                                                                                                   
** Started on  Sun Jan  5 15:23:51 2014 bourge_v                                                     
** Last update Sun Jan  5 15:23:55 2014 bourge_v                                                     
*/

int     my_atoi(char *str)
{
  int   i;

  i = 0;
  while (*str)
    {
      if (*str >= '0' && *str <= '9')
        {
          i *= 10;
          i += *str - '0';
        }
      else
        return (i);
      str++;
    }
  return (i);
}

int     my_isdigit(int c)
{
  if (c >= '0' && c <= '9')
    return (1);
  else
    return (0);
}
