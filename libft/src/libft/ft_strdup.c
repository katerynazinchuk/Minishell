/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchernia <tchernia@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:50:51 by tchernia          #+#    #+#             */
/*   Updated: 2024/10/22 18:32:09 by tchernia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*dup_s;

	dup_s = (char *)malloc(sizeof(char) * (ft_strlen(s) +1));
	if (dup_s == NULL)
		return (NULL);
	ft_memcpy(dup_s, s, ft_strlen(s) +1);
	return (dup_s);
}
