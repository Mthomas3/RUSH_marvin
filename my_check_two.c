/*
** my_check_two.c for  in /home/mart_4/rendu/1rush/ex_1
** 
** Made by Thomas Martins
** Login   <mart_4@epitech.eu>
** 
** Started on  Sun Jan  4 10:18:25 2015 Thomas Martins
** Last update Sun Jan  4 10:18:25 2015 Thomas Martins
*/

#include "struct.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void    check_my_type_two(t_mar *mar, int c)
{
  if (mar->str[c + 1] == 'n' && mar->str[c + 2] == 's'
      && mar->str[c + 3] == 'i'
      && mar->str[c + 4] == 'g' && mar->str[c + 5] == 'n'
      && mar->str[c + 6] == 'e' && mar->str[c + 7] == 'd'
      && mar->str[c + 8] == ' ' && mar->str[c + 9] == 'i'
      && mar->str[c + 10] == 'n' && mar->str[c + 11] == 't'
      && mar->str[c + 12] == ' ')
    print_t_bis(c + 12, mar);
  else if (mar->str[c + 1] == 'o' && mar->str[c + 2] == 'i'
	   && mar->str[c + 3] == 'd' && mar->str[c + 4] == ' ')
    print_t_bis(c + 4, mar);
  else if (mar->str[c + 1] == 'l' && mar->str[c + 2] == 'o'
	   && mar->str[c + 3] == 'a' && mar->str[c + 4] == 't'
	   && mar->str[c + 5] == ' ')
    print_t_bis(c + 5, mar);
  else if (mar->str[c + 1] == 'o' && mar->str[c + 2] == 'u'
	   && mar->str[c + 3] == 'b'
	   && mar->str[c + 4] == 'l' && mar->str[c + 5] == 'e'
	   && mar->str[c + 6] == ' ')
    print_t_bis(c + 6, mar);
}

void    check_static(t_mar *mar, int c)
{
  if (mar->str[c + 7] == 'i' && mar->str[c + 8] == 'n'
      && mar->str[c + 9] == 't' && mar->str[c + 10] == ' ')
    print_static(c + 10, mar);
  else if (mar->str[c + 7] == 'c' && mar->str[c + 8] == 'h'
	   && mar->str[c + 9] == 'a' && mar->str[c + 10] == 'r'
	   && mar->str[c + 11] == ' ')
    print_static(c + 11, mar);
  else if (mar->str[c + 7] == 's' && mar->str[c + 8] == 'h'
           && mar->str[c + 9] == 'o' && mar->str[c + 10] == 'r'
           && mar->str[c + 11] == 't' && mar->str[c + 12] == ' ')
    print_static(c + 12, mar);
  else if (mar->str[c + 7] == 'd' && mar->str[c + 8] == 'o'
	   && mar->str[c + 9] == 'u' && mar->str[c + 10] == 'b'
	   && mar->str[c + 11] == 'l' && mar->str[c + 12] == 'e'
	   && mar->str[c + 13] == ' ')
    print_t(c + 13, mar);
  else if (mar->str[c + 7] == 'f' && mar->str[c + 8] == 'l'
	   && mar->str[c + 9] == 'o' && mar->str[c + 10] == 'a'
	   && mar->str[c + 11] == 't' && mar->str[c + 12] == ' ')
    print_t(c + 12, mar);
}

void    check_long(t_mar *mar, int c)
{
  if (mar->str[c + 1] == 'o' && mar->str[c + 2] == 'n'
      && mar->str[c + 3] == 'g'
      && mar->str[c + 4] == ' ' && mar->str[c + 5] != 'l')
    print_long(c + 4, mar);
  else if (mar->str[c + 1] == 'o' && mar->str[c + 2] == 'n'
           && mar->str[c + 3] == 'g' && mar->str[c + 4] == ' '
           && mar->str[c + 5] == 'l' && mar->str[c + 6] == 'o'
           && mar->str[c + 7] == 'n' && mar->str[c + 8] == 'g'
           && mar->str[c + 9] == ' ' && mar->str[c + 10] != 'i')
    print_long(c + 9, mar);
  else if (mar->str[c + 1] == 'o' && mar->str[c + 2] == 'n'
           && mar->str[c + 3] == 'g' && mar->str[c + 4] == ' '
           && mar->str[c + 5] == 'l' && mar->str[c + 6] == 'o'
           && mar->str[c + 7] == 'n' && mar->str[c + 8] == 'g'
           && mar->str[c + 9] == ' ' && mar->str[c + 10] == 'i'
           && mar->str[c + 11] == 'n' && mar->str[c + 12] == 't'
           && mar->str[c + 13] == ' ')
    print_long(c + 12, mar);
}

void    check_my_type(t_mar *mar)
{
  int   c;

  c = 0;
  if (mar->str[c] == 'i' || mar->str[c] == 'c' && mar->str[c + 1] == 'h'
      || mar->str[c] == 's' && mar->str[c + 1] == 'h')
    print_basic(mar, c);
  else if (mar->str[c] == 'l')
    check_long(mar, c);
  else if (mar->str[c] == 's' && mar->str[c + 1] == 't'
	   && mar->str[c + 2] == 'a' && mar->str[c + 3] == 't'
	   && mar->str[c + 4] == 'i' && mar->str[c + 5] == 'c'
	   && mar->str[c + 6] == ' ')
    check_static(mar, c);
  else if (mar->str[c] == 'c' && mar->str[c + 1] == 'o'
	   && mar->str[c + 2] == 'n' && mar->str[c + 3] == 's'
	   && mar->str[c + 4] == 't' && mar->str[c + 5] == ' ')
    check_const(mar, c);
  else if (mar->str[c] == 'u' || mar->str[c] == 'v' || mar->str[c] == 'f'
           || mar->str[c] == 'd')
    check_my_type_two(mar, c);
  printf("Déclaration de la variable de type %s%s nommé %s.\n",
         mar->ptr, mar->type, mar->var);
}

void    print_static(int c, t_mar *mar)
{
  if (c == 10)
    mar->type = "statique entier";
  if (c == 11)
    mar->type = "statique caractére";
  if (c == 12)
    mar->type = "statiqie short";
  c = one_printf(c, mar);
  two_printf(c, mar);
  printf_name(c, mar);
}
