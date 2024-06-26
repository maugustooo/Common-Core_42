/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maugusto <maugusto@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 12:18:07 by gude-jes          #+#    #+#             */
/*   Updated: 2024/04/23 10:19:56 by maugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		s1_len;
	int		s2_len;
	char	*newstring;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	newstring = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!newstring)
		return (NULL);
	ft_strlcpy(newstring, s1, s1_len + 1);
	ft_strlcpy(newstring + s1_len, s2, s2_len + 1);
	return (newstring);
}
