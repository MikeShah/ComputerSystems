// mmap

// 0000 0000 1-byte of memory
//         ^
//         least significant byte means something like PROT_READ
// 0000 0001 - this means I can 'read memory'

// 0000 0000 1-byte of memory
//        ^
//        this byte means something like PROT_WRITE
// 0000 0010 - this means I can 'write memory'

// 0000 0011 - What does this mean?
//           - This means I can read and write

#define PROT_READ  0b 001
#define PROT_WRITE 0b 010
#define PROT_EXEC  0b 100

// PROT_READ | PROT_WRITE | PROT_EXEC === 0b111

int main(){

	return 0;
}
