/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogenc <ogenc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 22:22:59 by ogenc             #+#    #+#             */
/*   Updated: 2023/05/09 22:30:45 by ogenc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	ft_up(t_list *list, char c)
{
	int	i;

	i = 0;
	if (c == 'a')
	{
		while (list->a_len >= i)
		{
			list->a[list->a_len - i + 1] = list->a[list->a_len - i];
			i++;
		}
	}
	else if (c == 'b')
	{
		while (list->b_len >= i)
		{
			list->b[list->b_len - i + 1] = list->b[list->b_len - i];
			i++;
		}
	}
}

void	ft_down(t_list *list, char c)
{
	int	i;

	i = 0;
	if (c == 'a')
	{
		while (list->a_len > i)
		{
			list->a[i] = list->a[i + 1];
			i++;
		}
	}
	else if (c == 'b')
	{
		while (list->b_len > i)
		{
			list->b[i] = list->b[i + 1];
			i++;
		}
	}
}

void	sa(t_list *list)
{
	int	temp;

	if (list->a_len > 1)
	{
		temp = list->a[0];
		list->a[0] = list->a[1];
		list->a[1] = temp;
		ft_printf("sa\n");
	}
}

void	sb(t_list *list)
{
	int	temp;

	if (list->b_len > 1)
	{
		temp = list->b[0];
		list->b[0] = list->b[1];
		list->b[1] = temp;
		ft_printf("sb\n");
	}
}

void	ss(t_list *list)
{
	int	temp;

	if (list->a_len > 1)
	{
		temp = list->a[0];
		list->a[0] = list->a[1];
		list->a[1] = temp;
	}
	if (list->b_len > 1)
	{
		temp = list->b[0];
		list->b[0] = list->b[1];
		list->b[1] = temp;
		ft_printf("ss\n");
	}
}

void	pa(t_list *list)
{
	if (list->b_len != 0)
	{
		ft_up(list, 'a');
		list->a[0] = list->b[0];
		list->a_len++;
		ft_down(list, 'b');
		list->b_len--;
		ft_printf("pa\n");
	}
}

void	pb(t_list *list)
{
	if (list->a_len != 0)
	{
		ft_up(list, 'b');
		list->b[0] = list->a[0];
		list->b_len++;
		ft_down(list, 'a');
		list->a_len--;
		ft_printf("pb\n");
	}
}

void	ra(t_list *list)
{
	int	temp;

	if (list->a_len != 0)
	{
		temp = list->a[0];
		ft_down(list, 'a');
		list->a[list->a_len - 1] = temp;
		ft_printf("ra\n");
	}
}

void	rb(t_list *list)
{
	int	temp;

	if (list->b_len != 0)
	{
		temp = list->b[0];
		ft_down(list, 'b');
		list->b[list->b_len - 1] = temp;
		ft_printf("rb\n");
	}
}

void	rr(t_list *list)
{
	int	temp;

	if (list->a_len != 0)
	{
		temp = list->a[0];
		ft_down(list, 'a');
		list->a[list->a_len - 1] = temp;
	}
	if (list->b_len != 0)
	{
		temp = list->b[0];
		ft_down(list, 'b');
		list->b[list->b_len - 1] = temp;
		ft_printf("rr\n");
	}
}

void	rra(t_list *list)
{
	int	temp;

	if (list->a_len != 0)
	{
		temp = list->a[list->a_len - 1];
		ft_up(list, 'a');
		list->a[0] = temp;
		ft_printf("rra\n");
	}
}

void	rrb(t_list *list)
{
	int	temp;

	if (list->b_len != 0)
	{
		temp = list->b[list->b_len - 1];
		ft_up(list, 'b');
		list->b[0] = temp;
		ft_printf("rrb\n");
	}
}