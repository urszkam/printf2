*This project has been created as part of the 42 curriculum by urkamins.*

# Table of Contents
- [Description](#description)
    - [Mandatory Part](#mandatory-part)
    - [Bonus Part](#bonus-part)
- [Implementation](#implementation)
- [Instructions](#getting-started)
    - [Prerequisites](#prerequisites)
    - [Build The Library](#build-the-library)
    - [Usage](#usage)
    - [Cleanup](#cleanup)

# Description
This project focuses on creating a custom C library, providing essential functions for C assignments at 42 Warsaw. The library includes libc function replicas and additional utilities.

## Mandatory Part


## Bonus Part



# Implementation


# Instructions

To run and use the custom printf function, follow these steps:

## Prerequisites
Ensure you have the following installed on your system:

- C Compiler (e.g., GCC)
- Make

## Clone the Repository
Clone the printf repository to your local machine:

```bash
git clone <url> printf
```

## Build the Library
Navigate to the libprintf directory and use the provided Makefile to build the library:

```bash
make
```

This command will compile the source files and create the libprintf.a library.

## Usage
In your C source code file, include the libprintf.h header file at the beginning
 to have access to the function prototypes.

```c
#include "libft.h"
```
Then compile your main program using the command:

```bash
cc -o my_program main.c -L. -lprintf -I./
```

## Cleanup
If needed, you can clean the generated files using:

```bash
make clean
```
This removes the object files but keeps the compiled library (libprintf.a).
To remove both object files and the library, use:

```bash
make fclean
```

# Resources

- [NetBSD Manual Pages](https://man.netbsd.org/) - reference for BSD libc functions.
