Functions - Nested Loops

# `C` - Variables, Selection, Loop

## Practice Scenarios

### General Requirements
  >- Allowed editors: `vi`, `vim`, `emacs`
  >- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
  >- All your files should end with a new line
  >- Your code should use the [`Betty`](https://github.com/holbertonschool/Betty/wiki) style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)
  >- You are not allowed to use global variables
  >- No more than 5 functions per file
  >- You are not allowed to use the standard library. Any use of functions like `printf`, `puts`, etc… is forbidden
  >- You are allowed to use [`_putchar`](_putchar.c)
  >- You don’t have to push `_putchar.c`, we will use our file. If you do it won’t be taken into account
  >- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our `main.c` files might be different from the one shown in the examples
  >- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`
  >- Don’t forget to push your header file


### Tasks
0. - [x] [0-putchar.c](0-putchar.c) - Write a program that prints `_putchar`, followed by a new line. 
    - The program should return `0`
----

1. - [x] [1-alphabet.c](1-alphabet.c) - Write a function that prints the alphabet, in lowercase, followed by a new line.
    - Prototype: `void print_alphabet(void);`
    - You can only use `_putchar` twice in your code
----

2. - [x] [2-print_alphabet_x10.c](2-print_alphabet_x10.c) - Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.
    - Prototype: `void print_alphabet_x10(void);`
    - You can only use `_putchar` twice in your code
----

3. - [x] [3-islower.c](3-islower.c) - Write a function that checks for lowercase character.
    - Prototype: `int _islower(int c);`
    - Returns `1` if `c` is lowercase
    - Returns `0` otherwise
----

4. - [x] [4-isalpha.c](4-isalpha.c) - Write a function that checks for alphabetic character.
    - Prototype: `int _isalpha(int c);`
    - Returns `1` if `c` is a letter, lowercase or uppercase
    - Returns `0` otherwise
----

5. - [x] [5-sign.c](5-sign.c) - Write a function that prints the sign of a number.
    - Prototype: `int print_sign(int n);`
    - Returns `1` and prints `+` if `n` is greater than zero
    - Returns `0` and prints `0` if `n` is zero
    - Returns `-1` and prints `-` if `n` is less than zero
----

6. - [x] [6-abs.c](6-abs.c) - Write a function that computes the absolute value of an integer.
    - Prototype: `int _abs(int);`
----

7. - [x] [7-print_last_digit.c](7-print_last_digit.c) - Write a function that prints the last digit of a number.
    - Prototype: `int print_last_digit(int);`
    - Returns the value of the last digit
----

8. - [x] [8-24_hours.c](8-24_hours.c) - Write a function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
    - Prototype: `void jack_bauer(void);`
----

9. - [x] [9-times_table.c](9-times_table.c) - Write a function that prints the 9 times table, starting with 0.
    - Prototype: `void times_table(void);`
    - <details>
      <summary>Format: see example</summary>

      ```
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0$
        0,  1,  2,  3,  4,  5,  6,  7,  8,  9$
        0,  2,  4,  6,  8, 10, 12, 14, 16, 18$
        0,  3,  6,  9, 12, 15, 18, 21, 24, 27$
        0,  4,  8, 12, 16, 20, 24, 28, 32, 36$
        0,  5, 10, 15, 20, 25, 30, 35, 40, 45$
        0,  6, 12, 18, 24, 30, 36, 42, 48, 54$
        0,  7, 14, 21, 28, 35, 42, 49, 56, 63$
        0,  8, 16, 24, 32, 40, 48, 56, 64, 72$
        0,  9, 18, 27, 36, 45, 54, 63, 72, 81$
      ```
    </details>
----

10. - [x] [10-add.c](10-add.c) - Write a function that adds two integers and returns the result.
    - Prototype: `int add(int, int);`
----

11. - [x] [11-print_to_98.c](11-print_to_98.c) - Write a function that prints all natural numbers from `n` to `98`, followed by a new line.
    - Prototype: `void print_to_98(int n);`
    - Numbers must be separated by a comma, followed by a space
    - Numbers should be printed in order
    - The first printed number should be the number passed to your function
    - The last printed number should be `98`
    - You are allowed to use the standard library
----

<details>
   <summary>Extra Tasks</summary>
   
   12. - [x] [100-times_table.c](100-times_table.c) - Write a function that prints the `n` times table, starting with 0.
        - Prototype: `void print_times_table(int n);`
        - If `n` is greater than `15` or less than `0` the function should not print anything
        - <details>
          <summary>Format: see example</summary>
          
          ```
            0,   0,   0,   0
            0,   1,   2,   3
            0,   2,   4,   6
            0,   3,   6,   9

            0,   0,   0,   0,   0,   0
            0,   1,   2,   3,   4,   5
            0,   2,   4,   6,   8,  10
            0,   3,   6,   9,  12,  15
            0,   4,   8,  12,  16,  20
            0,   5,  10,  15,  20,  25


            0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0
            0,   1,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12
            0,   2,   4,   6,   8,  10,  12,  14,  16,  18,  20,  22,  24
            0,   3,   6,   9,  12,  15,  18,  21,  24,  27,  30,  33,  36
            0,   4,   8,  12,  16,  20,  24,  28,  32,  36,  40,  44,  48
            0,   5,  10,  15,  20,  25,  30,  35,  40,  45,  50,  55,  60
            0,   6,  12,  18,  24,  30,  36,  42,  48,  54,  60,  66,  72
            0,   7,  14,  21,  28,  35,  42,  49,  56,  63,  70,  77,  84
            0,   8,  16,  24,  32,  40,  48,  56,  64,  72,  80,  88,  96
            0,   9,  18,  27,  36,  45,  54,  63,  72,  81,  90,  99, 108
            0,  10,  20,  30,  40,  50,  60,  70,  80,  90, 100, 110, 120
            0,  11,  22,  33,  44,  55,  66,  77,  88,  99, 110, 121, 132
            0,  12,  24,  36,  48,  60,  72,  84,  96, 108, 120, 132, 144
          ```
          </details>
  ----
  
   13. - [x] [101-natural.c](101-natural.c) - If we list all the natural numbers below `10` that are multiples of `3` or `5`, we get `3`, `5`, `6` and `9`. The sum of these multiples is `23`. Write a program that computes and prints the sum of all the multiples of `3` or `5` below `1024` (excluded), followed by a new line.
        - You are allowed to use the standard library
  ----

   14. - [x] [102-fibonacci.c](102-fibonacci.c) - Write a program that prints the first 50 Fibonacci numbers, starting with `1` and `2`, followed by a new line.
        - The numbers must be separated by comma, followed by a space `,` 
        - You are allowed to use the standard library
   ----

   15. - [x] [103-fibonacci.c](103-fibonacci.c) - Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with `1` and `2`, the first 10 terms will be: `1, 2, 3, 5, 8, 13, 21, 34, 55, 89`. By considering the terms in the Fibonacci sequence whose values do not exceed 4,000,000, write a program that finds and prints the sum of the even-valued terms, followed by a new line.
        - You are allowed to use the standard library
   ----

   16. - [x] [104-fibonacci.c](104-fibonacci.c) - Write a program that finds and prints the first 98 Fibonacci numbers, starting with `1` and `2`, followed by a new line.
        - The numbers should be separated by comma, followed by a space `,`
        - You are allowed to use the standard library
        - You are not allowed to use any other library (You can’t use `GMP` etc…)
        - You are not allowed to use `long long`, `malloc`, pointers, arrays/tables, or structures
        - You are not allowed to hard code any Fibonacci number (except for `1` and `2`)
</details>
