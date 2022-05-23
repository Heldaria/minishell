/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llepiney <llepiney@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 16:02:08 by llepiney          #+#    #+#             */
/*   Updated: 2022/05/23 16:02:17 by llepiney         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

static char	*create_new(char const *s1, char const *s2)
{
	int		len;
	int		i;
	char	*new;

	i = 0;
	len = 0;
	while (s1[i])
	{
		len++;
		i++;
	}
	i = 0;
	while (s2[i])
	{
		i++;
		len++;
	}
	i = 0;
	new = malloc(sizeof(char) * (len + 1));
	if (!new)
		return (NULL);
	return (new);
}

char	*ft_strjoin(char const *s1, const char *s2)
{
	char	*new2;
	int		i;
	int		k;

	i = 0;
	k = 0;
	new2 = create_new(s1, s2);
	if (!new2)
		return (NULL);
	while (s1[i])
	{
		new2[k] = s1[i];
		i++;
		k++;
	}
	i = 0;
	while (s2[i])
	{
		new2[k] = s2[i];
		i++;
		k++;
	}
	new2[k] = '\0';
	return (new2);
}