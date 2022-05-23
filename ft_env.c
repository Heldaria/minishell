/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_env.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llepiney <llepiney@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 21:21:07 by llepiney          #+#    #+#             */
/*   Updated: 2022/05/23 21:27:33 by llepiney         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	ft_env(char **env)
{
	int	i;

	i = 0;
	while (env[i])
	{
		ft_putstr(env[i]);
		write(1, "\n", 1);
		i++;
	}
}

// int	main(int argc, char **argv)
// {
// 	char	**env;
// 	int	i;

// 	i = 0;
// 	(void)argc;
// 	env = malloc(sizeof(char *) * 12);
// 	while (i < 11)
// 	{
// 		env[i] = ft_strdup(argv[i + 1]);
// 		i++;
// 	}
// 	ft_env(env);
// }