/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   force_quotes.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atok <atok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 15:23:44 by wyap              #+#    #+#             */
/*   Updated: 2024/04/15 15:25:55 by atok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../minishell.h"

void	force_quotes(t_node *ptr)
{
	char	*tmp;

	tmp = ptr->content;
	ptr->content = ft_strjoin("\"", ptr->content);
	free(tmp);
	tmp = ptr->content;
	ptr->content = ft_strjoin(ptr->content, "\"");
	free(tmp);
}
