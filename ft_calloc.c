/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldgonza <aldgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 14:43:25 by aldgonza          #+#    #+#             */
/*   Updated: 2022/05/18 17:07:25 by aldgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	char	*str;

	str = (char *)malloc(num * size * sizeof(char));
	if (str == NULL)
		return (0);
	ft_bzero (str, num * size);
	return (str);
}
