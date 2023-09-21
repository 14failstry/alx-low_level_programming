nasm -f elf64 -o hello.o hello.asm
gcc -nostartfiles -o hello hello.o -no-pie -lm

