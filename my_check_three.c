/*
** my_check_three.c for  in /home/mart_4/rendu/1rush/ex_1
** 
** Made by Thomas Martins
** Login   <mart_4@epitech.eu>
** 
** Started on  Sun Jan  4 10:23:42 2015 Thomas Martins
** Last update Sun Jan  4 10:23:42 2015 Thomas Martins
*/

#include "struct.h"
#include <stdlib.h>
#include <stdio.h>

void    print_long(int c, t_mar *mar)
{
  if (c == 4)
    mar->type = "entier long";
  if (c == 9)
    mar->type = "entier long long";
  if (c == 12)
    mar->type = "long long entier";
  c = one_printf(c, mar);
  two_printf(c, mar);
  printf_name(c, mar);
}

void    print_t_bis(int c, t_mar *mar)
{
  if (c == 12)
    mar->type = "entier stantard";
  if (c == 4)
    mar->type = "générique";
  if (c == 5)
    mar->type = "flottant";
  if (c == 6)
    mar->type = "double";
  c = one_printf(c, mar);
  two_printf(c, mar);
  printf_name(c, mar);
}
