# READ ME

This directory is all about creating a dynamic library.

##steps
name of lib to create: **libdynamic.so**

- wrote my c-functions and save appropriately in a directory
- created object files of all my fuctions by using the code below:
<pre><code>gcc -c -fPIC \*.c</pre></code>

- Then i created a librabry file with my object codes
<pre><code>gcc -shared -o libdynamic.so \*.o</pre></code>

