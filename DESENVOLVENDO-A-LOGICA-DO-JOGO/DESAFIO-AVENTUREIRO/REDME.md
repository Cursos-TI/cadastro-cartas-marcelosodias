# 🃏 Super Trunfo em C - Desafio Nivel Aventureiro

Projeto desenvolvido em linguagem C que simula o jogo Super Trunfo, permitindo comparar duas cartas de países através de um menu interativo.

Este projeto foi criado como desafio acadêmico para prática de:
- Entrada de dados
- Cálculos derivados
- Switch-case
- Lógica condicional

## 🚀 Funcionalidades
- Cadastro manual de duas cartas
- Leitura de dados
- Cálculo automático:
  - Densidade demográfica
  - PIB per capita
 Menu interativo para escolha do atributo
- Comparação automática entre cartas
- Tratamento de empate
- Validação de opção inválida

---

## 📊 Atributos disponíveis para comparação
| Opção | Atributo | Regra |
|------|---------|------|
| 1 | População | Maior vence |
| 2 | Área | Maior vence |
| 3 | PIB | Maior vence |
| 4 | Pontos turísticos | Maior vence |
| 5 | Densidade demográfica | **Menor vence** |

⚠️ Regra especial: densidade demográfica usa lógica invertida.

---

## 🧠 Estrutura do programa

O sistema utiliza uma struct chamada `Carta` contendo:

```c
typedef struct {
    char pais[50];
    unsigned long int populacao;
    float area_km2;
    float pib;
    int pontos_turisticos;
    float densidade_populacional_km2;
    float pib_per_capita;
} Carta;

---

🧪 Exemplo de execução
Digite o nome do pais:
Brasil
Digite a populacao do pais:
203000000
Digite a area em km2 do pais:
8515767
Digite o PIB do pais:
1800000
Digite o numero de pontos turisticos do pais:
50

=== SUPER TRUNFO ===
1 - Populacao
2 - Area
3 - PIB
4 - Pontos Turisticos
5 - Densidade Demografica
Opcao: 1

=== RESULTADO ===
Brasil: 203000000
Argentina: 45000000
Vencedor: Brasil

---

⚙️ Regras do jogo

O usuário escolhe o atributo pelo menu.

O programa compara automaticamente os valores.

Exibe:

Nome dos países

Valores comparados

Resultado (vitória ou empate)

Caso a opção seja inválida, o sistema avisa.

---

📚 Tecnologias utilizadas

Linguagem C

Biblioteca padrão:

stdio.h

string.h

---

🎯 Objetivo educacional

Este projeto reforça conceitos fundamentais de programação estruturada:

Structs

Entrada e saída de dados

Operadores relacionais

Switch-case

Organização de código



👨‍💻 Autor

Marcelo Soares Dias

Estudante de Análise e Desenvolvimento de Sistemas

GitHub: https://github.com/marcelosodias