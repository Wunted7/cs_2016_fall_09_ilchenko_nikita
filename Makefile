# Makefile
# Targets

dictionary: main.o dict.o
        gcc main.o dict.o -o &@
        
main.o: main.c dict.h
        gcc -c main.c
        
dict.o: dict.c dict.h
        gcc -c dict.c
