
gcc -c STR_kmp.c -o main.o
gcc -c dict.c -o dict.o
gcc main.o dict.o -o p
./p