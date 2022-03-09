#!/bin/sh
#
# steps based on 42 video https://elearning.intra.42.fr/notions/c-piscine-c-06-c-09/subnotions/librairies/videos/les-librairies
#
# 1st step - create object files
#
# In order to create a library it is required to use -c flag with gcc in order to generate object files (*.o)
#
# from 'gcc -help' :
#
# -c         Only run preprocess, compile, and assemble steps
#
gcc -Wall -Werror -Wextra ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c -c
#
# 2nd step - create a library with the object files
#
# from 'man ar' :
#
# ar -- create and maintain library archives
#
# ar -r [-cuTLsv] archive file ...
#
#    -r      Replace or add the specified files to the archive.  If the archive does not exist a new archive file is created.  Files that replace
#            existing files do not change the order of the files within the archive.  New files are appended to the archive unless one of the options
#            -a, -b or -i is specified.
#
#    -c      Whenever an archive is created, an informational message to that effect is written to standard error.  If the -c option is specified, ar
#            creates the archive silently.
#
# Note: Extension .a refers to static libraries
#
ar rc libft.a ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
#
# 3rd step - clean all temporary files
rm ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
#
# Other notes, not related to this exercise: 
#
# 1. If it would be required to compile with the main.c just type:
# gcc main.c -L. lstr
#
# 2. Creates an index in the library that allows gcc to know where to go (e.g.: put putchar in posiiton 1, etc.) and otpimizes compilation time when using gcc
# ranlib libft.a