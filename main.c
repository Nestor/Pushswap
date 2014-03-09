/*                                                                                                   
** main.c for push_swap in /home/bourge_v/rendu/CPE_2013_Pushswap                                    
**                                                                                                   
** Made by bourge_v                                                                                  
** Login   <bourge_v@epitech.net>                                                                    
**                                                                                                   
** Started on  Sat Jan  4 03:36:08 2014 bourge_v                                                     
** Last update Sun Jan  5 15:33:16 2014 bourge_v                                                     
*/

#include "push_swap.h"

int             main(int argc, char **argv)
{
  t_list        *l_a;
  int           i;

  l_a = NULL;
  i = 1;
  if (argc == 2 && my_check_param(argv[i]) == 0)
    my_putstr("error : wrong argument\n");
  if (argc > 2)
    {
      while (argv[i])
        {
          if (my_check_param(argv[i]) == 0)
            {
              my_putstr("error : wrong argument\n");
              return (0);
            }
          l_a = my_insert_element_end(l_a, my_atoi(argv[i]));
          i++;
        }
      my_sort(l_a);
    }
  return (0);
}

int             my_check_param(char *argv)
{
  int           i;

  i = 0;
  while (argv[i] != '\0')
    {
      if (argv[i] == '-' && my_isdigit(argv[i + 1]) == 0)
        return (0);
      if (argv[i] == '+' && my_isdigit(argv[i + 1]) == 0)
        return (0);
      if (my_isdigit(argv[i]) == 0)
        {
          if (argv[i] != '-' && argv[i] != '+')
            return (0);
        }
      i++;
    }
  return (1);
}
