gcc -c main.c
gcc -c sum.c
ld main.o sum.o -o prog -lc
