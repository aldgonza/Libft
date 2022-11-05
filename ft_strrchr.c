/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldgonza <aldgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 17:15:39 by aldgonza          #+#    #+#             */
/*   Updated: 2022/05/16 15:05:12 by aldgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	size_t	i;

	i = ft_strlen(str);
	while (i > 0)
	{
		if (str[i] == (char ) ch)
			return ((char *)&str[i]);
		i--;
	}
	if (str[0] == (char ) ch)
		return ((char *)&str[i]);
	return (0);
}
