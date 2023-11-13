# READ ME

This directory is all about creating a dynamic library.

1. **libdynamic.so**: a dynamic library libdynamic.so containing all the functions

### steps
name of lib to create: **libdynamic.so**

- wrote my c-functions and save appropriately in a directory
- created object files of all my fuctions by using the code below:
<pre><code>gcc -c -fPIC \*.c</pre></code>

- Then i created a librabry file with my object codes
<pre><code>gcc -shared -o libdynamic.so \*.o</pre></code>

2. **1-create_dynamic_lib.sh**: a script that creates a dynamic library called liball.so from all the .c files that are in the current directory.

3. **100-operations.so**: a dynamic library that contains mathematical C functions that can be called from Python

### steps
- created a c-file called maths.c
- wrote down c-functions for addition, multiplication, sub, modulo, div using these prototypes below;
<pre><code>
    int add(int a, int b);
    int sub(int a, int b);
    int mul(int a, int b);
    int div(int a, int b);
    int mod(int a, int b);
</pre></code>

- i then compiled the maths.c to produce an object file "maths.o"
<pre><code>gcc -c -fPIC maths.c</pre></code>

- i then created the dynamic library from the created object files
<pre><code>gcc -shared -o 100-operations.so maths.o</pre></code>

