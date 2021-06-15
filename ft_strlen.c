/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 10:01:01 by jfritz            #+#    #+#             */
/*   Updated: 2021/06/15 10:17:33 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *c)
{
	int	n;

	n = 0;
	while (c[n] != '\0')
		n++;
	return (n);
}