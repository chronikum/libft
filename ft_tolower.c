/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 10:18:12 by jfritz            #+#    #+#             */
/*   Updated: 2021/06/15 10:56:52 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int a)
{
	if ((a >= 65 && a <= 90))
		(a += 32);
	return (a);
}
