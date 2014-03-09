##                                                                                                   
## Makefile for bsq in /home/bourge_v/rendu/CPE-2013-BSQ                                             
##                                                                                                   
## Made by bourge_v                                                                                  
## Login   <bourge_v@epitech.net>                                                                    
##                                                                                                   
## Started on  Sun Dec  8 23:03:04 2013 bourge_v                                                     
## Last update Sun Jan  5 15:28:41 2014 bourge_v                                                     
##                                                                                                   

CC      = cc

RM      = rm -rf

SRC     = my_list.c \
          my_basicfct.c \
          my_basicfct2.c \
          my_sort.c \
          push_swap.c \
          rotate.c \
          main.c

NAME    = push_swap

OBJ     = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
        $(CC) -o $(NAME) $(SRC)

clean:
        $(RM) $(OBJ)

fclean: clean
        $(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
