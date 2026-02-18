gcc -c main.c
gcc -c sum.c
ld -dynamic-linker /lib64/ld-linux-x86-64.so.2 /usr/lib/x86_64-linux-gnu/crt1.o /usr/lib/x86_64-linux-gnu/crti.o /usr/lib/x86_64-linux-gnu/crtn.o sum.o main.o -o prog -lc
./prog
# rm *.o
# rm prog
