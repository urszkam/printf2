*This project has been created as part of the 42 curriculum by urkamins.*

# Table of Contents
- [Description](#description)
    - [Mandatory Part](#mandatory-part)
    - [Bonus Part](#bonus-part)
- [Instructions](#instructions)
    - [Prerequisites](#prerequisites)
    - [Build the Library](#build-the-library)
    - [Usage](#usage)
    - [Cleanup](#cleanup)
- [Resources](#resources)
- [Implementation](#implementation)

# Description
This project implements a simpler version of original printf function.

## Mandatory Part
The function supports %c, %s, %p, %d, %i, %u, %x, %X and %%.
• %c Prints a single character.
• %s Prints a string (as defined by the common C convention).
• %p The void * pointer argument has to be printed in hexadecimal format.
• %d Prints a decimal (base 10) number.
• %i Prints an integer in base 10.
• %u Prints an unsigned decimal (base 10) number.
• %x Prints a number in hexadecimal (base 16) lowercase format.
• %X Prints a number in hexadecimal (base 16) uppercase format.
• %% Prints a percent sign.

## Bonus Part
The implemented bonus flags are #, + and space.

# Instructions
To run and use ft_printf function, follow these steps:

## Prerequisites
Ensure you have the following installed on your system:

- C compiler (e.g., cc)
- Make

## Build the Library
From the project directory, run:

```bash
make
```

This creates `libftprintf.a` in the root directory.

## Usage
Include the project header in the source file:

```c
#include "ft_printf.h"
```
Then compile and link your program from the project directory:

```bash
cc -Wall -Wextra -Werror -I. my_program.c -L. -lftprintf -o my_program
```

## Cleanup
If needed, you can clean the generated files using:

```bash
make clean
```
This removes the object files but keeps `libftprintf.a`.
To remove both object files and the library, use:

```bash
make fclean
```

# Resources

- [printf Linux manual](https://man7.org/linux/man-pages/man3/printf.3.html)
- [va_list](https://en.cppreference.com/c/variadic/va_list) - the type that holds the argument list.
- [va_start](https://en.cppreference.com/c/variadic/va_start) - starts reading variable arguments.
- [va_arg](https://en.cppreference.com/c/variadic/va_arg) - retrieves the next argument.
- [va_end](https://en.cppreference.com/c/variadic/va_end) - ends access to the argument list.

# Implementation

1. ft_printf implementation starts with format validation. At each %, it remembers that position, skips supported flags and checks the following specifier. It returns whether the format is valid and sets format_end to either the string terminator or the first invalid %.
2. The function then initializes va_list with va_start and sets characters counter to zero.
3. The main loop iterates through the format until it reaches format_end. It sends standard characters to put_c, which calls write and adds each returned value to counter.
4. When the loop reaches %, it skips that character. extract_flags reads the following flags and saves which ones appeared in a single number. The format pointer now points to the conversion character.
5. convert checks that character and calls the matching printing function. If it needs a value, va_arg reads the next argument. The same argument list is used throughout, so each call reads the next value. The flags are passed to the printing function when needed.
6. The printing functions write one character at a time. To print a number, a helper calls itself with the number divided by 10 or 16 until it reaches the first digit. It writes the digits as those calls return. A sign or prefix is written before the digits when needed.
7. Each printing function adds up the values returned by its writes. ft_printf adds this to counter and moves to the next character in the format.
8. If validation found an invalid %, the loop stops before it. After the loop, ft_printf sets the result to -1 if the format was invalid or counter is negative. It calls va_end before returning.
