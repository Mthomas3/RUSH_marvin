/*
** my_check_option_three.c for  in /home/mart_4/rendu/marvin
** 
** Made by Thomas Martins
** Login   <mart_4@epitech.eu>
** 
** Started on  Sun Jan  4 15:37:58 2015 Thomas Martins
** Last update Sun Jan  4 15:37:58 2015 Thomas Martins
*/

#include <stdio.h>
#include "struct.h"

int	my_check_comma(int ac, char **av)
{
  char	*str;
  int	a;
  int	b;

  b = 0;
  a = 0;
  (void)ac;
  str = av[1];
  while (str[a] != '\0')
    {
      a++;
      if (str[a] == ',')
	b = b + 1;
    }
  if (b > 0)
    return (1);
  return (0);
}
