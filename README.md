# 🏆 Sistema de Controle de Campeonato

## 📌 Sobre o projeto

Este projeto foi desenvolvido como atividade avaliativa da disciplina de **Práticas Profissionais II**, sob orientação do professor **Sidney de Castro Lima**.

O objetivo é desenvolver um sistema de controle de campeonato utilizando a linguagem **C**, permitindo registrar os resultados das equipes, calcular pontuações, classificar campanhas e apresentar estatísticas gerais do campeonato.

O principal desafio da atividade é implementar todas as funcionalidades **sem utilizar vetores, matrizes, structs ou alocação dinâmica**, trabalhando exclusivamente com variáveis simples, estruturas condicionais e estruturas de repetição.

## ⚙️ Funcionalidades

O sistema possui um menu interativo com cinco funcionalidades principais:

**1. Registrar resultados do campeonato**

- Registrar vitórias, empates e derrotas de cada equipe.
- Validar os resultados informados.
- Calcular automaticamente a pontuação.
- Classificar o desempenho de cada equipe.
- Atualizar as estatísticas gerais do campeonato.

**2. Mostrar resumo do campeonato**

- Quantidade de equipes participantes.
- Total de vitórias, empates e derrotas.
- Pontuação total e média de pontos.
- Quantidade de equipes por classificação.
- Maior e menor pontuação registrada.
- Identificação das primeiras equipes com maior e menor pontuação.
- Quantidade de equipes empatadas nas pontuações extremas.

**3. Mostrar regulamento**

- Exibir as regras de pontuação.
- Apresentar os critérios de classificação.
- Informar os limites de equipes e partidas.

**4. Simular campanha de uma equipe**

- Realizar de 1 a 5 simulações.
- Informar resultados hipotéticos.
- Calcular os pontos e a classificação.
- Preservar as estatísticas do campeonato original.

**5. Encerrar sistema**

- Finalizar a execução do programa.

## 📊 Sistema de pontuação

Cada equipe recebe pontos de acordo com os resultados obtidos:

| Resultado | Pontuação |
|---|---|
| Vitória | 3 pontos |
| Empate | 1 ponto |
| Derrota | 0 pontos |

A pontuação total é calculada pela fórmula:

**Pontos = (Vitórias × 3) + Empates**

### Classificação das equipes

| Pontuação | Classificação |
|---|---|
| 15 pontos ou mais | Excelente campanha |
| 10 a 14 pontos | Boa campanha |
| 5 a 9 pontos | Campanha regular |
| Menos de 5 pontos | Campanha ruim |

## 🛠️ Tecnologias e conceitos utilizados

**Linguagem:** C

**Conceitos de programação:**

- `if`, `else if` e `else` — estruturas condicionais.
- `switch` — gerenciamento das opções do menu.
- `for` — repetição para processamento de equipes e simulações.
- `while` — validação de entradas e controle do menu.
- `printf` e `scanf` — entrada e saída de dados.
- Variáveis simples, contadores e acumuladores.
- Operadores aritméticos, relacionais e lógicos.

## 📋 Regras e validações

Para garantir o funcionamento do sistema, foram estabelecidas as seguintes restrições:

- O campeonato deve possuir entre **3 e 10 equipes**.
- Cada equipe deve disputar entre **1 e 10 jogos**.
- Todas as equipes devem possuir a mesma quantidade de jogos.
- Não são permitidos valores negativos para vitórias, empates ou derrotas.
- A soma dos resultados deve corresponder ao número de jogos configurado.
- Entradas numéricas inválidas devem ser solicitadas novamente.
- Um novo registro substitui o resumo anterior.
- As simulações não podem modificar os resultados registrados.

## 💻 Como executar

### Pré-requisitos

É necessário possuir um compilador C instalado, como o **GCC**.

### 1. Clone o repositório

```bash
git clone URL_DO_REPOSITORIO
```

### 2. Acesse a pasta do projeto

```bash
cd NOME_DO_REPOSITORIO
```

### 3. Compile o programa

Considerando que o código esteja no arquivo `main.c`:

```bash
gcc main.c -o campeonato
```

### 4. Execute o programa

**Linux:**

```bash
./campeonato
```

**Windows:**

```powershell
.\campeonato.exe
```

## 🎯 Objetivos de aprendizagem

O desenvolvimento deste projeto tem como finalidade consolidar os conhecimentos fundamentais de programação estruturada, especialmente:

- Aplicação de estruturas condicionais e de repetição.
- Desenvolvimento de menus interativos.
- Validação de dados fornecidos pelo usuário.
- Utilização de contadores e acumuladores.
- Resolução de problemas sem estruturas de armazenamento como vetores.
- Organização e interpretação de dados estatísticos.
- Desenvolvimento do raciocínio lógico e algorítmico.

## 👨‍💻 Autores

Projeto acadêmico desenvolvido em trio para a disciplina de **Práticas Profissionais II**.

**Integrantes:**
- Leonardo Maciel Correia
- [Nome do segundo integrante]
- [Nome do terceiro integrante]

**Professor:** Sidney de Castro Lima

---

*Projeto desenvolvido para fins educacionais, com foco na aplicação prática dos fundamentos da linguagem C.*
