/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdulla <dabdulla@student.42vienna.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-29 13:43:09 by dabdulla          #+#    #+#             */
/*   Updated: 2025-09-29 13:43:09 by dabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = (unsigned char *)s;
	while (str[i])
	{
		while (i <= n)
		{
			str[i] = c;
			i++;
		}
		i++;
	}
	return (0);
}

int main(void)
{
    char str[20] = "abcdefghijklmnop";
    printf("Before: %s\n", str);

    ft_memset(str + 2, 'X', 5);
    printf("After : %s\n", str);

    return 0;
}