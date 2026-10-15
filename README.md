# 🏆 Sistema de Controle de Campeonato

## 📌 Sobre o projeto

Este projeto foi desenvolvido como atividade avaliativa da disciplina de **Práticas Profissionais II**, sob orientação do professor **Sidney de Castro Lima**.

O sistema foi desenvolvido em **linguagem C** e permite registrar resultados de equipes, calcular pontuações, classificar campanhas e apresentar estatísticas gerais de um campeonato.

O principal desafio é implementar essas funcionalidades **sem utilizar vetores, matrizes, structs ou alocação dinâmica**, aplicando conceitos fundamentais de programação estruturada.

## ⚙️ Funcionalidades

O sistema possui um menu interativo com cinco opções:

1. **Registrar resultados do campeonato:** permite informar vitórias, empates e derrotas das equipes, calcular suas pontuações e classificar as campanhas.
2. **Mostrar resumo do campeonato:** apresenta estatísticas gerais, incluindo totais, média de pontos, classificações e pontuações extremas.
3. **Mostrar regulamento:** exibe as regras de pontuação, classificações e limites do campeonato.
4. **Simular campanha de uma equipe:** permite realizar simulações de resultados sem modificar as estatísticas do campeonato.
5. **Encerrar sistema:** finaliza a execução do programa.

## 📊 Sistema de pontuação

| Resultado | Pontuação |
|---|---|
| Vitória | 3 pontos |
| Empate | 1 ponto |
| Derrota | 0 pontos |

A pontuação de cada equipe é calculada utilizando:

**Pontos = (Vitórias × 3) + Empates**

### Classificação das equipes

| Pontuação | Classificação |
|---|---|
| 15 pontos ou mais | Excelente campanha |
| 10 a 14 pontos | Boa campanha |
| 5 a 9 pontos | Campanha regular |
| Menos de 5 pontos | Campanha ruim |

## 🛠️ Tecnologias utilizadas

- **Linguagem:** C
- **Compilador:** GCC
- **Controle de versão:** Git e GitHub

### Conceitos aplicados

- Estruturas condicionais: `if`, `else if` e `else`.
- Estrutura de seleção: `switch`.
- Estruturas de repetição: `for`, `while` e `do while`.
- Entrada e saída de dados: `scanf` e `printf`.
- Variáveis simples, contadores e acumuladores.
- Operadores aritméticos, relacionais e lógicos.

## 🚀 Instalação e execução

### Pré-requisitos

Para executar o projeto, é necessário ter instalado:

- **Git:** para clonar o repositório.
- **GCC:** para compilar o código em C.
- Um terminal, como o Terminal do Linux, PowerShell ou o terminal integrado do VS Code.

### 1. Clonar o repositório

Abra o terminal e execute:

```bash
git clone https://github.com/1NLeo/Sistema-de-Controle-de-Campeonato---sem-vetores.git
```

### 2. Acessar o diretório do projeto

```bash
cd Sistema-de-Controle-de-Campeonato---sem-vetores
```

### 3. Compilar o código

O arquivo principal do projeto é `sistema.c`, localizado na raiz do repositório.

**Linux:**

```bash
gcc sistema.c -o sistema
```

**Windows (PowerShell):**

```powershell
gcc sistema.c -o sistema.exe
```

Esses comandos utilizam o GCC para compilar o código-fonte e gerar um arquivo executável.

### 4. Executar o programa

Após a compilação, execute o programa de acordo com seu sistema operacional.

**Linux:**

```bash
./sistema
```

**Windows (PowerShell):**

```powershell
.\sistema.exe
```

O sistema será iniciado diretamente no terminal.

### 5. Utilizar o sistema

Após iniciar o programa:

1. Informe a quantidade de equipes participantes, entre 3 e 10.
2. Informe a quantidade de jogos disputados por equipe, entre 1 e 10.
3. Selecione uma das opções do menu principal.
4. Informe os resultados solicitados e consulte as estatísticas.
5. Selecione a opção 5 para encerrar.

### Instalação do GCC no Linux

Caso esteja utilizando Ubuntu ou distribuições derivadas e ainda não possua o compilador, execute:

```bash
sudo apt update
sudo apt install build-essential git
```

Para verificar a instalação:

```bash
gcc --version
```

No Windows, é necessário ter uma distribuição do GCC, como MinGW-w64, instalada e configurada no PATH.

## 📋 Regras do projeto

De acordo com a proposta acadêmica:

- O campeonato deve possuir entre 3 e 10 equipes.
- Cada equipe deve disputar entre 1 e 10 jogos.
- Todas as equipes devem possuir a mesma quantidade de jogos.
- A soma de vitórias, empates e derrotas deve corresponder à quantidade de jogos definida.
- Os resultados não devem possuir valores negativos.
- Um novo registro deve substituir o resumo anterior.
- As simulações devem ser independentes do registro principal.

O desenvolvimento deve respeitar a restrição de utilizar apenas variáveis simples, sem vetores, matrizes, estruturas ou alocação dinâmica.

## 🎯 Objetivos de aprendizagem

O projeto busca consolidar conhecimentos fundamentais de programação, incluindo:

- Desenvolvimento de algoritmos estruturados.
- Utilização de estruturas condicionais e de repetição.
- Validação de entradas fornecidas pelo usuário.
- Manipulação de contadores e acumuladores.
- Cálculo de estatísticas e classificação de resultados.
- Organização e manutenção de código em equipe.
- Versionamento colaborativo com Git e GitHub.

## 👨‍💻 Desenvolvedores

Projeto acadêmico desenvolvido para a disciplina de **Práticas Profissionais II**.

**Integrantes:**
- Leonardo Maciel Correia
- Luís Felipe Alves Santos

**Professor:** Sidney de Castro Lima

---

*Projeto desenvolvido para fins educacionais, com foco na aplicação prática dos fundamentos da linguagem C.*
