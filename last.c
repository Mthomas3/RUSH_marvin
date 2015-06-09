/*
** last.c for  in /home/mart_4/rendu/marvin
** 
** Made by Thomas Martins
** Login   <mart_4@epitech.eu>
** 
** Started on  Sun Jan  4 13:21:47 2015 Thomas Martins
** Last update Sun Jan  4 13:21:47 2015 Thomas Martins
*/

#include <unistd.h>
#include <stdio.h>
#include "struct.h"
#include <stdlib.h>

void	free_all(t_mar *mar)
{
  free(mar->str_two);
  free(mar->var);
}

int     word(char *str)
{
  int   a;
  int   b;

  a = 0;
  b = 0;
  while (str[a] != '\0')
    {
      if (test(str[a]))
        b++;
      while (test(str[a]))
        a++;
      a++;
    }
  return (b);
}

int     say_size(char *str, int a)
{
  int   b;
  int   c;
  int   l;

  b = 0;
  c = 0;
  l = 0;
  while (str[b] != '\0')
    {
      if (test(str[b]))
        c++;
      while (test(str[b]))
        {
          if (c == a && str[b] != ';')
            l++;
          b++;
        }
      b++;
    }
  return (l);
}

int	test(char c)
{
  {
    if (c != '(' && c != ')' && c != ',' && c != ';' && (c >= 33 && c <= 126))
      return (1);
    return (0);
  }
}
