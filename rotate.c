/*                                                                                                   
** rotate.c for push_swap in /home/bourge_v/rendu/CPE_2013_Pushswap                                  
**                                                                                                   
** Made by bourge_v                                                                                  
** Login   <bourge_v@epitech.net>                                                                    
**                                                                                                   
** Started on  Sat Jan  4 03:48:24 2014 bourge_v                                                     
** Last update Sun Jan  5 15:35:06 2014 bourge_v                                                     
*/

#include "push_swap.h"

int             ascending(t_list *l_a)
{
  if (l_a == NULL)
    return (0);
  while (l_a->value < (l_a->next)->value)
    {
      l_a = l_a->next;
      if (l_a->next == NULL)
        return (1);
    }
  return (0);
}

int             descending(t_list *l_b)
{
  if (l_b == NULL)
    return (1);
  while (l_b->value > (l_b->next)->value)
    {
      l_b = l_b->next;
      if (l_b->next == NULL)
        return (1);
    }
  return (0);
}

t_list          *my_rotate_a(t_list *l_a, t_list *l_b)
{
  t_list        *last;

  last = my_last_element(l_a);
  last->next = l_a;
  (l_a->next)->prev = NULL;
  l_a->next = NULL;
  l_a->prev = last;
  while (l_a->prev != NULL)
    l_a = l_a->prev;
  if ((ascending(l_a) == 1) && l_b == NULL)
    my_putstr("ra\n");
  else
    my_putstr("ra ");
  return (l_a);
}

t_list          *my_rotate_b(t_list *l_b)
{
  t_list        *last;

  last = my_last_element(l_b);
  last->next = l_b;
  (l_b->next)->prev = NULL;
  l_b->prev = last;
  l_b->next = NULL;
  while (l_b->prev != NULL)
    l_b = l_b->prev;
  my_putstr("rb ");
  return (l_b);
}
