# Libft - Russian edition, 21-school
<img src="https://github.com/rustem-spb/libft/blob/master/Libft.JPG" />

![Text](https://snipboard.io/DuJ8ON.jpg)

### TOC
* [Что такое проект libft?](#Что-такое-проект-libft)
* [What's in it?](#whats-in-it)
* [List of functions](#list-of-functions)  Click to each function to see an explication

### Что такое проект libft?

Библиотека libft это первый индивидуальный провект в школе 21, в котором мы должны пересоздать некоторые функции из стандартной библиотеки С. В дальнейшем мы сможем использовать libft в наших других проектах. Это полезное упражнение позволяет продолжить изучение простых алгоритмов и структур языка С. Как вы помните в школе строгие правила, которые не разрешают нам пользоваться многими библиотечными функциями, заставляя нас писать собственные функции.

### What's in it?

There are 4 sections:

1.  **Libc Functions:** Some of the standard C functions
2.  **Additional functions:** Functions that will be useful for later projects
3.  **Bonus Functions:** Functions that will be useful for linked list manipulation
4.  **Personal Functions:** Functions I believe will be useful later.

### List of functions
Libc functions | Additional functions | Bonus Functions | Personal Functions
:----------- | :-----------: | :-----------: | -----------:
[ft_isalpha](#ft_isalpha)	|[ft_substr](#ft_substr)    | [ft_lstnew](#ft_lstnew)            | [ft_islower](#ft_islower) 
[ft_isdigit](#ft_isdigit)	|[ft_strjoin](#ft_strjoin)  | [ft_lstadd_front](#ft_lstadd_front)| [ft_isupper](#ft_isupper) 
[ft_isalnum](#ft_isalnum)	|[ft_strtrim](#ft_strjoin)  | [ft_lstsize](#ft_lstsize)          | [ft_isspace](#ft_isspace)   
[ft_isascii](#ft_isascii)	|[ft_split](#ft_split)      | [ft_lstlast](#ft_lstlast)          | [ft_strndup](#ft_strndup)
[ft_isprint](#ft_isprint)	|[ft_itoa](#ft_itoa)        | [ft_lstadd_back](#ft_lstadd_back)  | [ft_strcdup](#ft_strcdup)
[ft_strlen](#ft_strlen)	  |[ft_strmapi](#ft_strmapi)  | [ft_lstdelone](#ft_lstdelone)      | 
[ft_memset](#ft_memset)	  |[ft_striteri](#ft_striteri)| [ft_lstclear](#ft_lstclear)        | 
[ft_bzero](#ft_bzero)	    |[ft_putchar_fd](#ft_putchar_fd)	| [ft_lstiter](#ft_lstiter)     | 
[ft_memcpy](#ft_memcpy)	  |[ft_putstr_fd](#ft_putstr_fd)   | [ft_lstmap](#ft_lstmap)       | 
[ft_memmove](#ft_memmove)	|[ft_putendl_fd](#ft_putendl_fd)	|				                           | 
[ft_strlcpy](#ft_strlcpy)	|[ft_putnbr_fd](#ft_putnbr_fd)   |			                            | 
[ft_strlcat](#ft_strlcat)	| 	| | 
[ft_toupper](#ft_toupper) | 	| | 
[ft_tolower](#ft_tolower)	| 	| | 
[ft_strchr](#ft_strchr)	  | 	| | 
[ft_strrchr](#ft_strrchr)	|  | | 
[ft_strncmp](#ft_strncmp)	| 	| | 
[ft_memchr](#ft_memchr)  	| 	| | 
[ft_memcmp](#ft_memcmp)	  | 	| | 
[ft_strnstr](#ft_strnstr) | 	| | 
[ft_atoi](#ft_atoi)	      | 	| | 
[ft_calloc](#ft_calloc)	  | 	| |
[ft_strdup](#ft_strdup)	  |  | | 

### Part 1 - Libc functions
### функции библиотеки ctype.h

## [ft_isalpha](libft/ft_isalpha.c) [doc](https://man.openbsd.org/isalpha)

`int        ft_isalpha(int c)`

Description | Param. #1 | Return Value
:-----------: | :-----------: | :-----------:
Check for a alpabetic character, it is equivalent to ([ft_isupper](#ft_isupper)(c) or [ft_islower](#ft_islower)(c)) | The character to test | 0 if the character tests false and 1 if the character tests true

## [ft_isdigit](libft/ft_isdigit.c) [doc](https://man.openbsd.org/isdigit target="_blank")

`int         ft_isdigit(int c)`

Description | Param. #1 | Return Value
:-----------: | :-----------: | :-----------:
Check for a digit (0 through 9) | The character to test | 0 if the character tests false and 1 if the character tests true

## [ft_isalnum](libft/ft_isalnum.c) [doc](https://man.openbsd.org/isalnum)

`int        ft_isalnum(int c)`

Description | Param. #1 | Return Value
:-----------: | :-----------: | :-----------:
Check for an alphanumeric character; it is equivalent to ([ft_isalpha](#ft_isalpha) or [ft_isdigit](#ft_isdigit))| The character to test | 0 if the character tests false and 1 if the character tests true

## [ft_isascii](libft/ft_isascii.c) [doc](https://man.openbsd.org/isascii)

`int        ft_isascii(int c)`

Description | Param. #1 | Return Value
:-----------: | :-----------: | :-----------:
Checks for an ASCII character, which is any character between 0 and octal 0177 inclusive | The character to test | 0 if the character tests false and 1 if the character tests true

## [ft_isprint](libft/ft_isprint.c) [doc](https://man.openbsd.org/isprint)

`int        ft_isprint(int c)`

Description | Param. #1 | Return Value
:-----------: | :-----------: | :-----------:
Checks for any printable character including space| The character to test | 0 if the character tests false and 1 if the character tests true

## [ft_toupper](libft/ft_toupper.c) [doc](https://man.openbsd.org/toupper)

`int        ft_toupper(int c)`

Description | Param. #1 | Return Value
:-----------: | :-----------: | :-----------:
If the character passed as an argument is a lowercase, convert to upper| The character to convert | If c is a lowercase letter, returns its uppercase equivalent. Otherwise,  it  returns  c.

## [ft_tolower](libft/ft_tolower.c) [doc](https://man.openbsd.org/tolower)

`int        ft_tolower(int c)`

Description | Param. #1 | Return Value
:-----------: | :-----------: | :-----------:
If the character passed as an argument is an uppercase, convert to lower| The character to convert | If c is a uppercase letter, returns its lowercase equivalent. Otherwise,  it  returns  c.


### Функции библиотеки string.h

## [ft_strlen](libft/ft_strlen.c) [doc](https://man.openbsd.org/strlen)
`size_t     ft_strlen(const char *s)`

Description | Param. #1 | Return Values
:-----------: | :-----------: | :-----------:
Calculates the length of the string pointed to by s, excluding the terminating null byte ('\0')	| The string to calculate | Number of characters in the string pointed to by s

## [ft_memset](libft/ft_memset.c) [doc](https://man.openbsd.org/memset)

`void       *ft_memset(void *s, int c, size_t len)`

Description | Param. #1 | Param. #2 | Param. #3 | Return Value
:-----------: | :-----------: | :-----------: | :-----------: | :-----------:
Fill with "len" bytes of "c" the memory of "s". Пример: ("123456", '1', 2) получим "!!3456" [песочница](https://www.onlinegdb.com/fork/LNHxdgTos)| The string on which to operate | Value c (converted to an unsigned char) | The number of bytes | A pointer to the memory area s

## [ft_bzero](libft/ft_bzero.c) [doc](https://man.openbsd.org/bzero)

`void       *ft_bzero(void *s,  size_t n)`

Description | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------:
 Erases the data in the "n" bytes of the memory starting at the location pointed by "s" writing zeroes | The string on which to operate | The number of bytes | None

 ## [ft_memcpy](libft/ft_memcpy.c) [doc](https://man.openbsd.org/memcpy)

`void       *ft_memcpy(void *dst, const void *src, size_t n)`

Description | Param. #1 | Param. #2 | Param. #3 | Return Value
:-----------: | :-----------: | :-----------: | :-----------: | :-----------:
Copies n bytes from memory area src to memory of dst. The memory  areas  must  not  overlap.  Use [ft_memmove](#ft_memmove) if the memory areas do overlap.| Memory area dst | Memory area src | The number of bytes | A pointer to the memory area dst

## [ft_memmove](libft/ft_memmove.c) [doc](https://man.openbsd.org/memmove)

`void       *ft_memmove(void *dst, const void *src, size_t len)`

Description | Param. #1 | Param. #2 | Param. #3 | Return Value
:-----------: | :-----------: | :-----------: | :-----------: | :-----------:
Copies len bytes from the memory of src to dst. Memories may overlap. First, the bytes in src are copied into a temporary array and then to dst.| Memory area dst | Memory ares arc | The number of bytes | A pointer to the memory area dst

 ## [ft_strlcpy](libft/ft_strlcpy.c) [doc](https://man.openbsd.org/strlcpy)

`size_t     ft_strlcpy(char *dst, const char *src, size_t dstsize)`

Description | Param. #1 | Param. #2 | Param. #3 | Return Value
:-----------: | :-----------: | :-----------: | :-----------: | :-----------:
Copies up to dstsize - 1 characters from the NUL-terminated string src to dst, NUL-terminating the result| Destination array | String to be copied | Number of characters to be copied from src | Total length of the string to create (length of src)

## [ft_strlcat](libft/ft_strlcat.c) [doc](https://man.openbsd.org/strlcat)

`size_t     ft_strlcat(char *dst, const char *src, size_t size)`

Description | Param. #1 | Param. #2 | Param. #3 | Return Value
:-----------: | :-----------: | :-----------: | :-----------: | :-----------:
Concatenate the string src to the end of dst. It will concatenate at most size - strlen(dst) - 1 bytes, NUL-terminating the result | Destination array | String to be appended to dst | Maximum number of characters to be appended | The initial length of dst plus the length of src

## [ft_strchr](libft/ft_strchr.c) [doc](https://man.openbsd.org/strchr)

`char		*ft_strchr(const char *s, int c)`

Description | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------:
Locates the first occurrence of 'c' in the string pointed to by 's'. The terminating null character is considered to be part of the string, therefore if 'c' is '\0', locates the terminating '\0'| Pointer to string | Character to be located | A pointer to the first occurrence of the character c in the string or NULL if the character is not found

## [ft_strrchr](libft/ft_strrchr.c) [doc](https://man.openbsd.org/strrchr)

`char		*ft_strrchr(const char *s, int c)`

Description | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------:
Locates the last occurrence of 'c' in the string pointed to by 's'. The terminating null character is considered to be part of the string, therefore if 'c' is '\0', locates the terminating '\0'| Pointer to string | Character to be located | A pointer to the last occurrence of the character c in the string or NULL if the character is not found

## [ft_strncmp](libft/ft_strncmp.c) [doc](https://man.openbsd.org/strncmp)

`char       *ft_strncmp!!!!!!(const char *s, size_t n)`

Description | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------:
!!!!!!!!!!Allocates a specific amount of memory to copy a string | The string to copy | The maximum amount of characters to copy from the string | A pointer to the new string

## [ft_memchr](libft/ft_memchr.c) [doc](https://man.openbsd.org/mechr)

`void       *ft_memchr(const void *s, int c, size_t n)`

Description | Param. #1 | Param. #2 | Param. #3 | Return Value
:-----------: | :-----------: | :-----------: | :-----------: | :-----------:
Scans the initial n bytes of s for the first instance of c | Memory area s| A character to search | The number of bytes | A pointer to the matching byte or NULL if the character does not occur in the given memory area

## [ft_strnstr](libft/ft_strnstr.c) [doc](https://man.openbsd.org/strnstr)

`char       *ft_strnstr(const char *haystack, const char *needle, size_t len)`

Description | Param. #1 | Param. #2 | Param. #3 | Return Value
:-----------: | :-----------: | :-----------: | :-----------: | :-----------:
Locate substring, where not more than 'len' characters are searched. Finds the first occurrence of the substring 'needle' in  the  string 'haystack'. The terminating null bytes ('\0') are not compared. | String to be scanned | The small string to be searched in 'haystack' string|The maximum amount of characters to be searched |A pointer to the first character of the first occurrence of little is returned. NULL if the substring is not found. If 'needle' is an empty string, 'haystack' is returned

## [ft_atoi](libft/ft_atoi.c) [doc](https://man.openbsd.org/atoi)

`int        ft_atoi(const char *str)`

Description | Param. #1 | Return Value
:-----------: | :-----------: | :-----------:
Convert a string to a integer | The string to be converted to int | The converted value

## [ft_calloc](libft/ft_calloc.c) [doc](https://man.openbsd.org/calloc)

`void       *ft_calloc(size_t count, size_t size)`

Description | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------:
 Allocates enough space for count objects that are size bytes of memory each, and returns a pointer to the allocated memory. The allocated memory is filled with bytes of value zero | Number of elements to be allocated | Size of elements | A pointer to the allocated memory, or NULL if the request fails

## [ft_strdup](libft/ft_strdup.c) [doc](https://man.openbsd.org/strdup)
`char       *ft_strdup(const char *s))`

Description | Param. #1 | Return Values
:-----------: | :-----------: | :-----------:
Duplicate string s1. Memory  for  the new string is obtained with malloc, and can  be  freed with free | The string to duplicate| A pointer   to  the  duplicated  string.  NULL  if  insufficient  memory  was available


### Part 2 - Additional functions

## [ft_substr]
`char   *ft_substr(char const *s, unsigned int start, size_t len)`

Description | Param. #1 | Param. #2 | Param. #3 | Return Value
:-----------: | :-----------: | :-----------: | :-----------: | :-----------:
Allocates (with malloc(3)) and returns a substring from the string 's'. The substring begins at index 'start' and is of maximum size 'len'| The string from which create the substring | The start index of the substring in the string | The maximum length of the substring | The substring. NULL if the allocation fails

## [ft_strjoin]

`char *ft_strjoin(char const *s1, char const *s2)`

Description | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------:
Allocates (with malloc) and returns a new string, which is the result of the concatenation of 's1' and 's2' |The prefix string | The suffix string | The new string. NULL if the allocation fails

## [ft_strtrim]

`char *ft_strtrim(char const *s1, char const *set)`

Description | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------:
Allocates (with malloc) and returns a copy of 's1' with the characters specified in 'set' removed from the beginning and the end of the string | The string to be trimmed |The reference set of character to trim | The trimmed string. NULL if the allocation fails

## [ft_split]

`char **ft_split(char const *s, char c)`

Description | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------:
Allocates (with malloc(3)) and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter. The array must be ended by a NULL pointer. | The string to be split | The delimiter character | The array of new strings resulting of the split. NULL if the allocation fails

## [ft_itoa]

`char *ft_itoa(int n)`

Description | Param. #1 | Return Value
:-----------: | :-----------: | :-----------:
Allocates (with malloc(3)) and returns a string representing the integer received as an argument. Negative numbers must be handled. | Integer to convert | The string representing the integer. NULL if the allocation fails.

## [ft_strmapi]

`char *ft_strmapi(char const *s, char (*f)(unsigned int, char))`

Description | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------:
Applies the function ’f’ to each character of the string ’s’ to create a new string (with malloc(3)) resulting from successive applications of ’f’. | The string on which to iterate | The function to apply to each character. | The string created from the successive applications of ’f’. Returns NULL if the allocation fails.

## [ft_striteri]

`void ft_striteri(char *s, void (*f)(unsigned int, char*))`

Description | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------:
Applies the function f to each character of the string passed as argument, and passing its index as first argument. Each character is passed by address to f to be modified if necessary | The string on which to iterate | The function to apply to each character | None

## [ft_putchar_fd]

`void ft_putchar_fd(char c, int fd)`

Description | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------:
Outputs the character 'c' to the given file descriptor | The character to output | The file descriptor on which to write | None

## [ft_putstr_fd]

`void ft_putstr_fd(char *s, int fd)`

Description | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------:
Outputs the string 's' to the given file descriptor | The string to output | The file descriptor on which to write | None

## [ft_putendl_fd]

`char **ft_putendl_fd(char *s, int fd)`

Description | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------:
Outputs the string 's' to the given file descritor, followed by a newline | The string to output | The file descriptor on which to write | None

## [ft_putnbr_fd]

`void   ft_putnbr_fd(int n, int fd)`

Description | Param. #1 | Return Value
:-----------: | :-----------: | :-----------:
Outputs the integer 'n' to the given file descriptor | The integer to output | The file descriptor on which to write

### Structure list functions
##############################################################################################################

## [ft_lstnew]

`t_list *ft_lstnew(void *content)`

Description | Param. #1 | Return Value
:-----------: | :-----------: | :-----------:
Allocates (with malloc(3)) and returns a new element. The variable ’content’ is initialized with the value of the parameter ’content’. The variable ’next’ is initialized to NULL | The content to create the new element with | Return value The new element

## [ft_lstadd_front]

`void ft_lstadd_front(t_list **lst, t_list *new)`

Description | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------:
Adds the element ’new’ at the beginning of the list | The address of a pointer to the first link of a list | The address of a pointer to the element to be added to the list | None

## [ft_lstsize]

`int ft_lstsize(t_list *lst)`

Description | Param. #1 | Return Value
:-----------: | :-----------: | :-----------:
Counts the number of elements in a list | The beginning of the list | Length of the list

## [ft_lstlast]

`t_list *ft_lstlast(t_list *lst)`

Description | Param. #1 | Return Value
:-----------: | :-----------: | :-----------:
Returns the last element of the list | The beginning of the list | Return value Last element of the list

## [ft_lstadd_back]

`void ft_lstadd_back(t_list **lst, t_list *new)`

Description | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------:
Adds the element ’new’ at the end of the list | The address of a pointer to the first link of a list | The address of a pointer to the element to be added to the list | None

## [ft_lstdelone]

`void ft_lstdelone(t_list *lst, void (*del)(void *))`

Description | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------:
Takes as a parameter an element and frees the memory of the element’s content using the function ’del’ given as a parameter and free the element. The memory of ’next’ must not be freed | The element to free | The address of the function used to delete the content | None 

## [ft_lstclear]

`void ft_lstclear(t_list **lst, void (*del)(void *))`

Description | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------:
Deletes and frees the given element and every successor of that element, using the function ’del’ and free(3). Finally, the pointer to the list must be set to NULL | The adress of a pointer to an element | The adress of the function used to delete the content of the element | None

## [ft_lstiter]

`void ft_lstiter(t_list *lst, void (*f)(void *))`

Description | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------:
Iterates the list ’lst’ and applies the function ’f’ to the content of each element | The adress of a pointer to an element | The adress of the function used to iterate on the list | None  

## [ft_lstmap]

`t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))`

Description | Param. #1 | Param. #2 | Param. #3 | Return Value
:-----------: | :-----------: | :-----------: | :-----------: | :-----------:
Iterates the list ’lst’ and applies the function ’f’ to the content of each element. Creates a new list resulting of the successive applications of the function ’f’. The ’del’ function is used to delete the content of an element if needed | The adress of a pointer to an element | The adress of the function used to iterate on the list | The adress of the function used to delete the content of an element if needed | The new list. NULL if the allocation fails

### Personal functions

## [ft_islower](libft/ft_islower.c)

`int  ft_islower(int c)`

Description | Param. #1 | Return Value
:-----------: | :-----------: | :-----------:
Check for a lowercase character | The character to test | 0 if the character tests false and 1 if the character tests true

## [ft_isupper](libft/ft_isupper.c)

`int ft_isupper(int c)`

Description | Param. #1 | Return Value
:-----------: | :-----------: | :-----------:
Check for an uppercase character | The character to test | 0 if the character tests false and 1 if the character tests true

## [ft_isspace](libft/ft_isspace.c)

`int ft_isspace(int c)`

Description | Param. #1 | Return Value
:-----------: | :-----------: | :-----------:
 Checks for white-space characters. These are: space, form-feed ('\f'), newline ('\n'),  carriage  return('\r'), horizontal tab ('\t'), and vertical tab ('\v').| The character to test | 0 if the character tests false and 1 if the character tests true

## ft_capitalize

`char  *ft_capitalize(char *s)`

Description | Param. #1 | Return Value
:-----------: | :-----------: | :-----------:
Capitalizes the first letter of every word in a string	| The string to capitalize		| The new string with capitalized words 


[1]: https://www.21-school.ru/ 
[2]:
