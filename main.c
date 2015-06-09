/*
** main.c for  in /home/mart_4/rendu/1rush/ex_1
** 
** Made by Thomas Martins
** Login   <mart_4@epitech.eu>
** 
** Started on  Sat Jan  3 08:54:14 2015 Thomas Martins
** Last update Sat Jan  3 08:54:14 2015 Thomas Martins
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "struct.h"

int	init(t_mar *mar, char **av)
{
  if ((mar->str = malloc(sizeof(av[1]))) == NULL)
    return (-1);
  if ((mar->var = malloc(sizeof(av[1]))) == NULL)
    return (-1);
  if ((mar->ptr = malloc(sizeof(100))) == NULL)
    return (-1);
  if ((mar->str_two = malloc(sizeof(av[1]))) == NULL)
    return (-1);
  return (0);
}

int	my_paren(t_mar *mar)
{
  int	a;
  int	b;
  int	c;

  a = 0;
  b = 0;
  c = 0;
  while (mar->str[a] != '\0')
    {
      a++;
      if (mar->str[a] == '(')
	b++;
      if (mar->str[a] == ')')
	c++;
    }
  if (b == c && b != 0 && c != 0)
    return (1);
  if (b == 0 && c == 0)
    marvin(mar);
  return (0);
}

void	find_vir(int ac, char **av)
{
  char	*str;
  int	a;

  (void)ac;
  str = av[1];
  a = 0;
  while (str[a] != '\0')
    a++;
  if (str[a - 1] != ';')
    {
      printf("[Error]: il manque une virgule à la fin\n");
      exit(1);
    }
}

int     nothing_param(t_mar *mar)
{
  int   a;
  int   b;
  int   c;

  a = 0;
  b = 0;
  c = 0;
  while (mar->str[a] != '\0')
    a++;
  if (mar->str[a] != '(')
    b++;
  if (mar->str[a] != ')')
    c++;
  if (b == c)
    return (1);
  else
    return (0);
}

int	main(int ac, char **av)
{
  t_mar	*mar;

  if (ac == 1)
    check_fail();
  if (ac > 2)
    check_fail();
  find_vir(ac, av);
  if ((mar = malloc(sizeof(*mar))) == NULL)
    return (1);
  if (init(mar, av) == -1)
    return (1);
  my_check(ac, av);
  mar->str = av[1];
  if (my_paren(mar) == 1)
    print_option(ac, av);
  free_all(mar);
  return (0);
}
