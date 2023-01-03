/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 11:35:01 by yonghlee          #+#    #+#             */
/*   Updated: 2022/07/22 15:12:31 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	do_pipex(pid_t pid, t_pipex *pipex, char **envp)
{
	if (pid == 0)
	{
		close(pipex->pipes[0]);
		dup2(pipex->fd1, STDIN_FILENO);
		dup2(pipex->pipes[1], STDOUT_FILENO);
		close(pipex->fd1);
		close(pipex->pipes[1]);
		execve(pipex->cmd.parse_cmd1, pipex->cmd.av_cmd1, envp);
	}
	else
	{
		close(pipex->pipes[1]);
		dup2(pipex->pipes[0], STDIN_FILENO);
		dup2(pipex->fd2, STDOUT_FILENO);
		close(pipex->pipes[0]);
		close(pipex->fd2);
		execve(pipex->cmd.parse_cmd2, pipex->cmd.av_cmd2, envp);
	}
}

void	free_all(t_pipex *pipex)
{
	if (pipex->envp_parse)
		free(pipex->envp_parse);
	if (pipex->infile)
		free(pipex->infile);
	if (pipex->outfile)
		free(pipex->outfile);
	if (pipex->cmd.av_cmd1)
		free(pipex->cmd.av_cmd1);
	if (pipex->cmd.av_cmd2)
		free(pipex->cmd.av_cmd2);
	if (pipex->cmd.parse_cmd1)
		free(pipex->cmd.av_cmd1);
	if (pipex->cmd.parse_cmd2)
		free(pipex->cmd.parse_cmd2);
	close(pipex->fd1);
	close(pipex->fd2);
}

void	print_error(int status, t_pipex *pipex)
{
	if (status == INPUT_FAIL)
		ft_putstr_fd("Error : You must input 4 status", 1);
	else if (status == OPEN_FAIL)
		ft_putstr_fd("Error : Open Fail", 1);
	else if (status == PARSE_FAIL)
		ft_putstr_fd("Error : Parse Fail", 1);
	else if (status == PIPE_FAIL)
		ft_putstr_fd("Error : Pipe Fail", 1);
	else if (status == FORK_FAIL)
		ft_putstr_fd("Error : Fork Fail", 1);
	else if (status == MALLOC_FAIL)
		ft_putstr_fd("Error : Malloc Fail", 1);
	else if (status == EXEC_FAIL)
		ft_putstr_fd("Error : Exec Fail", 1);
	else
		ft_putstr_fd("Error : I don't know But Fail", 1);
	free_all(pipex);
	exit(0);
}
