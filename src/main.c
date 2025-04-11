#include "minishell.h"

/* [username@hostname current_working_directory]$ */

//readline return NULL, so (!line) processing case when we use Ctrl+D

int main()
{
	char		*line;
	const char	*prompt = "minishell> ";

	init_signals();
	while(1)
	{
		//update_prompt(prompt);
		line = readline(prompt);
		if (!line || ft_strncmp(line, "exit", 5))
		{
			if(line)
				free(line);
			write(1, "exit\n", 6);
			exit (0);
		}
		// if (*line)
		// 	add_history(line);
		printf("command: %s\n", line);
		free(line);
	}
	return(0);
}

void update_prompt(char *prompt)
{
	char	user[1024];
	char	hostname[1024];
	char	path[PATH_MAX];//на убунту треба ставити змінну PATH_MAX

	if (!getcwd(path, sizeof(path)))
	{
		perror("getcwd");
		return;
	}	

	if (getenv("USER") && getenv() )
	{

	}
	hostname = getenv("HOSTNAME");

}
