/*
** my_check_option_two.c for  in /home/mart_4/rendu/1rush/ex_1
** 
** Made by Thomas Martins
** Login   <mart_4@epitech.eu>
** 
** Started on  Sat Jan  3 11:38:05 2015 Thomas Martins
** Last update Sat Jan  3 11:38:05 2015 Thomas Martins
*/

#include <stdlib.h>
#include <stdio.h>
#include "struct.h"
#include <string.h>

int	print_option(int ac, char **av)
{
  char	*str;
  int	a;

  str = av[1];
  (void)ac;
  a = 0;
  if (word(av[1]) > 2)
    {
      printf("Déclaration de la fonction %s qui prend en paramètre ",
	     say(av[1], 2));
      while (a < word(av[1]) - 2)
	{
	  if (a != 0)
	    printf("et ");
	  else
	    printf("un %s nommé %s ", my_type(say(av[1], 3 + a)),
		   say(av[1], 4 + a));
	  if (my_check_comma(ac, av) == 1 && a != 0)
	    printf(" %s nommé %s ", my_type(say(av[1], 3 + a)),
	  	   say(av[1], 4 + a));
	  a += 2;
	}
      printf("et retourne un %s.\n", my_type(say(av[1], 1)));
    }
  return (0);
}

char	*my_type(char *type)
{
  if (strcmp(type, "void") == 0)
    return ("générique");
  if (strcmp(type, "int") == 0)
    return ("entier");
  if (strcmp(type, "char") == 0)
    return ("caractére");
  if (strcmp(type, "float") == 0)
    return ("flottant");
  if (strcmp(type, "double") == 0)
    return ("double");
  if (strcmp(type, "unsigned int") == 0)
    return ("unsigned int");
  if (strcmp(type, "long") == 0)
    return ("long");
  return (type);
}

char	*say(char *str, int a)
{
  int	x;
  int	b;
  int	i;
  char	*str_two;

  x = 0;
  b = 0;
  i = 0;
  if ((str_two = malloc(say_size(str, a) * sizeof(*str_two))) == NULL)
    return (NULL);
  while (str[x] != '\0')
    {
      if (test(str[x]))
	b++;
      while (test(str[x]))
	{
	  if (b == a)
	    str_two[i++] = str[x];
	  x++;
	}
      x++;
    }
  str_two[i] = '\0';
  return (str_two);
}
