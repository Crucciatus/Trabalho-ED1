# 🔥 Trabalho de estrutura de dados 1

**Problema** - Elabore uma programa em C para implementar uma Agenda Eletrônica dos alunos da UEG. Serão armazenados os seguintes dados de cada aluno: Matricula, Nome, Telefone, e-mail, curso, disciplinas e outros que acharem necessários. A Agenda deverá ser implementada através de uma Lista Encadeada. Como um aluno pode ter vários telefones e disciplinas, estes campos também devem ser implementados como uma Lista cada. Colocar todas as funções de manipulação da lista (criar, incluir, excluir, buscar, listar); Trabalhar através de menu. 

---

## Padronização

> Definir lingua padrão: Inglês ou português para a nomeação das variáveis
- [x] Inglês   
- [ ] Português 

 1. Arquivo de implementação ".c" e arquivo de interface ".h"
 2. Padrão de nome de variáveis: **camelCase**
 3. Padrão para nome de funções: 
	- 3.1. Função de criação: **create_nomeEntidade**
	- 3.2 Função de destruição: **destruct_nomeEntidade**
	- 3.3 Função da entidade especifica:  **nomeEntidade_nomeFunção**, ex: aluno_inserirNumero
4. Espaçamento de 2 tabstop
5. Nunca alterar o mesmo arquivo para não dar conflito na hora de mesclar.
6. Sempre informar o que está alterando e fazendo
7. Sempre solicitar revisão do código (ambos)
8. Só mesclar códigos revisados por todos.
 
---

## Glossário

|Termo| Descrição |
|--|--|
| Incluir | Adicionar a instância de alguma entidade em uma lista  |
| Alocar | usar função malloc |
| Destruir | usar função free |

---

## Requisitos funcionais

> Sinta-se a vontade para alterar tudo

|RF| Descrição |
|--|--|
| Manipular agenda | Criar uma agenda e destruir  |
| Manipular aluno | Criar, incluir, excluir e buscar  |
| Manipular aluno-telefone | Criar, incluir, excluir e buscar  |
| Manipular aluno-disciplina | Criar, incluir, excluir e buscar  |

---

## Requisitos não funcionais

> Sinta-se a vontade para alterar tudo

|RNF| Descrição |
|--|--|
| Alocar agenda | Retornar uma referência para a agenda |
| Alocar aluno | Retornar uma referência de aluno para ser **incluída** na lista |
| Alocar telefone | Retornar uma referência de telefone para ser **incluída** em um aluno |
| Alocar disciplina | Retornar uma referência de disciplina para ser **incluída** em um aluno |
| Destruir disciplina, telefone, aluno e agenda |

---

## Entidades

> Sinta-se a vontade para alterar tudo

### 📅 Agenda

Na estrutura agenda é onde a manipulação de cada __aluno__ pode ser feita.
Os alunos vão estar contidos dentro da estrutura que representa uma __agenda__.
* Deve ser possível alterar os dados de um aluno.
* Deve ser possível excluir um aluno especifico.
* Deve ser possível incluir um novo aluno novo.
* Deve ser possível listar todos os alunos.
* Deve ser possível buscar um aluno pela matricula.
* Deve ser possível buscar uma lista de alunos pela disciplina (feature).

> Uma agenda tem um ou muitos alunos

### 🧑‍🎓 Aluno 

O aluno é a entidade principal, as operações vão ser feitas alterando a estrutura aluno.  

| Campo | Tipo |
|--|--|
|Matricula  | Integer  |
|Nome  | String  |
|Telefone  | String  |
|E-mail  | String  |
|Disciplina  | String  |

* Um aluno pode ter um ou vários números de telefone.
* Um aluno pode estar matriculado em uma ou mais disciplinas.

### 📱 Telefone

O telefone é uma estrutura com  DDD e número.
* Deve ser possível retornar um número aplicando a seguinte mascara: (DDD) 9-9999-9999

### 📚 Disciplina

|Campo| Tipo |
|--|--|
| Nome da disciplina | String |

--- 

 ## Regras de negócio

A definir com o @Cruciatus

---
