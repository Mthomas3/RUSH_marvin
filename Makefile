##
## Makefile for  in /home/mart_4/rendu/1rush
## 
## Made by Thomas Martins
## Login   <mart_4@epitech.eu>
## 
## Started on  Fri Jan  2 23:29:25 2015 Thomas Martins
## Last update Fri Jan  2 23:29:25 2015 Thomas Martins
##

SRC	= main.c \
	small.c \
	last.c \
	my_check.c \
	my_check_option_two.c \
	my_check_two.c \
	my_check_three.c \
	my_check_four.c \
	my_check_option_three.c

OBJ	= $(SRC:.c=.o)

NAME	= marvin

RM	= rm -f

CFLAGS	= -W -Wall -ansi -pedantic

CC	= cc

all: $(NAME)

$(NAME): $(OBJ)
	 $(CC) -o $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
