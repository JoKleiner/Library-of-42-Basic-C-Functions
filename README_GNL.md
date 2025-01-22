# GET_NEXT_LINE

Get Next Line: Reads and returns the next line from a file descriptor, including the newline character, or until EOF is reached.

In the following application example, the file "text.txt" is read

int	main(void)
{
 	int		fd;
	char	*str;

 	fd = open("text.txt", O_RDONLY);
	str = get_next_line(fd);
 	if (str != NULL)
 	{
 		printf("%s", str);
 		free(str);
 	}
 	close(fd);
 	return (0);
}
