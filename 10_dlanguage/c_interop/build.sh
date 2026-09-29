# Build the C object file
gcc -c func.c

# Build our D file
dmd -c main.d

# Glue together the object files 
dmd main.o func.o -of=prog

# Cleanup
rm main.o func.o
