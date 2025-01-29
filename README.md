# Library of 43 basic functions in C
This library is a collection of 43 basic functions in C written by myself.<br />
This repository is intended to deepen my understanding of how some standard functions work and to provide the opportunity to use my implementations in other projects.
<br/><br/>

**Below you can see how you can integrate the library into your projects.**
<br/><br/>

**<ins>List of all 43 included functions:</ins>**
<br/><br/>
**Input/Output Functions:**
- **ft_printf:**        _Prints data to standard output._
- **get_next_line:**    _Reads a line from a file descriptor._
<br/><br/>

**Memory Functions:**
- **ft_bzero.c:**       _Sets all bytes in a memory area to zero._
- **ft_calloc.c:**      _Allocates memory and initializes all bytes to zero._
- **ft_memchr.c:**      _Locates the first char in a memory block._
- **ft_memcmp.c:**      _Compares two memory areas._
- **ft_memcpy.c:**      _Copies a memory block to another location._
- **ft_memfree.c:**	_Freed all memory that were allocated._
- **ft_memmove.c:**     _Copies memory with overlapping areas handled safely._
- **ft_memset.c:**      _Fills a memory block with a specific byte value._
<br/><br/>

**Linked List Functions:**
- **ft_lstnew.c:**      _Creates a new linked list node._
- **ft_lstlast.c:**     _Returns the last node of a linked list._
- **ft_lstadd_back.c:** _Adds a new node to the end of a linked list._
- **ft_lstclear.c:**    _Clears and frees all nodes of a linked list._
<br/><br/>

**Conversion Functions:**
- **ft_atoi.c:**        _Converts a string to an integer._
- **ft_itoa.c:**        _Converts an integer to a string._
<br/><br/>

**String Manipulation Functions:**
- **ft_strlen.c:**      _Returns the length of a string._
- **ft_strdup.c:**      _Duplicates a string in a newly allocated memory block._
- **ft_strndup.c:**     _Duplicates n characters of a string in a newly allocated memory block._
- **ft_strjoin.c:**     _Concatenates two strings into a new string._
- **ft_strlcpy.c:**     _Copies a string to a destination buffer with size limit._
- **ft_split.c:**       _Splits a string into substrings using a delimiter._
- **ft_putstr_rev**     _Writes a string in revers._
<br/><br/>

**Further Functions:**
- **ft_putchar.c:**  	_Writes a single character._
- **ft_putendl.c:**  	_Writes a string followed by a newline._
- **ft_putnbr.c:**   	_Writes an integer as a string._
- **ft_putstr.c:**   	_Writes a string._
- **ft_isalnum.c:**     _Checks if a character is alphanumeric (letter or digit)._
- **ft_isalpha.c:**     _Checks if a character is an alphabetic letter._
- **ft_isascii.c:**     _Checks if a character is part of the ASCII set._
- **ft_isdigit.c:**     _Checks if a character is a decimal digit._
- **ft_isprint.c:**     _Checks if a character is printable, including space._
- **ft_tolower.c:**     _Converts an uppercase letter to lowercase._
- **ft_toupper.c:**     _Converts a lowercase letter to uppercase._
- **ft_strchr.c:**      _Finds the first character in a string._
- **ft_strrchr.c:**     _Finds the last character in a string._
- **ft_strncmp.c:**     _Compares two strings up to a specified number of characters._
- **ft_strnstr.c:**     _Locates a substring within a string._
- **ft_strlcat.c:**     _Concatenates two strings with size limit for the destination._
- **ft_strmapi.c:**     _Applies a function to each character of a string to create a new string._
- **ft_striteri.c:**    _Applies a function to each character of a string, modifying it in place._
- **ft_substr.c:**      _Extracts a substring from a string._
- **ft_strtrim.c:**     _Trims characters from the beginning and end of a string._
<br/><br/>

<ins>Using of the library:</ins><br/><br/>
Clone the git into your directory.

	git clone https://github.com/JoKleiner/Standart-Library.git libft

Add the libft_header to your header file:

	# include "libft/libft.h"

Example for your Makefile:


	NAME 		= test
	CC 		= cc
	CFLAGS 		= -Wall -Wextra -Werror

	LIBFT_DIR   = libft
	LIBFT       = $(LIBFT_DIR)/libft.a
	SRC         = main.c
	OBJS        = $(SRC:.c=.o)

	all: $(NAME)

	$(NAME): $(LIBFT) $(OBJS)
		@$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(LIBFT)

	$(LIBFT):
		@$(MAKE) -C $(LIBFT_DIR)

	%.o: %.c
		@$(CC) $(CFLAGS) -I$(LIBFT_DIR) -c $< -o $@

	clean:
		@rm -f $(OBJS)
		@$(MAKE) -C $(LIBFT_DIR) clean

	fclean: clean
		@rm -f $(NAME)
		@$(MAKE) -C $(LIBFT_DIR) fclean

	re: fclean all

 	.PHONY: all clean fclean re
