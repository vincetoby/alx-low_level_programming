# READ ME
This readme explains this directory

* **0-binary_to_uint.c**: a function that converts a binary number to an unsigned int.
Return: the converted number, or 0 if there is one or more chars in the string b that is not 0 or 1, or if  b is NULL

* **1-print_binary.c:** a function that prints the binary representation of a number.

* **2-get_bit.c:** a function that returns the value of a bit at a given index.
returns -1 on error.

* **3-set_bit.c**: a function that sets the value of a bit to 1 at a given index.
Returns: 1 if it worked, or -1 if an error occurred

* **4-clear_bit.c:** a function that sets the value of a bit to 0 at a given index.
Returns: 1 if it worked, or -1 if an error occurred 

* **5-flip_bits.c**: a function that returns the number of bits you would need to flip to get from one number to another.

* **100-get_endianness.c**: a function that checks the endianness.
<pre><code>Here's how the code works:

    The comment block at the top of the code provides a description of the function's purpose. It's intended to determine the endianness of the machine, returning 0 for big endian and 1 for little endian.

    Inside the function, an integer variable n is declared and initialized with the value 1.

    The function returns the value of the first byte of the integer n, which is used to determine the endianness of the machine.

    To achieve this, the code uses a technique that involves typecasting the address of n to a pointer to a character (char *). This allows access to the individual bytes of n.

    By dereferencing the typecasted pointer (*((char *) &n)), the code accesses the first byte of n, regardless of the machine's endianness.

    The value of the first byte of n is then added to '0'. This is done to convert the byte's numerical value (either 0 or 1) to its character representation ('0' or '1'), effectively producing the expected return values.
</pre></code>

* **101-password:** Find the password for [this program](https://github.com/alx-tools/0x13.c).
procedure:
- clone the directory holding the crackme file
- move it into your repos diectory
- run this code below
<pre><code>curl https://raw.githubusercontent.com/osala-eng/alx_tools/master/crackme3.sh -o run.xt && chmod u+x run.xt && ./run.xt</pre></code>
- tests your code

