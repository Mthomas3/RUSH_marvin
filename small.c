/*
** error.c for  in /home/mart_4/rendu/1rush/ex_1
** 
** Made by Thomas Martins
** Login   <mart_4@epitech.eu>
** 
** Started on  Sun Jan  4 10:10:17 2015 Thomas Martins
** Last update Sun Jan  4 10:10:17 2015 Thomas Martins
*/

#include <unistd.h>
#include <stdlib.h>
#include "struct.h"
#include <stdio.h>

void	check_fail(void)
{
  printf("\n");
  exit(1);
}

void	param_fail(void)
{
  printf("veuillez revoir vos paranthèse, merci.\n");
  exit(1);
}

void	fail_error(void)
{
  printf("pas de virgule à la fin\n");
  exit(1);
}

void	marvin(t_mar *mar)
{
  check_my_type(mar);
}

void	my_check(int ac, char **av)
{
  char	*str;
  int	a;

  a = 0;
  (void)ac;
  str = av[1];
  if (str[a] == ' ')
    {
      printf("Espace avant déclaration\n");
      exit(1);
    }
}
