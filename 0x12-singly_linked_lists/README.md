# Singly linked lists

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
  >- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `lists.h`
  >- Don’t forget to push your header file
  
  Please use this data structure for this project: 
  
  ```C
  /**
   * struct list_s - singly linked list
   * @str: string - (malloc'ed string)
   * @len: length of the string
   * @next: points to the next node
   *
   * Description: singly linked list node structure
   */
  typedef struct list_s
  {
      char *str;
      unsigned int len;
      struct list_s *next;
  } list_t;
  ```


### Tasks
0. - [x] [0-print_list.c](0-print_list.c)

![image](https://user-images.githubusercontent.com/83553963/229053194-7c9e684f-9231-4bfd-bd5c-093631512fcb.png)

----

1. - [x] [1-list_len.c](1-list_len.c) - Write a function that returns the number of elements in a linked `list_t` list.
    - Prototype: `size_t list_len(const list_t *h);`
----

2. - [x] [2-add_node.c](2-add_node.c)

![image](https://user-images.githubusercontent.com/83553963/229054156-67f7dd70-617d-4716-86fa-85fd03647653.png)

----

3. - [x] [3-add_node_end.c](3-add_node_end.c)

![image](https://user-images.githubusercontent.com/83553963/229054209-4f9cc684-252a-4a98-9108-51ba8793a189.png)

----

4. - [x] [4-free_list.c](4-free_list.c) - Write a function that frees a `list_t` list.
    - Prototype: `void free_list(list_t *head);`
----

5. - [x] [100-first.c](100-first.c) - Write a function that prints `You're beat! and yet, you must allow,\nI bore my house upon my back!\n` before the `main` function is executed.
----

6. - [x] [101-hello_holberton.asm](101-hello_holberton.asm)

![image](https://user-images.githubusercontent.com/83553963/229054506-32f4236a-27e1-4f74-a4e1-8fdfe0a3a54b.png)

----

