/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clussian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 17:46:00 by clussian          #+#    #+#             */
/*   Updated: 2023/10/04 16:06:00 by clussian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

/*int main (int argc, char **argv)
{
	if (argc == 3)
		printf("%s", ft_strcat(argv[1], argv[2]));
	return (0);
} */
