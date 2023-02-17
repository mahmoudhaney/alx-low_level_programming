# `C` - Variables, Selection, Loop

## Practice Scenarios

### General Requirements
  > C
  >- Allowed editors: `vi`, `vim`, `emacs`
  >- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
  >- All your files should end with a new line
  >- There should be no errors and no warnings during compilation
  >- Your code should use the [`Betty`](https://github.com/holbertonschool/Betty/wiki) style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)


### Tasks
0. - [x] [0-positive_or_negative.c](0-positive_or_negative.c) - This program will assign a random number to the variable `n` each time it is executed. Complete the source code in order to print whether the number stored in the variable `n` is positive or negative.
    - <details>
      <summary>The Source Code</summary>
      
      ```c
      #include <stdlib.h>
      #include <time.h>
      /* more headers goes there */

      /* betty style doc for function main goes there */
      int main(void)
      {
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        /* your code goes there */
        return (0);
      }
      ```
    </details>
    
    - The variable n will store a different value every time you will run this program
    - You don’t have to understand what `rand`, `srand`, `RAND_MAX` do. Please do not touch this code
    - The output of the program should be:
      - The number, followed by
        - if the number is greater than 0: `is positive`
        - if the number is 0: `is zero`
        - if the number is less than 0: `is negative`
      - followed by a new line
    - <details>
      <summary>Sample Output</summary>
      
      ```
      -973398895 is negative
      266853958 is positive
      0 is zero
      ```
    </details>
    
----

1. - [x] [1-last_digit.c](1-last_digit.c) - This program will assign a random number to the variable `n` each time it is executed. Complete the source code in order to print the last digit of the number stored in the variable `n`.
    - <details>
      <summary>The Source Code</summary>
      
      ```c
      #include <stdlib.h>
      #include <time.h>
      /* more headers goes there */

      /* betty style doc for function main goes there */
      int main(void)
      {
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        /* your code goes there */
        return (0);
      }
      ```
    </details>

    - The variable `n` will store a different value every time you run this program
    - You don’t have to understand what `rand`, `srand`, and `RAND_MAX` do. Please do not touch this code
    - The output of the program should be:
      - The string `Last digit of`, followed by
      - `n`, followed by
      - the string `is`, followed by
        - if the last digit of `n` is greater than 5: the string `and is greater than 5`
        - if the last digit of `n` is 0: the string `and is 0`
        - if the last digit of `n` is less than 6 and not 0: the string `and is less than 6 and not 0`
      - followed by a new line
      - <details>
        <summary>Sample Output</summary>

        ```
        Last digit of 652334952 is 2 and is less than 6 and not 0
        Last digit of 45528266 is 6 and is greater than 5
        ast digit of 809065140 is 0 and is 0
        ```
      </details>
----

2. - [x] [2-print_alphabet.c](2-print_alphabet.c) - Write a program that prints the alphabet in lowercase, followed by a new line.
    - You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
    - All your code should be in the `main` function
    - You can only use `putchar` twice in your code
----

3. - [x] [3-print_alphabets.c](3-print_alphabets.c) - Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.
    - You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
    - All your code should be in the `main` function
    - You can only use `putchar` three times in your code
----

4. - [x] [4-print_alphabt.c](4-print_alphabt.c) - Write a program that prints the alphabet in lowercase, followed by a new line.
    - Print all the letters except `q` and `e`
    - You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
    - All your code should be in the `main` function
    - You can only use `putchar` twice in your code
----

5. - [x] [5-print_numbers.c](5-print_numbers.c) - Write a program that prints all single digit numbers of base 10 starting from `0`, followed by a new line.
    - All your code should be in the `main` function
----

6. - [x] [6-print_numberz.c](6-print_numberz.c) - Write a program that prints all single digit numbers of base 10 starting from `0`, followed by a new line.
    - You are not allowed to use any variable of type `char`
    - You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
    - You can only use `putchar` twice in your code
    - All your code should be in the `main` function
----

7. - [x] [7-print_tebahpla.c](7-print_tebahpla.c) - Write a program that prints the lowercase alphabet in reverse, followed by a new line.
    - You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
    - You can only use `putchar` twice in your code
    - All your code should be in the `main` function
----

8. - [x] [8-print_base16.c](8-print_base16.c) - Write a program that prints all the numbers of base 16 in lowercase, followed by a new line.
    - You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
    - You can only use `putchar` three in your code
    - All your code should be in the `main` function
----

9. - [x] [9-print_comb.c](9-print_comb.c) - Write a program that prints all possible combinations of single-digit numbers.
    - Numbers must be separated by `,`, followed by a space
    - Numbers should be printed in ascending order
    - You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
    - All your code should be in the `main` function
    - You can only use `putchar` four times maximum in your code
    - You are not allowed to use any variable of type `char`
----


<details>
   <summary>Extra Tasks</summary>
   
   10. - [x] [100-print_comb3.c](100-print_comb3.c) - Write a program that prints all possible different combinations of two digits.
        - Numbers must be separated by `,`, followed by a space
        - The two digits must be different
        - `01` and `10` are considered the same combination of the two digits `0` and `1`
        - Print only the smallest combination of two digits
        - Numbers should be printed in ascending order, with two digits
        - You can only use the `putchar` function (every other function (printf, puts, etc…) is forbidden)
        - You can only use `putchar` five times maximum in your code
        - You are not allowed to use any variable of type `char`
        - All your code should be in the `main` function
        - Sample Output
          ```
          01, 02, 03, 04, 05, 06, 07, 08, 09, 12, 13, 14, 15, 16, 17, 18, 19, 23, 24, 25, 26, 27, 28, 29, 34, 35, 36, 37, 38, 39, 45, 46, 47, 48, 49, 56, 57, 58, 59, 67, 68, 69, 78, 79, 89
          ```
  ----
  
   11. - [x] [101-print_comb4.c](101-print_comb4.c) - Write a program that prints all possible different combinations of three digits.
        - Numbers must be separated by `,`, followed by a space
        - The three digits must be different
        - `012`, `120`, `102`, `021`, `201`, `210` are considered the same combination of the three digits `0`, `1` and `2`
        - Print only the smallest combination of three digits
        - Numbers should be printed in ascending order, with three digits
        - You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
        - You can only use `putchar` six times maximum in your code
        - You are not allowed to use any variable of type `char`
        - All your code should be in the `main` function
        - Sample Output
          ```
          012, 013, 014, 015, 016, 017, 018, 019, 023, 024, 025, 026, 027, 028, 029, 034, 035, 036, 037, 038, 039, 045, 046, 047, 048, 049, 056, 057, 058, 059, 067, 068, 069, 078, 079, 089, 123, 124, 125, 126, 127, 128, 129, 134, 135, 136, 137, 138, 139, 145, 146, 147, 148, 149, 156, 157, 158, 159, 167, 168, 169, 178, 179, 189, 234, 235, 236, 237, 238, 239, 245, 246, 247, 248, 249, 256, 257, 258, 259, 267, 268, 269, 278, 279, 289, 345, 346, 347, 348, 349, 356, 357, 358, 359, 367, 368, 369, 378, 379, 389, 456, 457, 458, 459, 467, 468, 469, 478, 479, 489, 567, 568, 569, 578, 579, 589, 678, 679, 689, 789
          ```
  ----

   12. - [x] [102-print_comb5.c](102-print_comb5.c) - Write a program that prints all possible combinations of two two-digit numbers.
        - The numbers should range from `0` to `99`
        - The two numbers should be separated by a space
        - All numbers should be printed with two digits. `1` should be printed as `01`
        - The combination of numbers must be separated by comma, followed by a space
        - The combinations of numbers should be printed in ascending order
        - `00 01` and `01 00` are considered as the same combination of the numbers `0` and `1`
        - You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
        - You can only use `putchar` eight times maximum in your code
        - You are not allowed to use any variable of type `char`
        - All your code should be in the `main` function
        - Sample Output
          ```
          00 01, 00 02, 00 03, 00 04, 00 05, 00 06, 00 07, 00 08, 00 09, 00 10, 00 11, [...] 40 91, 40 92, 40 93, 40 94, 40 95, 40 96, 40 97, 40 98, 40 99, 41 42, 41 43, 41 44, 41 45, 41 46, 41 47, 41 48, 41 49, 41 50, 41 51, 41 52, 41 53 [...] 93 95, 93 96, 93 97, 93 98, 93 99, 94 95, 94 96, 94 97, 94 98, 94 99, 95 96, 95 97, 95 98, 95 99, 96 97, 96 98, 96 99, 97 98, 97 99, 98 99
          ```
</details>





