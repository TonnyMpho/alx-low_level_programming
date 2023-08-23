## C - Makefiles

### Resources
##### Read:

- [make-official documentation](https://www.gnu.org/software/make/manual/html_node/)

### Tasks

### 0. make -f 0-Makefile

Makefile.

- rules: all

### 1. make -f 1-Makefile

- rules: all
- variables: CC, SRC
	- CC: the compiler to be used
	- SRC: the .c files

### - 2. make -f 2-Makefile

- rules: all
- variables: CC, SRC, OBJ, NAME
	- CC: the compiler to be used
	- SRC: the .c files
	- OBJ: the .o files
	- NAME: the name of the executable
- The all rule should recompiles the updated source files

### 3. make -f 3-Makefile

- rules: all, clean, oclean, fclean, re

### 4. A complete Makefile

- rules: all, clean, fclean, oclean, re
	- all: builds the executable
	- clean: deletes all Emacs and Vim temporary files along with the executable
	- oclean: deletes the object files
	- fclean: deletes all temporary files, the executable, and the object files
	- re: forces recompilation of all source files
- variables: CC, SRC, OBJ, NAME, RM, CFLAGS
	- CC: compiler to be used
	- SRC: the .c files
	- OBJ: the .o files
	- NAME: the name of the executable
	- RM: the program to delete files
	- CFLAGS: your favorite compiler flags: -Wall -Werror -Wextra -pedantic
- The all rule recompiles only the updated source files

### 5. Island Perimeter

#### Afunction def island_perimeter(grid): that returns the perimeter of the island described in grid:

- grid is a list of list of integers:
	- 0 represents a water zone
	- 1 represents a land zone
	- One cell is a square with side length 1
	- Grid cells are connected horizontally/vertically (not diagonally).
	- Grid is rectangular, width and height don’t exceed 100
- Grid is completely surrounded by water, and there is one island (or nothing).
- The island doesn’t have “lakes” (water inside that isn’t connected to the water around the island).
