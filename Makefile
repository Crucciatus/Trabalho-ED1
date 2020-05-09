# Configuro o meu compilador
CC = gcc

# Não quero linkar os arquivos 
FLAGS = -c -lm

# # wildcard
# SRC = (wildcard .c)

# Entry point
all: program

# nome: depe
program: student.o main.o
		$(CC) obj/student.o obj/main.o -o program

student.o: 
		$(CC) $(FLAGS) fonts/student.c -o obj/student.o

main.o: 
		$(CC) $(FLAGS) main.c -o obj/main.o

clean:
		rm obj/*.o 