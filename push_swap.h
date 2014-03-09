/*                                                                                                   
** push_swap.h for push_swap in /home/bourge_v/rendu/CPE_2013_Pushswap                               
**                                                                                                   
** Made by bourge_v                                                                                  
** Login   <bourge_v@epitech.net>                                                                    
**                                                                                                   
** Started on  Sat Jan  4 03:46:58 2014 bourge_v                                                     
** Last update Sun Jan  5 15:28:12 2014 bourge_v                                                     
*/

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>

typedef struct          s_list
{
  int                   value;
  struct s_list         *prev;
  struct s_list         *next;
}                       t_list;

typedef struct          s_flag
{
  int                   a;
  int                   b;
  int                   ok;
}                       t_flag;

int                     my_ascending(t_list *l_a);
int                     my_descending(t_list *l_b);
void                    my_init_flag(t_flag *flag);
void                    my_sort(t_list *l_a);
void                    my_sort_b(t_list **l_b, t_flag *flag);
t_list                  *my_last_element(t_list *l_tmp);
t_list                  *my_insert_element_end(t_list *list, int value);
t_list                  *my_insert_element_first(t_list *list, int value);
t_list                  *my_rotate_a(t_list *l_a, t_list *l_b);
t_list                  *my_rotate_b(t_list *l_b);
t_list                  *my_swap_a(t_list *l_a, t_list *l_b);
t_list                  *my_swap_b(t_list *l_b);
void                    my_push_a(t_list **l_a, t_list **l_b, t_flag *flag);
void                    my_push_b(t_list **l_a, t_list **l_b, t_flag *flag);
void                    my_print_all(t_list *l_a, t_list *l_b);
int                     ft_check_param(char *argv);

#endif /* !PUSH_SWAP_H */
