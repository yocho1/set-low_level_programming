#!/bin/bash

# Compile all .c files into object files (.o)
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c *.c

# Create static library liball.a from all object files
ar -rc liball.a *.o

# Index the library
ranlib liball.a

# Clean up object files (optional)
rm -f *.o
