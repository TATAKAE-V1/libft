/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarhat <ofarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 03:30:37 by ofarhat           #+#    #+#             */
/*   Updated: 2022/11/03 21:59:34 by ofarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	cc;
	char	*ss;
	int		i;

	cc = (char)c;
	ss = (char *)s;
	i = (ft_strlen(ss));
	while (i >= 0)
	{
		if (ss[i] == cc)
			return (&ss[i]);
		i--;
	}
	return (NULL);
}
