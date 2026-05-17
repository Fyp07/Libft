*This project has been created as part of the 42 curriculum by fbarrada.*

<div align="center">

<img src="https://capsule-render.vercel.app/api?type=rect&color=00000000&height=200&section=header&text=LIBFT&fontSize=72&fontColor=ffa93f&animation=fadeIn&fontAlignY=45&desc=★%20Custom%20C%20Standard%20Library%20★&descAlignY=65&descSize=16&descColor=ffa93f" width="100%"/>
<br/>

![Language](https://img.shields.io/badge/Language-C-fac1b0?style=for-the-badge&labelColor=2d1410)
![School](https://img.shields.io/badge/42-Porto-ffa93f?style=for-the-badge&labelColor=2d1410)
![Status](https://img.shields.io/badge/Status-COMPLETED-d8e9a2?style=for-the-badge&labelColor=2d1410)

<br/>

★ ✦ ★ ✦ ★ ✦ ★ ✦ ★ ✦ ★ ✦ ★ ✦ ★ ✦ ★ ✦ ★ ✦ ★ ✦ ★ ✦ ★

</div>

---

<div align="center">

## ✦ SCORE ✦

<!-- Replace the score below with yours and add your approval badge -->
![Score](https://img.shields.io/badge/Score-100%2F100-fac1b0?style=for-the-badge&labelColor=2d1410)

<br/>

<!-- Add your approval badge image here -->
<img src="https://github.com/Fyp07/Libft/raw/main/assets/LIBFT_APPROVED.svg" width="180"/>

</div>

---

<div align="center">

## ✦ DESCRIPTION ✦

</div>

`libft` is a custom reimplementation of the C standard library built entirely from scratch — no `#include <string.h>`, no shortcuts. Every function written by hand, tested, and understood from the inside out. This library becomes the personal toolbox that carries through every future C project at 42.

---

<div align="center">

## ✦ INSTRUCTIONS ✦

</div>

**Clone and compile:**

```bash
git clone https://github.com/Fyp07/libft.git
cd libft/Libft
make
```

**Use in your project:**

```bash
cc -Wall -Wextra -Werror your_file.c -L. -lft -o your_program
```

**Include the header:**

```c
#include "libft.h"
```

**Makefile rules:**

| Rule | Action |
|:---|:---|
| `make` | Compiles the full library |
| `make clean` | Removes object files |
| `make fclean` | Removes object files + `libft.a` |
| `make re` | `fclean` + `all` |

**Compilation norms:**

| Setting | Value |
|:---|:---|
| Compiler | `cc` |
| Flags | `-Wall -Wextra -Werror` |
| Output | `libft.a` |
| Archiver | `ar rcs` |

---

<div align="center">

## ✦ THE FUNCTIONS ✦

</div>

**Part 1 — Character Classification & Conversion**

| Function | Description |
|:---|:---|
| `ft_isalpha` `ft_isdigit` `ft_isalnum` `ft_isascii` `ft_isprint` | Check if a character belongs to a given class — returns `1` if true, `0` if false |
| `ft_toupper` `ft_tolower` | Convert character case |

**Part 1 — String Manipulation**

| Function | Description |
|:---|:---|
| `ft_strlen` | Length of a string |
| `ft_strchr` `ft_strrchr` | Find first/last occurrence of a character |
| `ft_strncmp` | Compare two strings up to `n` characters |
| `ft_strlcpy` `ft_strlcat` | Copy/concatenate strings with size limit |
| `ft_strnstr` | Locate a substring within a string |
| `ft_strdup` | Duplicate a string using `malloc` |

**Part 1 — Memory Manipulation**

| Function | Description |
|:---|:---|
| `ft_memset` `ft_bzero` | Fill/zero out a memory block |
| `ft_memcpy` `ft_memmove` | Copy memory (memmove handles overlap) |
| `ft_memchr` `ft_memcmp` | Search/compare memory areas |

**Part 1 — Conversion & Allocation**

| Function | Description |
|:---|:---|
| `ft_atoi` | Convert string to integer |
| `ft_calloc` | Allocate zeroed memory |

**Part 2 — Additional Functions**

| Function | Description |
|:---|:---|
| `ft_substr` | Extract a substring |
| `ft_strjoin` | Concatenate two strings into a new one |
| `ft_strtrim` | Trim characters from start and end |
| `ft_split` | Split a string by a delimiter into an array |
| `ft_itoa` | Convert integer to string |
| `ft_strmapi` | Apply a function to each character, return new string |
| `ft_striteri` | Apply a function to each character in place |
| `ft_putchar_fd` `ft_putstr_fd` `ft_putendl_fd` `ft_putnbr_fd` | Output char/string/int to a file descriptor |

**Part 3 — Linked List**

```c
typedef struct s_list
{
    void         *content;
    struct s_list *next;
} t_list;
```

| Function | Description |
|:---|:---|
| `ft_lstnew` | Create a new node |
| `ft_lstadd_front` `ft_lstadd_back` | Add a node at the beginning/end |
| `ft_lstsize` | Count nodes in the list |
| `ft_lstlast` | Return the last node |
| `ft_lstdelone` | Free a single node's content and itself |
| `ft_lstclear` | Delete and free all nodes |
| `ft_lstiter` | Apply a function to each node's content |
| `ft_lstmap` | Apply a function and create a new list with results |

---

<div align="center">

★ ✦ ★ ✦ ★ ✦ ★ ✦ ★ ✦ ★ ✦ ★ ✦ ★ ✦ ★ ✦ ★ ✦ ★ ✦ ★ ✦ ★

*crafted with love · fbarrada · 42 Porto*

<img src="https://capsule-render.vercel.app/api?type=venom&color=gradient&customColorList=0,2,4&height=100&section=footer&reversal=true" width="100%"/>

</div>
