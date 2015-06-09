/*
** struct.h for  in /home/mart_4/rendu/1rush/ex_1
** 
** Made by Thomas Martins
** Login   <mart_4@epitech.eu>
** 
** Started on  Sat Jan  3 08:57:24 2015 Thomas Martins
** Last update Sat Jan  3 08:57:24 2015 Thomas Martins
*/

#ifndef STRUCT_H_
# define STRUCT_H_

typedef	struct s_mar
{
  char		*type;
  char		*var;
  char		*str;
  char		*ptr;
  char		*str_two;
  int		i;
}		t_mar;

typedef struct	s_op
{
  char		*str;
  char		*str_two;
}		t_op;

void		print_basic(t_mar *mar, int c);
void		check_fail(void);
int		my_paren(t_mar *mar);
void		free_all(t_mar *mar);
int		main(int ac, char **av);
void		marvin(t_mar *mar);
void		print_t(int c, t_mar *mar);
void		printf_name(int c, t_mar *mar);
int		one_printf(int c, t_mar *mar);
void		two_printf(int c, t_mar *mar);
void		check_my_type(t_mar *mar);
int		init(t_mar *mar, char **av);
int		print_option(int ac, char **av);
int		test(char c);
int		word(char *str);
int		say_size(char *str, int a);
char		*my_type(char *type);
char		*say(char *str, int a);
void		print_t_bis(int c, t_mar *mar);
void		check_long(t_mar *mar, int c);
void		print_long(int c, t_mar *mar);
void		check_static(t_mar *mar, int c);
void		print_static(int c, t_mar *mar);
void		my_check(int ac, char **av);
int		my_check_first(int ac, char **av);
void		my_putchar(char c);
void		param_fail(void);
void		fail_error(void);
void		check_my_type_two(t_mar *mar, int c);
void		find_vir(int ac, char **av);
int		nothing_param(t_mar *mar);
void		call_funct_one(int ac, char **av);
void		call_funct_two(int ac, char **av, t_mar *mar);
int		my_check_comma(int ac, char **av);
void		check_const(t_mar *mar, int c);

#endif
