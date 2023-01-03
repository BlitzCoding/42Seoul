/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 11:31:06 by yonghlee          #+#    #+#             */
/*   Updated: 2022/07/22 15:14:07 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

char	*attach_path_cmd(char *cmd, t_pipex *pipex)
{
	size_t	i;
	char	*path_cmd;
	char	*res_cmd;
	int		fd;

	i = -1;
	path_cmd = ft_strjoin("/", cmd);
	while (pipex->envp_parse[++i])
	{
		res_cmd = ft_strjoin(pipex->envp_parse[i], path_cmd);
		fd = access(res_cmd, X_OK);
		if (fd != -1)
		{
			free(path_cmd);
			return (res_cmd);
		}
		close(fd);
		free(res_cmd);
	}
	free(path_cmd);
	return (NULL);
}

void	argv_parse(t_pipex *pipex, char **argv)
{
	pipex->cmd.av_cmd1 = ft_split(argv[2], ' ');
	if (pipex->cmd.av_cmd1 == NULL)
		print_error(PARSE_FAIL, pipex);
	pipex->cmd.av_cmd2 = ft_split(argv[3], ' ');
	if (pipex->cmd.av_cmd2 == NULL)
		print_error(PARSE_FAIL, pipex);
	pipex->cmd.parse_cmd1 = attach_path_cmd(pipex->cmd.av_cmd1[0], pipex);
	pipex->cmd.parse_cmd2 = attach_path_cmd(pipex->cmd.av_cmd2[0], pipex);
}

void	envp_parse(t_pipex *pipex, char **envp)
{
	int	i;

	i = 0;
	while (ft_strncmp(envp[i], "PATH=", 5))
		i++;
	if (envp[i] == NULL)
		print_error(PARSE_FAIL, pipex);
	pipex->envp_parse = ft_split(&envp[i][5], ':');
}

void	init_pipex(t_pipex *pipex, char **argv, char **envp)
{
	pipex->infile = ft_strdup(argv[1]);
	pipex->outfile = ft_strdup(argv[4]);
	if (pipex->infile == NULL || pipex->outfile == NULL)
		print_error(PARSE_FAIL, pipex);
	envp_parse(pipex, envp);
	argv_parse(pipex, argv);
}

int	main(int argc, char **argv, char **envp)
{
	t_pipex	pipex;
	pid_t	pid;

	if (argc != 5)
		print_error(INPUT_FAIL, &pipex);
	init_pipex(&pipex, argv, envp);
	if (pipe(pipex.pipes) == -1)
		print_error(PIPE_FAIL, &pipex);
	pipex.fd1 = open(pipex.infile, O_RDONLY);
	pipex.fd2 = open(pipex.outfile, O_RDWR | O_CREAT | O_TRUNC, 0644);
	if (pipex.fd1 < 0 || pipex.fd2 < 0)
		print_error(OPEN_FAIL, &pipex);
	pid = fork();
	if (pid == -1)
		print_error(FORK_FAIL, &pipex);
	else
		do_pipex(pid, &pipex, envp);
	wait(NULL);
	free_all(&pipex);
}
