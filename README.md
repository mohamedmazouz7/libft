<div align="center">

# 📚 libft

**Your very own C standard library — built from scratch, one function at a time.**

![C](https://img.shields.io/badge/language-C-blue?style=for-the-badge&logo=c)
![42](https://img.shields.io/badge/school-42-black?style=for-the-badge)
![Status](https://img.shields.io/badge/status-complete-brightgreen?style=for-the-badge)

</div>

---

## 🧠 What is libft?

`libft` is the foundation project at 42 School — and arguably the most important one. You re-implement a large chunk of the C standard library **entirely from scratch**, without relying on any existing libc functions. The result is a personal, portable library you carry with you throughout your entire 42 journey.

No shortcuts. No `#include <string.h>`. Pure C mastery.

This library includes:
- ✅ **23 libc function reimplementations** (Part 1)
- ✅ **11 additional utility functions** (Part 2)
- ✅ **Memory-safe operations** with proper bounds checking
- ✅ **Function pointers** for advanced string manipulation

---

## 🚀 Quick Start

### Clone & Build

```bash
git clone https://github.com/mohamedmazouz7/libft libft
cd libft
make
```

This generates `libft.a`, your compiled static library.

### Link to Your Project

In your project's Makefile:

```makefile
LIBFT = ./libft/libft.a
CFLAGS = -Wall -Wextra -Werror -I./libft

your_program: main.o $(LIBFT)
	gcc $(CFLAGS) -o your_program main.o -L./libft -lft
```

In your C files:

```c
#include "libft.h"
```

### Makefile Targets

| Command | Action |
|---------|--------|
| `make` | Compile the library |
| `make clean` | Remove object files (`.o`) |
| `make fclean` | Remove objects + library (`libft.a`) |
| `make re` | Full rebuild from scratch |

---

## 📦 Functions Implemented

### Part 1 — libc Function Reimplementations

These are the core C standard library functions you'll reimplement:

#### Character Classification
| Function | Description |
|----------|-------------|
| `ft_isalpha` | Check if character is alphabetic |
| `ft_isdigit` | Check if character is a digit |
| `ft_isalnum` | Check if character is alphanumeric |
| `ft_isascii` | Check if character is ASCII |
| `ft_isprint` | Check if character is printable |
| `ft_toupper` | Convert to uppercase |
| `ft_tolower` | Convert to lowercase |

#### String Inspection
| Function | Description |
|----------|-------------|
| `ft_strlen` | Compute string length |
| `ft_strchr` | Locate character in string |
| `ft_strrchr` | Locate character from the right |
| `ft_strncmp` | Compare strings up to n bytes |
| `ft_strnstr` | Locate substring in string |

#### Memory Operations
| Function | Description |
|----------|-------------|
| `ft_memset` | Fill memory with a byte value |
| `ft_memcpy` | Copy memory area |
| `ft_memmove` | Safe overlapping memory copy |
| `ft_memchr` | Scan memory for a byte |
| `ft_memcmp` | Compare memory areas |
| `ft_bzero` | Zero out memory |

#### String Copying & Conversion
| Function | Description |
|----------|-------------|
| `ft_strlcpy` | Size-bounded string copy |
| `ft_strlcat` | Size-bounded string concatenation |
| `ft_strdup` | Duplicate a string |
| `ft_atoi` | Convert ASCII string to integer |
| `ft_calloc` | Allocate zero-initialized memory |

### Part 2 — Additional Utility Functions

Advanced string manipulation and I/O functions built on Part 1:

#### String Processing
| Function | Description |
|----------|-------------|
| `ft_substr` | Extract substring from position |
| `ft_strjoin` | Concatenate two strings |
| `ft_strtrim` | Remove characters from string edges |
| `ft_split` | Split string by delimiter |
| `ft_itoa` | Convert integer to string |

#### Functional Programming
| Function | Description |
|----------|-------------|
| `ft_strmapi` | Apply function to each character (returns new string) |
| `ft_striteri` | Apply function to each character (modifies in place) |

#### Output to File Descriptor
| Function | Description |
|----------|-------------|
| `ft_putchar_fd` | Write a character to file descriptor |
| `ft_putstr_fd` | Write a string to file descriptor |
| `ft_putendl_fd` | Write a string + newline to fd |
| `ft_putnbr_fd` | Write a number to file descriptor |

---

## 💡 Usage Examples

Get started with practical code samples:

### Basic String Operations

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    // String length
    printf("Length: %d\n", ft_strlen("Hello"));  // Output: 5
    
    // Character classification
    if (ft_isdigit('5'))
        printf("It's a digit!\n");
    
    // String duplication
    char *copy = ft_strdup("Hello");
    printf("%s\n", copy);
    free(copy);
    
    return 0;
}
```

### String Concatenation

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    // Join two strings
    char *result = ft_strjoin("Hello", " World");
    printf("%s\n", result);  // Output: Hello World
    free(result);
    
    return 0;
}
```

### String Splitting

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char **words = ft_split("Hello World Foo", ' ');
    
    for (int i = 0; words[i]; i++)
    {
        printf("Word %d: %s\n", i, words[i]);
        free(words[i]);
    }
    free(words);
    
    return 0;
}
```

### Using Function Pointers

```c
#include "libft.h"
#include <stdio.h>
#include <ctype.h>

// Transform function to uppercase
char to_upper(unsigned int i, char c)
{
    (void)i;
    return (toupper(c));
}

int main(void)
{
    char *str = ft_strmapi("hello world", to_upper);
    printf("%s\n", str);  // Output: HELLO WORLD
    free(str);
    
    return 0;
}
```

### Memory Management

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    // Allocate and zero memory
    int *arr = ft_calloc(10, sizeof(int));
    
    // Copy memory safely
    char src[] = "Hello";
    char dst[6];
    ft_memcpy(dst, src, 5);
    dst[5] = '\0';
    
    printf("%s\n", dst);
    free(arr);
    
    return 0;
}
```

---

## 🔑 Key Features

### Design Principles

✅ **No Global Variables** — All functions are stateless  
✅ **Static Helpers** — Internal functions scoped to their files  
✅ **Strict Compilation** — All files compile with `-Wall -Wextra -Werror`  
✅ **Standard Compliance** — Matches original libc behavior  
✅ **Memory Safe** — Proper allocation, bounds checking, and error handling  

### Return Values

- **Character Classification Functions** return `1` (true) or `0` (false)
- **Memory Allocation Functions** return `NULL` on failure
- **String Functions** handle size safely and respect null terminators

---

## 🏗️ Implementation Details

### File Structure

```
libft/
├── ft_*.c          # Individual function implementations
├── libft.h         # Header file with prototypes
├── Makefile        # Build configuration
└── README.md       # This file
```

### Compilation Rules

```bash
# Compile with required flags
gcc -Wall -Wextra -Werror -c ft_strlen.c

# Create static library with ar
ar -r libft.a *.o

# Clean up object files
rm -f *.o
```

---

## 🧪 Testing

To test your implementation:

```bash
# Compile with the library
gcc -Wall -Wextra -Werror -L./libft -lft -I./libft test.c -o test

# Run tests
./test
```

---

## 📝 Technical Notes

- **Architecture:** Static library (`libft.a`)
- **Build Tool:** GNU Make with `ar` command (not `libtool`)
- **File Organization:** All `.c` files in root directory
- **Function Naming:** All functions prefixed with `ft_`
- **C Standard:** C89 compatible (no C99 `restrict` qualifier)
- **External Functions:** Only `malloc`, `free`, and `write` allowed

---

## 💪 What You'll Learn

By implementing libft, you'll master:
- 🎯 **Core C concepts** — pointers, memory management, data types
- 🧬 **String manipulation** — parsing, tokenizing, transforming
- 🎪 **Advanced patterns** — function pointers, variadic behavior
- ⚡ **Performance** — efficient memory and string operations
- 🛡️ **Safety** — bounds checking, error handling, memory leaks

---

<div align="center">

**The foundation of everything.**

*Created at 42 School as part of the Common Core curriculum.*

</div>
