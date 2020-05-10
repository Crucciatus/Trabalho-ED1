# Projeto: Trabalho de estrutura de dados
# @authores: Julio Cesar (@Crucciatus) e Rodrigo Andrade (@Rod1Andrade)

# Estrutura de diretórios do projeto
# libs: Arquivos .h
# src: Arquivos fontes
# objs: Arquivos objetos gerados para link-ediçãoo
# program: Arquivo executável

# Nome do executável
PROJECT_NAME = program

# Compilador
CC = gcc

# FLAGS
CFLAGS = -c -lm

# Arquivos fontes
SRC = $(wildcard ./src/*.c)

# Arquivos Header
HRS = $(wildcard ./libs/*.h)

# Arquivos Objetos
OBJ=$(subst .c,.o,$(subst src,objs,$(SRC)))

# Principal chamada do make
all: $(PROJECT_NAME)

$(PROJECT_NAME): $(OBJ) ./objs/main.o
		$(CC) $^ -o $@

./objs/%.o:	./src/%.c ./libs/%.h
		$(CC) $< $(CFLAGS) -o $@

./objs/main.o: main.c $(HRS)
		$(CC) $< $(CFLAGS) -o $@
	

# Cria a pasta de arquivos objetos
objFolder:
		@mkdir -p objs

# Limpa a pasta e apaga ela
clean:
		@ rm -rf ./objs/*.o
		@ rmdir objs

.PHONY: all clean
