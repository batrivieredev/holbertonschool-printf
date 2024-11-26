# printf Project

This repository contains a custom implementation of the `printf` function, developed as part of the Holberton School curriculum.

## Table of Contents

- [Description](#description)
- [Usage](#usage)
- [Examples](#examples)
- [Authors](#authors)

## Description

The `printf` function is a standard library function in C that sends formatted output to `stdout`. This project involves creating our own version of `printf` to understand its inner workings and improve our skills in C programming.

## Usage

To use the custom `printf` function, include the header file in your source code:

```c
#include "holberton.h"
```

Compile the code with the provided `printf` implementation:

```sh
gcc -Wall -Werror -Wextra -pedantic *.c -o printf
```

## Examples

Here are some examples of how to use the custom `printf` function:

```c
_printf("Hello, World!\n");
_printf("Number: %d\n", 42);
_printf("String: %s\n", "Holberton");
```

## Authors

- **Baptiste RIVIERE** - [GitHub Profile](https://github.com/batrivieredev)
