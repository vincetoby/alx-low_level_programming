This **README.md** file explains the function of each script.

1. 0-preprocessor: This script runs a C file through the preprocessor and save the result into another file. (The C file name will be saved in the variable $CFILE, The output will be saved in the file c)
2. 1-compiler: This script compiles a C file but does not link (The C file name will be saved in the variable $CFILE, The output file will be named the same as the C file, but with the extension .o instead of .c .
3. 2-assembler: This script generates the assembly code of a C code and save it in an output file (The C file name will be saved in the variable $CFILE, The output file will be named the same as the C file, but with the extension .s instead of .c. ) 
