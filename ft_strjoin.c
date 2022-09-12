/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldgonza <aldgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 20:36:39 by aldgonza          #+#    #+#             */
/*   Updated: 2022/05/20 21:13:54 by aldgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	size_t	i;
	size_t	strl;

	i = 0;
	strl = ft_strlen(s1) + ft_strlen(s2);
	newstr = (char *)malloc((1 + strl) * sizeof(char));
	if (!newstr)
		return (NULL);
	while (s1[i] != '\0')
	{
		newstr[i] = s1[i];
		i++;
	}
	ft_strlcpy((char *)&newstr[i], s2, ft_strlen(s2) + 1);
	return (newstr);
}
