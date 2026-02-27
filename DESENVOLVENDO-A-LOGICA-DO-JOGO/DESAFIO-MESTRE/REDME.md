# 🃏 Super Trunfo em C — Nível Mestre

Projeto desenvolvido como desafio acadêmico para implementação completa da lógica do jogo **Super Trunfo**, utilizando a linguagem C e aplicando estruturas de decisão, menus dinâmicos e comparações avançadas com múltiplos atributos.

---

## 🎯 Objetivo

Implementar um sistema que permita comparar duas cartas de países com base em **dois atributos escolhidos pelo jogador**, aplicando regras especiais de comparação e determinando o vencedor pela soma total dos atributos.

Este projeto integra conceitos fundamentais de programação estruturada em C, com foco em lógica, validação e organização de código.

---

## 🧠 Conceitos aplicados

* Structs em C
* Entrada e saída de dados
* Operadores ternários
* Switch-case
* Loops (while / do-while)
* Validação de entrada
* Comparações condicionais
* Manipulação de strings
* Organização de fluxo lógico

---

## ⚙️ Funcionalidades

* Cadastro manual de duas cartas de países
* Cálculo automático de:

  * Densidade demográfica
  * PIB per capita
* Escolha interativa de dois atributos para comparação
* Menu dinâmico (não permite repetir atributos)
* Regra especial:

  * **Densidade demográfica → menor valor vence**
  * Demais atributos → maior valor vence
* Soma dos atributos escolhidos
* Tratamento de empate
* Exibição clara dos resultados
* Loop para múltiplas rodadas
* Encerramento com tecla ESC

---

## 📊 Atributos disponíveis

1. População
2. Área (km²)
3. PIB
4. Pontos turísticos
5. Densidade demográfica
6. PIB per capita

---

## 🏆 Regras do jogo

* O jogador escolhe dois atributos diferentes.
* Cada atributo é comparado individualmente.
* Após a comparação, os valores são somados.
* A carta com maior soma vence.
* Se as somas forem iguais → empate.

---

## 🖥️ Como compilar

### Windows (GCC / MinGW)

```bash
gcc super_trunfo.c -o super_trunfo
super_trunfo.exe
```

---

### Linux

```bash
gcc super_trunfo.c -o super_trunfo
./super_trunfo
```

---

## 📂 Estrutura do código

* `struct Carta` → modela os dados do país
* Entrada de dados → cadastro das cartas
* Menu interativo → escolha de atributos
* Switch-case → mapeamento dos atributos
* Cálculo da soma → definição do vencedor
* Loop principal → repetição do jogo

---

## 🛡 Validações implementadas

* Impede seleção de atributos repetidos
* Bloqueia opções fora do intervalo válido
* Tratamento de empate
* Limpeza de buffer de entrada

---

## 📌 Melhorias futuras (opcional)

* Modularização com funções
* Interface em modo texto (UI melhorada)
* Versão com arquivos ou banco de dados
* Modo multiplayer
* Portabilidade sem `conio.h`

---

## 👨‍💻 Autor

**Marcelo Soares Dias**
Estudante de Análise e Desenvolvimento de Sistemas
Foco em desenvolvimento Full Stack e lógica de programação em C.

---

## 📜 Licença

Uso acadêmico e educacional.
