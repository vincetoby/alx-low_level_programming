# README.md file

1. Create the static library **libmy.a** containing all the functions listed below

<pre><code>int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
</code></pre>

## steps
* created my README.md
* created each c-files containing the functions i need
* created main.h Header file containing all my functions prototypes
* converted each c-program file into an object file by running: <pre><code>**gcc -c \*.c**</code></pre>
* next i created my static librabry called **libmy.a**:
		 <pre><code>**ar rcs libmy.a**</code></pre>

* i transfered a copy of each object file into my static library by using the code below:
		<pre><code**ar rcs libmy.a \*.o**</code></pre>

* i then viewed the library by doing <pre><code>**ar -t libmy.a**</code></pre>


2. **create_static_lib.sh**: This is a script that creates a static library called liball.a from all the .c files that are in the current directory.
