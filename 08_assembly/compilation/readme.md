# every step explicitly defined 
`gcc -E src.c -o src.i`
`gcc -S src.i -o src.asm`
`as --64 src.asm -o src.o`
`ld -o prog -dynamic-linker /lib64/ld-linux-x86-64.so.2 /usr/lib/x86_64-linux-gnu/crt1.o /usr/lib/x86_64-linux-gnu/crti.o -lc src.o /usr/lib/x86_64-linux-gnu/crtn.o`
`./prog`

# easy way

`gcc src.c -o prog`
`./prog`

