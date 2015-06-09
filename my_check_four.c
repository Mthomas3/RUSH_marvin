/*
** my_check_four.c for  in /home/mart_4/rendu/marvin
** 
** Made by Thomas Martins
** Login   <mart_4@epitech.eu>
** 
** Started on  Sun Jan  4 21:57:30 2015 Thomas Martins
** Last update Sun Jan  4 21:57:30 2015 Thomas Martins
*/

#include "struct.h"

void    print_basic(t_mar *mar, int c)
{
  if (mar->str[c + 1] == 'n' && mar->str[c + 2] == 't'
      && mar->str[c + 3] == ' ')
    print_t(c + 3, mar);
  else if (mar->str[c + 2] == 'a'
           && mar->str[c + 3] == 'r' && mar->str[c + 4] == ' ')
    print_t(c + 4, mar);
  else if (mar->str[c + 2] == 'o' && mar->str[c + 3] == 'r'
           && mar->str[c + 4] == 't' && mar->str[c + 5] == ' ')
    print_t(c + 5, mar);
}

void    print_const(int c, t_mar *mar)
{
  if (c == 12)
    mar->type = "constant(e) flottant(e)";
  c = one_printf(c, mar);
  two_printf(c, mar);
  printf_name(c, mar);
}

void    check_const(t_mar *mar, int c)
{
  if (mar->str[c + 6] == 'i' && mar->str[c + 7] == 'n'
      && mar->str[c + 8] == 't'
      && mar->str[c + 9] == ' ')
    print_t(c + 9, mar);
}

