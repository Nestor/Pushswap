/*                                                                                                   
** push_swap.c for push_swap in /home/bourge_v/rendu/CPE_2013_Pushswap                               
**                                                                                                   
** Made by bourge_v                                                                                  
** Login   <bourge_v@epitech.net>                                                                    
**                                                                                                   
** Started on  Sat Jan  4 03:50:35 2014 bourge_v                                                     
** Last update Sun Jan  5 15:34:13 2014 bourge_v                                                     
*/

#include "push_swap.h"

t_list          *my_swap_a(t_list *l_a, t_list *l_b)
{
  l_a->prev = l_a->next;
  ((l_a->next)->next)->prev = (l_a->next)->prev;
  l_a->next = (l_a->next)->next;
  (l_a->prev)->next = l_a;
  (l_a->prev)->prev = NULL;
  l_a = l_a->prev;
  if ((ascending(l_a) == 1) && l_b == NULL)
    my_putstr("sa\n");
  else
    my_putstr("sa ");
  return (l_a);
}

t_list          *my_swap_b(t_list *l_b)
{
  l_b->prev = l_b->next;
  if ((l_b->next)->next != NULL)
    {
      ((l_b->next)->next)->prev = (l_b->next)->prev;
      l_b->next = (l_b->next)->next;
      (l_b->prev)->next = l_b;
      (l_b->prev)->prev = NULL;
      l_b = l_b->prev;
    }
  else
    {
      (l_b->prev)->next = l_b;
      l_b->next = NULL;
      (l_b->prev)->prev = NULL;
      l_b = l_b->prev;
    }
  my_putstr("sb ");
  return (l_b);
}

void            my_push_a(t_list **l_a, t_list **l_b, t_flag *flag)
{
  flag->a = 0;
  *l_a = my_insert_element_first(*l_a, (*l_b)->value);
  if ((*l_b)->next != NULL)
    {
      *l_b = (*l_b)->next;
      (*l_b)->prev->next = NULL;
      (*l_b)->prev = NULL;
    }
  else
    {
      *l_b = NULL;
      flag->b = 1;
    }
  if ((ascending(*l_a) == 1) && *l_b == NULL)
    my_putstr("pa\n");
  else
    my_putstr("pa ");
}

void            my_push_b(t_list **l_a, t_list **l_b, t_flag *flag)
{
  flag->b = 0;
  *l_b = my_insert_element_first(*l_b, (*l_a)->value);
  if ((*l_a)->next != NULL)
    {
      *l_a = (*l_a)->next;
      (*l_a)->prev->next = NULL;
      (*l_a)->prev = NULL;
    }
  else
    *l_a = NULL;
  my_putstr("pb ");
}
