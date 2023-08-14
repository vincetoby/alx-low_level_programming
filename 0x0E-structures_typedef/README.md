# READ ME
This readme file explains the necessary files in this directory

## FILES IN THIS DIRECTORY
1. **dog.h**: a header file tha defines a new type struct dog with the following elements:

  <pre><code>
    name, type = char *
    age, type = float
    owner, type = char *
</pre></code>

This code below does the job(i am dropping this code because it will later change in dog.h file while solving other problems).
<pre><code>struct dog
{
        char *name;
        float age;
        char *owner;
};
</pre></code>

2. [**1-init_dog.c**](https://github.com/vincetoby/alx-low_level_programming/blob/master/0x0E-structures_typedef/1-init_dog.c):  a function that initialize a variable of type struct dog
3. [**2-print_dog.c**](https://github.com/vincetoby/alx-low_level_programming/blob/master/0x0E-structures_typedef/2-print_dog.c):  a function that prints a struct dog
4. **dog.h**: in this header file, i defined a new type dog_t as a new name for the type struct dog.
 	
	below is the code
<pre><code>typedef struct dog
{
        char *name;
        float age;
        char *owner;
} dog_t;
</pre></code>

5. [**4-new_dog.c** :](https://github.com/vincetoby/alx-low_level_programming/blob/master/0x0E-structures_typedef/4-new_dog.c#L13)  a function that creates a new dog.

    Prototype: dog_t *new_dog(char *name, float age, char *owner);
    You have to store a copy of name and owner
    Return NULL if the function fails
6. [**5-free_dog.c**](https://github.com/vincetoby/alx-low_level_programming/blob/master/0x0E-structures_typedef/5-free_dog.c) : a function that frees dogs. 
