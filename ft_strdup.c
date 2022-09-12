/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldgonza <aldgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 17:15:02 by aldgonza          #+#    #+#             */
/*   Updated: 2022/05/19 14:04:57 by aldgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	strl;
	char	*sdup;

	strl = ft_strlen(s);
	sdup = (char *)malloc(strl + 1);
	if (sdup != NULL)
	{
		ft_strlcpy(sdup, (char *)s, strl + 1);
		return (sdup);
	}
	return (0);
}
