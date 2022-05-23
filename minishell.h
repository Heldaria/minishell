/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llepiney <llepiney@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 14:37:43 by llepiney          #+#    #+#             */
/*   Updated: 2022/05/23 21:23:40 by llepiney         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

# include <stddef.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

size_t	ft_strlen(char *str);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_unset(char **env, char *str);
char	*ft_strjoin(char const *s1, const char *s2);
int		recreate(char **env, char *to_del);
int		clone_tab(char **tab1, char **tab2);
int		ft_tablen(char **tab);
void	free_tab(char **tab);
char	*ft_strdup(const char *s);
void	ft_putstr(char *str);

void	ft_env(char **env);

#endif