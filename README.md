*This project has been created as part of the 42 curriculum by lubatist.*

# ft_printf

## Description

`ft_printf` is a C library that recreates the mandatory part of the standard
`printf` function. It uses variadic arguments to process a format string and
prints each ordinary character or supported conversion to standard output.
The function returns the number of characters printed, or `-1` if it encounters
an unsupported or incomplete conversion, or if a write fails.

Supported conversions are `%c`, `%s`, `%p`, `%d`, `%i`, `%u`, `%x`, `%X`, and
`%%`. Field widths, flags, precision, and length modifiers are not implemented.

## Instructions

Build the static library from the project root:

```sh
make
```

This creates `libftprintf.a`. To use it, include `ft_printf.h` and link the
library when compiling your program. For example:

```sh
cc -Wall -Wextra -Werror main.c -L. -lftprintf -o program
```

The Makefile also provides `make clean` to remove object files, `make fclean`
to remove object files and the library, and `make re` to rebuild the library.
`make test` builds and runs the small example program in `main.c`.

## Algorithm and data structures

The format parser scans the format string from left to right using an integer
index. Ordinary characters are written immediately. When it encounters `%`, it
reads the next character, dispatches to the matching conversion function, and
adds that function's character count to the running total. The parser uses no
heap allocation or output buffer; it writes each character directly with
`write`.

The decimal and hexadecimal conversion functions repeatedly divide the value
by the output base and store each remainder in a fixed-size local character
array. This collects digits in reverse order, so the functions print the array
from the last stored digit to the first. Signed decimal output first prints a
minus sign for negative values and converts the magnitude using a `long`, which
safely handles `INT_MIN`. Pointer output converts the address to `uintptr_t`,
prints the `0x` prefix, and emits hexadecimal digits. Null strings and null
pointers are represented as `(null)` and `(nil)` on the target platform.

The main data structures are the format string and the `va_list` provided by
the C standard library, plus small fixed-size arrays used temporarily to
reverse numeric digits. No dynamic data structure or heap allocation is used.

## Resources

- The 42 `ft_printf` project subject (version 12.1).
- The C standard library documentation for `printf`, variadic arguments
  (`stdarg.h`), and `write`.
- The Linux manual pages: `printf(3)`, `stdarg(3)`, and `write(2)`.

AI assistance was used to help inspect compilation errors, identify missing
headers and function declarations, and review the behavior of null pointer
formatting. The implementation and its conversion functions are part of this
project's source code; the student should understand and be prepared to explain
the parser, variadic argument handling, and number conversion algorithm.
