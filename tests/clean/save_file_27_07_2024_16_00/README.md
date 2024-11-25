# Holbertonschool-printf

## Appendix
We can read the original printf function
```bash
   man printf
```
We create a custum function _printf (it's a simple function of _printf) that handles a subset of the functionality of the standard printf function.
In this custom function, we support format for print with _putchar:
#### `-character output ('%c')`
#### `-String output ('%s')`
#### `-Percent sign ('%%')`
#### `-Integer output ('%d' and '%i')`

We can compile the project using this command line in this way : gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format \*.c

## Requirements :

We are not allolowed to use global variables and use 5 functions per files.


We can use this autorized functions and macros:

#### Authorized functions and macros
#### -write (man 2 write)
#### -malloc (man 3 malloc)
#### -free (man 3 free)
#### -va_start (man 3 va_start)
#### -va_end (man 3 va_end)
#### -va_copy (man 3 va_copy)
#### -va_arg (man 3 va_arg)

#### We have no reproduce in this custom _printf with format on the bottom:
#### -the buffer handling of the C library printf function
#### -handle the flag characters
#### -handle field width
#### -handle precision
#### -handle the length modifiers

## File list:

Here are the main project files:

### 1. ` _printf.c`

This file contains the final code to execute the _printf function.

### 2. ` _main.h`

The header file associated with `_printf.c`. It contains the declarations of the `_printf` function as well as definitions of the structures and macros used in the implementation.

### 3. ` main.c`

Contains the program entry point (`main` function). This file is used for testing and demonstrations of the `_printf` function.

### 4. ` spec_for__printf.C`

This program help the function _printf for the choice of format support with the custom _printf.

### 7. `man` folder with `_printf.3` file

The manual file for the `_printf` function. This file provides detailed documentation about the function, its format specifiers, and its usage. It is usually installed in the system's manuals directory.

```bash
  cd man
```

```bash
  man ./printf.3
```

## auxiliary functions of _printf:

#### - ` 0_putchar.C` it' a simple function of putchar
#### - `1_printChar.c` for the format 'c'
#### - `2_printString.c` for the format 's'
#### - `3_printPercent.c` for print the symbole percent '%'
#### - `4_printInt.c` for the format 'i' and format 'd'


## Exemples of usage:

Here are some examples of using the `_printf` function to compare with the original function printf:

```bash
len = _printf("Let's try to printf a simple sentence.\n");
len2 = printf("Let's try to printf a simple sentence.\n");
_printf("Length:[%d, %i]\n", len, len);
printf("Length:[%d, %i]\n", len2, len2);
_printf("Negative:[%d]\n", -762534);
printf("Negative:[%d]\n", -762534);
_printf("Character:[%c]\n", 'H');
printf("Character:[%c]\n", 'H');
_printf("String:[%s]\n", "I am a string !");
printf("String:[%s]\n", "I am a string !");
len = _printf("Percent:[%%]\n");
len2 = printf("Percent:[%%]\n");
_printf("Len:[%d]\n", len);
printf("Len:[%d]\n", len2);
_printf("Unknown:[%r]\n");
printf("Unknown:[%r]\n");
```
### We obtain after compilation test main.c with sandbox:

```bash
Let's try to printf a simple sentence.
Let's try to printf a simple sentence.
Length:[39, 39]
Length:[39, 39]
Negative:[-762534]
Negative:[-762534]
Character:[H]
Character:[H]
String:[I am a string !]
String:[I am a string !]
Percent:[%]
Percent:[%]
Len:[12]
Len:[12]
Unknown:[%r]
Unknown:[%r]
```

## Flowchart : 
![alt text](<Flowchart color _printf.png>)

## Run Locally:

Clone the project

```bash
  git clone  https://github.com/Gromuf/holbertonschool-printf
```

Go to the project directory

```bash
  cd holbertonschool-printf
```

## Compilation GCC:

```bash
  gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c    (in this way)
```

```bash
  gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c -o printf    (mandatory task)
```

## Verification of Betty style and Betty doc:

```bash
  betty <file.c>
```
If you want more informations and install Betty linter: https://github.com/hs-hq/Betty
```bash
  git clone  https://github.com/hs-hq/Betty
```

## Support:

For support, email 9540@holbertonstudents.com or 9546@holbertonstudents.com or join our Slack channel on Holberton School.
This code is write with *Visual Studio Code software* https://code.visualstudio.com/download  and *vim* on sandbox.

# Hi, We are Louis et Stéphane! 👋

## 🛠 Skills:
shell, C...

## 🚀 About We
We are junior developers...

## Authors:

- [@Gromuf](https://www.github.com/Gromuf)
- [@SDINAHET](https://www.github.com/SDINAHET)

## Appendix:

Any additional information goes here
Secret of printf:
https://intranet.hbtn.io/rltoken/xVFYmqhB09g6odagWE5n_w

Flowcharts:
https://intranet.hbtn.io/concepts/895

Approaching a Project:
https://intranet.hbtn.io/concepts/881

Group Projects:
https://intranet.hbtn.io/concepts/893

Pair Programming - How To:
https://intranet.hbtn.io/concepts/894
