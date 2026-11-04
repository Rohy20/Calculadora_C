# 🧮 CALCULADORA V1.2

<p align="center">
  **Uma calculadora interativa desenvolvida em C, com operações matemáticas básicas e avançadas diretamente pelo terminal.**
</p>

---

## 📌 Sobre o projeto

A Calculadora é um projeto desenvolvido em linguagem C, com foco no aprendizado de programação, modularização e organização de código.

A aplicação possui uma interface interativa no terminal, menus de navegação e um conjunto de operações matemáticas básicas e avançadas.

Na versão **1.2**, foram implementadas melhorias na navegação, um novo menu dedicado às operações avançadas e novas funcionalidades matemáticas.

## ✨ Funcionalidades

### ➕ Operações básicas
- Adição
- Subtração
- Multiplicação
- Divisão

### 🔬 Operações avançadas
- Potenciação
- Raiz quadrada
- Módulo (valor absoluto)
- Inversão
- Porcentagem

### 🖥️ Interface e navegação
- Banner personalizado em Unicode.
- Menu principal interativo.
- Menu exclusivo para operações avançadas.
- Navegação entre os menus.
- Opção para retornar ao menu principal.
- Interface executada diretamente no terminal.

## 🆕 Novidades da versão 1.2

- Implementação de um novo menu para operações avançadas.
- Adição da operação de módulo (valor absoluto).
- Implementação da operação de inversão.
- Adição de operações com porcentagem.
- Melhor organização e navegação entre as funcionalidades.

## 🛠️ Tecnologias utilizadas

- **Linguagem:** C
- **Compilador:** GCC
- **Padrão:** C11
- **Biblioteca matemática:** `math.h`

## 📂 Estrutura do projeto

```text
calculadora/
│
├── include/
│   ├── operations.h
│   └── advanced.h
│
├── src/
│   ├── main.c
│   ├── operations.c
│   └── advanced.c
│
├── Makefile
│
└── README.md
```

## ⚙️ Como executar

### 1. Clone o repositório

```bash
git clone https://github.com/Rohy20/Calculadora_C.git
```

### 2. Entre na pasta

```bash
cd Calculadora_C
```

### 3. Compile o projeto

```bash
make
```

### 4. Execute

```bash
./calc
```

> É necessário ter o GCC e o Make instalados para utilizar o comando de compilação acima.

## 🎯 Objetivo do projeto

Este projeto tem como objetivo aprofundar conhecimentos em linguagem C, explorando conceitos como:

- Modularização de código.
- Criação e utilização de arquivos de cabeçalho (`.h`).
- Separação de responsabilidades.
- Desenvolvimento de funções.
- Estruturas condicionais e de repetição.
- Manipulação de operações matemáticas.
- Organização e manutenção de projetos.

## 🚀 Melhorias futuras

- [ ] Histórico de operações.
- [ ] Aprimoramento da interface do terminal.
- [ ] Tratamento mais completo de entradas inválidas.
- [ ] Implementação de novas operações matemáticas.
- [ ] Melhorias na experiência de navegação.

---
<p align="center">
  Desenvolvido por <strong>Rohy Maia</strong> 💻
  <br>
  **Versão 1.2**
</p>
