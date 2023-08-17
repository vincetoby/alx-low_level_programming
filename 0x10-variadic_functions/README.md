# READ ME
This file contains all important files and explains what they do

## FILES
1. **0-sum_them_all.c:**
a function that returns the sum of all its parameters.

    Prototype: <pre><code>int sum_them_all(const unsigned int n, ...);</pre></code>
    If n == 0, return 0.

2. **1-print_numbers.c:**
a function that prints numbers, followed by a new line.

    Prototype: <pre><code>void print_numbers(const char *separator, const unsigned int n, ...);</pre></code>
    where separator is the string to be printed between numbers
    and n is the number of integers passed to the function
    You are allowed to use printf
    If separator is NULL, don’t print it
    Print a new line at the end of your function

3. **2-print_strings.c**:
a function that prints strings, followed by a new line.

    Prototype: <pre><code>void print_strings(const char *separator, const unsigned int n, ...);</pre></code>
    where separator is the string to be printed between the strings
    and n is the number of strings passed to the function
    You are allowed to use printf
    If separator is NULL, don’t print it
    If one of the string is NULL, print (nil) instead
    Print a new line at the end of your function

4. **3-print_all.c**:
a function that prints anything.

    Prototype: <pre><code>void print_all(const char * const format, ...);</pre></code>
    where format is a list of types of arguments passed to the function
        c: char
        i: integer
        f: float
        s: char * (if the string is NULL, print (nil) instead
        any other char should be ignored
