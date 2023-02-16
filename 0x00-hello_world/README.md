# `C` Programming Language - Hello World

## Practice Scenarios

### General Requirements
  > C
  >- Allowed editors: `vi`, `vim`, `emacs`
  >- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
  >- All your files should end with a new line
  >- There should be no errors and no warnings during compilation
  >- Your code should use the [`Betty`](https://github.com/holbertonschool/Betty/wiki) style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)
  > 
  > Shell Scripts
  >- Allowed editors: `vi`, `vim`, `emacs`
  >- All your scripts will be tested on Ubuntu 20.04 LTS
  >- All your scripts should be exactly two lines long (`$ wc -l file` should print 2)
  >- All your files should end with a new line
  >- The first line of all your files should be exactly `#!/bin/bash`


### Tasks
0. - [x] [0-preprocessor](0-preprocessor) - Write a script that runs a C file through the preprocessor and save the result into another file.
    - The C file name will be saved in the variable `$CFILE`
    - The output should be saved in the file `c`
----

1. - [x] [1-compiler](1-compiler) - Write a script that compiles a C file but does not link.
    - The C file name will be saved in the variable `$CFILE`
    - The output file should be named the same as the C file, but with the extension `.o` instead of `.c`.
      - Example: if the C file is `main.c`, the output file should be `main.o`
----

2. - [x] [2-assembler](2-assembler) - Write a script that generates the assembly code of a C code and save it in an output file.
    - The C file name will be saved in the variable `$CFILE`
    - The output file should be named the same as the C file, but with the extension `.s` instead of `.c`.
      - Example: if the C file is `main.c`, the output file should be `main.s`
----

3. - [x] [3-name](3-name) - Write a script that compiles a C file and creates an executable named `cisfun`.
    - The C file name will be saved in the variable `$CFILE`
----

4. - [x] [4-puts.c](4-puts.c) - Write a C program that prints exactly `"Programming is like building a multilingual puzzle`, followed by a new line.
    - Use the function `puts`
    - You are not allowed to use `printf`
    - Your program should end with the value `0`
----

5. - [x] [5-printf.c](5-printf.c) - Write a C program that prints exactly `with proper grammar, but the outcome is a piece of art,`, followed by a new line.
    - Use the function `printf`
    - You are not allowed to use the function `puts`
    - Your program should return `0`
----

6. - [x] [6-size.c](6-size.c) - Write a C program that prints the size of various types on the computer it is compiled and run on.
    - Warnings are allowed
    - Your program should return `0`
    - You should produce the exact same output as in the example
      ```
      Size of a char: 1 byte(s)
      Size of an int: 4 byte(s)
      Size of a long int: 8 byte(s)
      Size of a long long int: 8 byte(s)
      Size of a float: 4 byte(s)
      ```
----

<details>
   <summary>Extra Tasks</summary>
  
   7. - [x] [100-intel](100-intel) - Write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file.
      - The C file name will be saved in the variable `$CFILE`.
      - The output file should be named the same as the C file, but with the extension `.s` instead of `.c`.
        - Example: if the C file is `main.c`, the output file should be `main.s`
  ----

   8. - [x] [101-quote.c](101-quote.c) - Write a C program that prints exactly `and that piece of art is useful" - Dora Korpar, 2015-10-19`, followed by a new line, to the standard error.
      - You are not allowed to use any functions listed in the NAME section of the man (3) `printf` or man (3) `puts`
      - Your program should return 1
      - Your program should compile without any warnings when using the `-Wall gcc` option
</details>






