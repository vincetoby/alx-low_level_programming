## README.md file

1. Create the static library **libmy.a** containing all the functions listed below
# steps
* created my README.md
* created each c-files containing the functions i need
* created main.h Header file containing all my functions prototypes
* converted each c-program file into an object file by running: **gcc -c *.c**
* next i created my static librabry called **libmy.a**:
		 **ar rcs libmy.a**

* i transfered a copy of each object file into my static library by using the code below:
		**ar rcs libmy.a *.o**

* i then viewed the library by doing **ar -t libmy.a**
