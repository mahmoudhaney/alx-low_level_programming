# `C` Static Libraries

### What Is A `C` Library?
<details>
   <summary>Here</summary>
     One of the tools that compilers supply us with are libraries. A library is a file containing several object files, that can be used as a single entity in a linking phase of a program. Normally the library is indexed, so it is easy to find symbols (functions, variables and so on) in them. For this reason, linking a program whose object files are ordered in libraries is faster than linking a program whose object files are separate on the disk. Also, when using a library, we have fewer files to look for and open, which even further speeds up linking.

  Unix systems (as well as most other modern systems) allow us to create and use two kinds of libraries - static libraries and shared (or dynamic) libraries.

  Static libraries are just collections of object files that are linked into the program during the linking phase of compilation, and are not relevant during runtime. This last comment seems obvious, as we already know that object files are also used only during the linking phase, and are not required during runtime - only the program's executable file is needed in order to run the program.

  Shared libraries (also called dynamic libraries) are linked into the program in two stages. First, during compile time, the linker verifies that all the symbols (again, functions, variables and the like) required by the program, are either linked into the program, or in one of its shared libraries. However, the object files from the dynamic library are not inserted into the executable file. Instead, when the program is started, a program in the system (called a dynamic loader) checks out which shared libraries were linked with the program, loads them to memory, and attaches them to the copy of the program in memory.

  The complex phase of dynamic loading makes launching the program slightly slower, but this is a very insignificant drawback, that is out-weighted by a great advantage - if a second program linked with the same shared library is executed, it can use the same copy of the shared library, thus saving a lot of memory. For example, the standard `C` library is normally a shared library, and is used by all `C` programs. Yet, only one copy of the library is stored in memory at any given time. This means we can use far less memory to run our programs, and the executable files are much smaller, thus saving a lot of disk space as well.

  However, there is one drawback to this arrangement. If we re-compile the dynamic library and try to run a second copy of our program with the new library, we'll soon get stuck - the dynamic loader will find that a copy of the library is already stored in memory, and thus will attach it to our program, and not load the new (modified) version from disk. There are ways around this too, as we'll see in the last section of our discussion.
</details>


### Creating A Static `C` Library Using `ar` and `ranlib`
<details>
   <summary>Here</summary>
The basic tool used to create static libraries is a program called `ar`, for 'archiver'. This program can be used to create static libraries (which are actually archive files), modify object files in the static library, list the names of object files in the library, and so on. In order to create a static library, we can use a command like this:

`ar rc libutil.a util_file.o util_net.o util_math.o`

This command creates a static library named `libutil.a` and puts copies of the object files `util_file.o`, `util_net.o` and `util_math.o` in it. If the library file already exists, it has the object files added to it, or replaced, if they are newer than those inside the library. The `c` flag tells ar to create the library if it doesn't already exist. The `r` flag tells it to replace older object files in the library, with the new object files.

After an archive is created, or modified, there is a need to index it. This index is later used by the compiler to speed up symbol-lookup inside the library, and to make sure that the order of the symbols in the library won't matter during compilation (this will be better understood when we take a deeper look at the link process at the end of this tutorial). The command used to create or update the index is called `ranlib`, and is invoked as follows:

`ranlib libutil.a`

On some systems, the archiver (which is not always ar) already takes care of the index, so `ranlib` is not needed (for example, when Sun's C compiler creates an archive, it is already indexed). However, because `ar` and `ranlib` are used by many makefiles for many packages, such platforms tend to supply a ranlib command that does nothing. This helps using the same makefile on both types of platforms.

Note: when an archive file's index generation date (stored inside the archive file) is older than the file's last modification date (stored in the file system), a compiler trying to use this library will complain its index is out of date, and abort. There are two ways to overcome the problem:

Use `ranlib` to re-generate the index.
When copying the archive file to another location, use `cp -p`, instead of only `cp`. The `-p` flag tells `cp` to keep all attributes of the file, including its access permissions, owner (if "cp" is invoked by a superuser) and its last modification date. This will cause the compiler to think the index inside the file is still updated. This method is useful for makefiles that need to copy the library to another directory for some reason.
</details>


### Tasks
0. - [x] [libmy.a](libmy.a), [main.h](main.h) - Create the static library `libmy.a` containing all the functions listed below:
  ```
  int _putchar(char c);
  int _islower(int c);
  int _isalpha(int c);
  int _abs(int n);
  int _isupper(int c);
  int _isdigit(int c);
  int _strlen(char *s);
  void _puts(char *s);
  char *_strcpy(char *dest, char *src);
  int _atoi(char *s);
  char *_strcat(char *dest, char *src);
  char *_strncat(char *dest, char *src, int n);
  char *_strncpy(char *dest, char *src, int n);
  int _strcmp(char *s1, char *s2);
  char *_memset(char *s, char b, unsigned int n);
  char *_memcpy(char *dest, char *src, unsigned int n);
  char *_strchr(char *s, char c);
  unsigned int _strspn(char *s, char *accept);
  char *_strpbrk(char *s, char *accept);
  char *_strstr(char *haystack, char *needle);
  ```
  If you haven’t coded all of the above functions create empty ones with the right prototype.
  Don’t forget to push your `main.h` file to your repository. It should at least contain all the prototypes of the above functions.
  ```
  julien@ubuntu:~/0x09. Static Librairies$ ar -t libmy.a 
    0-isupper.o
    0-memset.o
    0-strcat.o
    1-isdigit.o
    1-memcpy.o
    1-strncat.o
    100-atoi.o
    2-strchr.o
    2-strlen.o
    2-strncpy.o
    3-islower.o
    3-puts.o
    3-strcmp.o
    3-strspn.o
    4-isalpha.o
    4-strpbrk.o
    5-strstr.o
    6-abs.o
    9-strcpy.o
    _putchar.o
 ```
----

1. - [x] [create_static_lib.sh](create_static_lib.sh) - Create a script called `create_static_lib.sh` that creates a static library called `liball.a` from all the `.c` files that are in the current directory.
----




