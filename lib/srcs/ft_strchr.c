/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkanaan <nkanaan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 11:34:43 by nkanaan           #+#    #+#             */
/*   Updated: 2024/06/26 15:00:54 by nkanaan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s && (*s != c))
	{
		s++;
	}
	if (*s == c)
	{
		return ((char *)s);
	}
	return ((char *) NULL);
}
// #include <stdio.h>
// #include <string.h>
// int main () {
//   	char s[] = "tripouille";
//    printf("%s", ft_strchr(s, 'z'));
//    return(0);
// }
