/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 16:47:09 by jfritz            #+#    #+#             */
/*   Updated: 2021/06/17 16:48:24 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;
	int				f;
	unsigned char	*t1;
	unsigned char	*t2;

	i = 0;
	f = 0;
	t1 = (unsigned char *) s1;
	s2 = (unsigned char *) s2;
	while (f == 0 && (i < n) && (n != 0))
	{
		if (n > i)
			return (f);
		if (t1[i] > t2[i])
			f = 1;
		else if (t1[i] < t2[i])
			f = -1;
		i++;
	}
	return (f);
}