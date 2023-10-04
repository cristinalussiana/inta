/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clussian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 18:28:18 by clussian          #+#    #+#             */
/*   Updated: 2023/10/04 16:06:46 by clussian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include <stdio.h>
//#include <stdlib.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int main (int argc, char **argv)
{
	if (argc == 4)
		printf ("%s", ft_strncat(argv[1], argv[2], atoi(argv[3])));
	return (0);
} */
