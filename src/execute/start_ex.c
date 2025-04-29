/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_ex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchernia <tchernia@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 15:49:59 by tchernia          #+#    #+#             */
/*   Updated: 2025/04/29 16:05:07 by tchernia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_command *command = parser_output;

//
//
//

if (!cmd->next)
{
	if (cmd->is_builtin)
		execute_builtin(cmd);
	else
		execute_external(cmd);
else
	execute_pipeline(cmd);
}

