/*                                                                                                   
** my_list.c for push_swap in /home/bourge_v/rendu/CPE_2013_Pushswap                                 
**                                                                                                   
** Made by bourge_v                                                                                  
** Login   <bourge_v@epitech.net>                                                                    
**                                                                                                   
** Started on  Sat Jan  4 03:34:54 2014 bourge_v                                                     
** Last update Sun Jan  5 15:26:25 2014 bourge_v                                                     
*/

#include "push_swap.h"

t_list          *my_create_element(int value)
{
  t_list        *new_element;

  new_element = (t_list *)malloc(sizeof(t_list));
  new_element->value = value;
  new_element->next = NULL;
  new_element->prev = NULL;
  return (new_element);
}

t_list          *my_insert_element_end(t_list *list, int value)
{
  t_list        *tmp;
  t_list         *new_element;

  tmp = list;
  new_element = my_create_element(value);
  if (list == NULL)
    return (new_element);
  else
    {
      while (tmp->next != NULL)
        tmp = tmp->next;
      tmp->next = new_element;
      new_element->prev = tmp;
    }
  return (list);
}

t_list          *my_insert_element_first(t_list *list, int value)
{
  t_list        *tmp;
  t_list        *new_element;

  tmp = list;
  new_element = my_create_element(value);
  if (list == NULL)
    return (new_element);
  else
    {
      while (tmp->prev != NULL)
        tmp = tmp->prev;
      tmp->prev = new_element;
      new_element->next = tmp;
      list = list->prev;
    }
  return (list);
}

t_list          *my_last_element(t_list *l_tmp)
{
  while (l_tmp->next != NULL)
    l_tmp = l_tmp->next;
  return (l_tmp);
}
