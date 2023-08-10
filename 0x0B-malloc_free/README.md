# READ ME
This file contains explanation of all files in this directory

## FILES IN THIS DIRECTORY
1. [**0-create_array.c:**](https://github.com/vincetoby/alx-low_level_programming/blob/master/0x0B-malloc_free/0-create_array.c)  a function that creates an array of chars, and initializes it with a specific char.
 	* Returns NULL if size = 0
	* Returns a pointer to the array, or NULL if it fails
2. [**1-strdup.c:**](https://github.com/vincetoby/alx-low_level_programming/blob/master/0x0B-malloc_free/1-strdup.c) a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
3. [**2-str_concat.c**](https://github.com/vincetoby/alx-low_level_programming/blob/master/0x0B-malloc_free/2-str_concat.c):  a function that concatenates two strings.
	* The returned pointer should point to a newly allocated space in memory which contains the contents of s1, followed by 	  the contents of s2, and null terminated
	* if NULL is passed, treat it as an empty string
	* The function should return NULL on failure

4. [**3-alloc_grid.c:**](https://github.com/vincetoby/alx-low_level_programming/blob/master/0x0B-malloc_free/3-alloc_grid.c)  a function that returns a pointer to a 2 dimensional array of integers.
	* Each element of the grid should be initialized to 0
	* The function should return NULL on failure
	* If width or height is 0 or negative, return NULL

5. [**4-free_grid.c**](https://github.com/vincetoby/alx-low_level_programming/blob/master/0x0B-malloc_free/4-free_grid.c): a function that frees a 2 dimensional grid previously created by your alloc_grid function. For explanation of code visit this [link](https://github.com/vincetoby/alx-low_level_programming/blob/master/0x0B-malloc_free/explain_free_grid.md).
6. [**101-strtow.c**](https://github.com/vincetoby/alx-low_level_programming/blob/master/0x0B-malloc_free/101-strtow.c): a function that splits a string into words.
    	* The function returns a pointer to an array of strings (words)
    	* Each element of this array will contain a single word, null-terminated
    	* The last element of the returned array should be NULL
    	* Words are separated by spaces.
    	* Returns NULL if str == NULL or str == ""
    	* If your function fails, it should return NULL.
For explanation on how the code works, visit this [link](https://github.com/vincetoby/alx-low_level_programming/blob/master/strtow_code_explain.md)
