/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulmoud <ooulmoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 10:59:43 by ooulmoud          #+#    #+#             */
/*   Updated: 2024/06/30 15:05:44 by ooulmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

typedef struct s_list
{
	int		content;
	void	*next;
	int		index;
}			t_list;

typedef struct s_data
{
	int		*d;
	int		*p;
}			t_data;

// split.c
void		ft_bzero(void *b, size_t n);
void		*ft_calloc(size_t count, size_t size);
char		*copy(const char *s, int j, int k);
int			coun_word(char const *s, char c);
int			free_memory(char **s);
char		**ft_split(char const *s, char c);

// main_utils1
int			check_n(t_list *stack, int n);
void		free_stack(t_list *lst);
int			add_to_stack(t_list **stack, char **ar);
void		tree_sort(t_list **stack);
void		free_stack1(t_list *lst);

// main_utils2
int			index_of_min(t_list *stack, size_t size);
void		sort(t_list **stack_a, size_t size);
int			*stack_to_arry(t_list *lst, size_t size);
int			check_sort(t_list *list);
void		two_sort(t_list *stack);

// main_utils2
void		move_min_nbr(t_list **stack_a, int i);
int			binary_search(int *arr, int low, int high, int x);
void		make_rotate(t_list **stack_a, size_t i, size_t size);
void		push_tob(int *lis, t_list **stack_a, t_list **stack_b, int size);

// main
void		puch_not_lis(t_list **stack_a, t_list **stack_b);
int			free_memory1(char **s);
t_list		*split_space(char *av[], int ac);
void		two_sort(t_list *stack);
int			check_tow_tree(t_list *stack_a);

// parcing
int		check_alpha(char *str, char  **ar);
int			check_n(t_list *stack, int n);
void		test_args(char *av[], int ac);

// ft_atoi
int			test(int d);
long		ft_atoi(const char *str);

// lis_util1
int			*fill_arry(size_t sizeOfStack, int value);
int			*stack_to_arr(t_list *stack);
void		ft_lstadd_front(t_list **lst, t_list *neew);

// lis_util2
int			ft_lstsize(t_list *lst);
void		check_lis1(int n, int *d, int *p, int *sta);
int			check_lis2(int *d, int n, int i);
void		ft_lstadd_back(t_list **lst, t_list *neew);
t_list		*ft_lstnew(int content);

// lis.c
t_list		*find_lis(t_list *stack);

// global_utils1.c
size_t		get_abs(int nbr);
int			get_bigone(int x, int y);
int			get_small(int a, int b);
t_list		*get_the_last(t_list *head);
t_list		*get_the_befor_last(t_list *head);

// global_utils2.c
void		ft_bzero(void *s, size_t n);

// global_utils3.c
size_t		abs_value(int n);
int			max(int a, int b);
int			min(int a, int b);
int			lent_of_stack(t_list *head);
int			find_the_middel_of_stack(t_list *head);

// global_utils4.c
t_list		*element_in_middel(t_list *head);
t_list		*find_the_smaller_number(t_list *head);
int			index_small(t_list *head);
void		ft_lstdelone(t_list *lst);
void		ft_lstclear(t_list **lst);

// moves.c
int			index_of_node(t_list *head, int content);
int			number_of_moves(t_list *head, int content);

// push_to_a.c
void		push_to_a(t_list **head1, t_list **head2);

// push_to_b.c
void		push_to_b(t_list **head_a, t_list **head_b);

// retate_a.c
void		retate_a(t_list **head);

// retate_ab.c
void		retate_ab(t_list **head1, t_list **head2);

// retate_b.c
void		retate_b(t_list **head);

// retate_revers_a.c
void		retate_revers_a(t_list **head1);

// retate_revers_ab.c
void		retate_revers_ab(t_list **head1, t_list **head2);

// retate_revers_b.c
void		retate_revers_b(t_list **head2);

// swap_value_in_a
void		swap_value_in_a(t_list *head);

// swap_value_in_ab
void		swap_value_in_ab(t_list *head1, t_list *head2);

// swap_value_in_a
void		swap_value_in_b(t_list *head);

// get_bestmove.c
int			get_indexmaxnbr(int *arry, size_t size);
int			get_position(int *arry, int *nbr, size_t size);
int			*initialize_move(int *arry, void *ptr, size_t size_a);
int			*get_bestmove(int *arry, t_list *stack_b, size_t size_a,
				size_t size_b);

// make_themove.c
void		positive_moves(t_list **stack_a, t_list **stack_b, int i, int j);
void		negative_moves(t_list **stack_a, t_list **stack_b, int i, int j);
void		pos_i_neg_j(t_list **stack_a, t_list **stack_b, int i, int j);
void		make_themove(t_list **stack_a, t_list **stack_b, int *mv);

// mix_move.c
void		mix_move(int a, int b, int *mv);

// negative_move.c
void		negative_move(int a, int b, int *mv);

// positive_move.c
void		positve_move(int a, int b, int *mv);

#endif
