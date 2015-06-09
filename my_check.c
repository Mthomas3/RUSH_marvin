/*
** my_check.c for  in /home/mart_4/rendu/1rush/ex_1
** 
** Made by Thomas Martins
** Login   <mart_4@epitech.eu>
** 
** Started on  Sat Jan  3 08:55:50 2015 Thomas Martins
** Last update Sat Jan  3 08:55:50 2015 Thomas Martins
*/

#include "struct.h"
#include <stdlib.h>
#include <stdio.h>

void	print_t(int c, t_mar *mar)
{
  if (c == 3)
    mar->type = "entier";
  else if (c == 4 && mar->str[3] == 'r')
    mar->type = "caractére";
  else if (c == 4 && mar->str[3] == 'g')
    mar->type = "long";
  else if (c == 5)
    mar->type = "short";
  else if (c == 13)
    mar->type = "statique double";
  else if (c == 12)
    mar->type = "statique flottant";
  else if (c == 9)
    mar->type = "constant(e) entier";
  else if (c == 7)
    mar->type = "long long";
  else if (c == 9)
    mar->type = "long long non signé";
  else if (c == 8 && mar->str[7] == 'd')
    mar->type = "unsigned";
  c = one_printf(c, mar);
  two_printf(c, mar);
  printf_name(c, mar);
}

void	printf_name(int c, t_mar *mar)
{
  int	p;

  p = 0;
  while (mar->str[c] != ';')
    {
      mar->var[p] = mar->str[c];
      p++;
      c++;
      if (mar->str[c] == '[')
	mar->str[c] = '\0';
    }
}

int	one_printf(int c, t_mar *mar)
{
  c++;
  if (mar->str[c] == '*' && mar->str[c + 1] == '*')
    {
      mar->ptr = "pointeur sur un pointeur sur ";
      c = c + 2;
    }
  else if (mar->str[c] == '*')
    {
      mar->ptr = "pointeur sur ";
      c++;
    }
  return (c);
}

void	two_printf(int c, t_mar *mar)
{
  while (mar->str[c] != '\0')
    c++;
  if (mar->str[c - 4] == '[' && mar->str[c - 3] == ']'
      && mar->str[c - 2] == '[' && mar->str[c - 1] == ']')
    mar->ptr = "pointeur sur un pointeur sur ";
  else if (mar->str[c - 2] == '[' && mar->str[c - 1] == ']')
    mar->ptr = "pointeur sur ";
}
