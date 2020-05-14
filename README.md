
# 🔥 Trabalho de estrutura de dados 1

**Problema** - Elabore uma programa em C para implementar uma Agenda Eletrônica dos alunos da UEG. Serão armazenados os seguintes dados de cada aluno: Matricula, Nome, Telefone, e-mail, curso, disciplinas e outros que acharem necessários. A Agenda deverá ser implementada através de uma Lista Encadeada. Como um aluno pode ter vários telefones e disciplinas, estes campos também devem ser implementados como uma Lista cada. Colocar todas as funções de manipulação da lista (criar, incluir, excluir, buscar, listar); Trabalhar através de menu.

## 📍 Disclaimer 

**Sistema operacional:**  Ubuntu 20.04

**Compilador:** gcc version 9.3.0 (Ubuntu 9.3.0-10ubuntu2) 

Caso encontre problemas para compilar por causa da diferença de sistemas operacionais, segue o vídeo usando programa [aqui](https://youtube.com/).

Decidimos por fazer o projeto o mais modularizado o possível. Como foi feito remotamente, buscamos essa abordagem para ter o melhor aproveitamento de ambos.

Na pasta **libs** estão os arquivos headers que representam a nossa interface pública, funções que podem ser invocadas e usadas.

Na pasta **src** estão os arquivos concretos de implementação das interfaces. Funções e variáveis marcadas com __static__ são privadas do arquivo ".c" e só podem ser acessadas dentro do escopo do arquivo.

Na pasta **objs** estão os arquivos ".o" gerados no processo do compilação.

Na pasta **raiz**:
1. main.c - Entry point que invoca os métodos **start()** e **stop()**
2. Makefile - Rotina de compilação pelo **make**
3. program - Binário gerado

## Padrões adotados

Todos os métodos que instanciam uma entidade, seja uma Lista ou uma entidade como Student ou Discipline. Seguem o seguinte padrão

```C
Entidade new_NomeDaEntidade();
```

Para destruir o objeto da memória segue o seguinte padrão 
```C
void destruct_NomeDaEntidade(Entidade entidade);
```

> Esse padrão foi de suma importância para nós e foi definido previamente. Facilitou nas rotina
> de desalocamento de memória e de uso sem conhecer os detalhes de implementação.

## Autores

|[<img src="https://avatars1.githubusercontent.com/u/45038312?s=400&u=07ff6cd97eb80c87f7c67da987da219b87ddb615&v=4" width="115"><br><sub>@Crucciatus</sub>](https://github.com/Crucciatus) | [<img src="https://avatars3.githubusercontent.com/u/51142291?s=400&u=b376313fa7a778c5b3ad71c86911e78654cf9812&v=4" width="115"><br><sub>@Rod1Andrade</sub>](https://github.com/Rod1Andrade) |
|:-:|:-:|
