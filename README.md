# ft_printf

A reimplementation of the C `printf` function, built on a variadic argument parser. Second project of the 42 Common Core.

## Build

```bash
make        # produces libftprintf.a
make clean
make fclean
make re
```

## Usage

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("string: %s\n", "hello");
    ft_printf("int: %d, hex: %x, pointer: %p\n", 42, 255, &main);
    return (0);
}
```

`ft_printf` returns the number of characters written, like the original.

## Supported conversions

| Specifier | Prints |
|---|---|
| `%c` | a single character |
| `%s` | a string |
| `%p` | a pointer, in hexadecimal |
| `%d` / `%i` | a signed decimal integer |
| `%u` | an unsigned decimal integer |
| `%x` / `%X` | an unsigned hexadecimal, lower or upper case |
| `%%` | a literal percent sign |

## How it works

The format string is walked once. On a `%`, the next character selects a handler, which pulls its argument off the `va_list` and writes it out, returning its own character count so the total can be accumulated.

A copy of my [Libft](https://github.com/Primoux/Libft) is vendored in `libft/` so the project builds on its own.
