# `C` - Debugging

## Practice Scenarios

### General Requirements
  >- Allowed editors: `vi`, `vim`, `emacs`
  >- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
  >- All your files should end with a new line
  >- Your code should use the [`Betty`](https://github.com/holbertonschool/Betty/wiki) style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)


### Tasks
0. - [x] [0-main.c](0-main.c), [main.h](main.h) - In most projects, we often give you only one main file to test with. For example, this main file is a test for a `postitive_or_negative()`
    - ```
      cat main.c
      #include "main.h"

      /**
      * main - tests function that prints if integer is positive or negative
      * Return: 0
      */

      int main(void)
      {
              int i;

              i = 98;
              positive_or_negative(i);

              return (0);
      }
      ```
      ```
      cat main.h
      #ifndef MAIN_H
      #define MAIN_H

      #include <stdio.h>

      void positive_or_negative(int i);

      #endif /* MAIN_H */
      ```
    - Based on the `main.c` file above, create a file named `0-main.c`. This file must test that the function `positive_or_negative()` gives the correct output when given a case of `0`.
      - You only need to upload `0-main.c` and `main.h` for this task. We will provide our own `positive_or_negative()` function.
      - You are not allowed to add or remove lines of code, you may change only **one** line in this task.
----

1. - [x] [1-main.c](1-main.c) - Copy this main file. Comment out (don’t delete it!) the part of the code that is causing the output to go into an infinite loop.
    - Don’t add or remove any lines of code, as we will be checking your line count. You are only allowed to comment out existing code.
    - You do not have to compile with `-Wall -Werror -Wextra -pedantic` for this task.
    - ```
      cat 1-main.c
      #include <stdio.h>

      /**
      * main - causes an infinite loop
      * Return: 0
      */

      int main(void)
      {
              int i;

              printf("Infinite loop incoming :(\n");

              i = 0;

              while (i < 10)
              {
                      putchar(i);
              }

              printf("Infinite loop avoided! \\o/\n");

              return (0);
      }
      ```
----

2. - [x] [2-largest_number.c](2-largest_number.c), [main.h](main.h) - This program prints the largest of three integers.
    - ```
      cat 2-main.c
      #include <stdio.h>
      #include "main.h"

      /**
      * main - prints the largest of 3 integers
      * Return: 0
      */

      int main(void)
      {
              int a, b, c;
              int largest;

              a = 972;
              b = -98;
              c = 0;

              largest = largest_number(a, b, c);

              printf("%d is the largest number\n", largest);

              return (0);
      }
      ```
      ```
      2-largest_number.c
      #include "main.h"

      /**
       * largest_number - returns the largest of 3 numbers
       * @a: first integer
       * @b: second integer
       * @c: third integer
       * Return: largest number
       */

      int largest_number(int a, int b, int c)
      {
          int largest;

          if (a > b && b > c)
          {
              largest = a;
          }
          else if (b > a && a > c)
          {
              largest = b;
          }
          else
          {
              largest = c;
          }

          return (largest);
      }
      ```
    - That’s definitely not right.
      - Fix the code in `2-largest_number.c` so that it correctly prints out the largest of three numbers, no matter the case.
      - Line count will not be checked for this task.
----

3. - [x] [3-print_remaining_days.c](3-print_remaining_days.c), [main.h](main.h) - This program converts a date to the day of year and determines how many days are left in the year, taking leap year into consideration.
    - ```
      cat 3-main_a.c
      #include <stdio.h>
      #include "main.h"

      /**
      * main - takes a date and prints how many days are left in the year, taking
      * leap years into account
      * Return: 0
      */

      int main(void)
      {
          int month;
          int day;
          int year;

          month = 4;
          day = 01;
          year = 1997;

          printf("Date: %02d/%02d/%04d\n", month, day, year);

          day = convert_day(month, day);

          print_remaining_days(month, day, year);

          return (0);
      }
      ```
      ```
      cat 3-convert_day.c
      #include "main.h"

      /**
      * convert_day - converts day of month to day of year, without accounting
      * for leap year
      * @month: month in number format
      * @day: day of month
      * Return: day of year
      */

      int convert_day(int month, int day)
      {
          switch (month)
          {
              case 2:
                  day = 31 + day;
                  break;
              case 3:
                  day = 59 + day;
                  break;
              case 4:
                  day = 90 + day;
                  break;
              case 5:
                  day = 120 + day;
                  break;
              case 6:
                  day = 151 + day;
                  break;
              case 7:
                  day = 181 + day;
                  break;
              case 8:
                  day = 212 + day;
                  break;
              case 9:
                  day = 243 + day;
                  break;
              case 10:
                  day = 273 + day;
                  break;
              case 11:
                  day = 304 + day;
                  break;
              case 12:
                  day = 334 + day;
                  break;
              default:
                  break;
          }
          return (day);
      }
      ```
      ```
      cat 3-print_remaining_days.c
      #include <stdio.h>
      #include "main.h"

      /**
      * print_remaining_days - takes a date and prints how many days are
      * left in the year, taking leap years into account
      * @month: month in number format
      * @day: day of month
      * @year: year
      * Return: void
      */

      void print_remaining_days(int month, int day, int year)
      {
          if ((year % 4 == 0 || year % 400 == 0) && !(year % 100 == 0))
          {
              if (month >= 2 && day >= 60)
              {
                  day++;
              }

              printf("Day of the year: %d\n", day);
              printf("Remaining days: %d\n", 366 - day);
          }
          else
          {
              if (month == 2 && day == 60)
              {
                  printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
              }
              else
              {
                  printf("Day of the year: %d\n", day);
                  printf("Remaining days: %d\n", 365 - day);
              }
          }
      }
      ```
    - Fix the `print_remaining_days()` function so that the output works correctly for all dates and all leap years.
      - Line count will not be checked for this task.
      - You can assume that all test cases have valid months (i.e. the value of `month` will never be less than `1` or greater than `12`) and valid days (i.e. the value of `day` will never be less than `1` or greater than `31`).
      - You can assume that all test cases have valid month/day combinations (i.e. there will never be a June 31st or November 31st, etc.), but not all month/day/year combinations are valid (i.e. February 29, 1991 or February 29, 2427).

