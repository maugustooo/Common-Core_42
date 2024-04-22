/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maugusto <maugusto@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 12:16:40 by gude-jes          #+#    #+#             */
/*   Updated: 2024/04/19 19:44:49 by maugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_size(long int n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count ++;
	while (n != 0)
	{
		count ++;
		n /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char			*str;
	long int		num;
	long int		len;

	num = n;
	len = ft_size(num);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len--] = '\0';
	if (num < 0)
	{
		str[0] = '-';
		num *= -1;
	}
	if (num == 0)
		str[0] = '0';
	while (num > 0)
	{
		str[len--] = '0' + (num % 10);
		num = (num / 10);
	}
	return (str);
}

// int main()
// {
// 	printf("%s \n", ft_itoa(-100));
// }