# Makefile
# Targets

default: dictionary

dictionary: main.o dict.o
        gcc main.o dict.o -o &@
        
main.o: main.c
        gcc -c main.c
        
dict.o: dict.c
        gcc -c dict.c
