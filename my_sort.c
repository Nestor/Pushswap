/*                                                                                                   
** my_sort.c for push_swap in /home/bourge_v/rendu/CPE_2013_Pushswap                                 
**                                                                                                   
** Made by bourge_v                                                                                  
** Login   <bourge_v@epitech.net>                                                                    
**                                                                                                   
** Started on  Sat Jan  4 03:46:19 2014 bourge_v                                                     
** Last update Sun Jan  5 15:30:19 2014 bourge_v                                                     
*/

#include "push_swap.h"

void            my_sort(t_list *l_a)
{
  t_list        *l_b;
  t_flag        flag;

  l_b = NULL;
  my_init_flag(&flag);
  while (flag.ok == 0)
    {
      if (l_a->value > (my_last_element(l_a))->value)
        l_a = my_rotate_a(l_a, l_b);
      if (l_a->value > (l_a->next)->value)
        l_a = my_swap_a(l_a, l_b);
      flag.a = ascending(l_a);
      if (flag.a == 0 && (l_a->value < (l_a->next)->value))
        {
          my_push_b(&l_a, &l_b, &flag);
          my_sort_b(&(l_b), &flag);
        }
      while (flag.a == 1 && l_b != NULL)
        {
          my_push_a(&l_a, &l_b, &flag);
          flag.a = ascending(l_a);
        }
      if (flag.a == 1 && flag.b == 1 && l_b == NULL)
        flag.ok = 1;
    }
}

void            my_sort_b(t_list **l_b, t_flag *flag)
{
  if ((*l_b)->next != NULL)
    {
      if ((*l_b)->value < (my_last_element(*l_b))->value)
        *l_b = my_rotate_b(*l_b);
      if ((*l_b)->value < ((*l_b)->next)->value)
        (*l_b) = my_swap_b(*l_b);
      flag->b = descending(*l_b);
    }
  if ((*l_b)->next == NULL)
    flag->b = 1;
}

void            my_init_flag(t_flag *flag)
{
  flag->a = 0;
  flag->b = 1;
  flag->ok = 0;
}

void            my_print_all(t_list *l_a, t_list *l_b)
{
  my_putstr("\nl_a = ");
  while (l_a != NULL)
    {
      my_putnbr(l_a->value);
      my_putchar(' ');
      l_a = l_a->next;
    }
  my_putstr("\nl_b = ");
  while (l_b != NULL)
    {
      my_putnbr(l_b->value);
      my_putchar(' ');
      l_b = l_b->next;
    }
}
