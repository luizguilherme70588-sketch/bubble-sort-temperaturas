# Sistema de Controle de Temperaturas com Bubble Sort

**Instituição:** UDF — Centro Universitário do Distrito Federal

**Disciplina:** Algoritmos e Pensamento Computacional

**Professora:** Profa. Karla R. Sartin

**Integrantes:**
- [Nome completo do integrante 1]
- [Nome completo do integrante 2]
- [Nome completo do integrante 3]
- [Nome completo do integrante 4]

## 1. Contextualização

A medição de temperaturas é importante em diversas situações do cotidiano, como o acompanhamento das condições climáticas, o controle de ambientes e o monitoramento de equipamentos.

Entretanto, quando várias temperaturas são registradas, pode ser necessário organizar esses valores para facilitar a análise e a identificação das menores e maiores temperaturas.

Este projeto apresenta um programa desenvolvido em linguagem C que recebe dez temperaturas e utiliza o algoritmo Bubble Sort para organizar os valores em ordem crescente.

## 2. Objetivo

Desenvolver uma aplicação em linguagem C que utilize arrays, estruturas de repetição, estruturas condicionais e o algoritmo Bubble Sort para ordenar dez temperaturas em ordem crescente.

## 3. Funcionamento do programa

O programa solicita ao usuário dez valores de temperatura em graus Celsius.

Inicialmente, os valores são armazenados em um array e exibidos na ordem em que foram digitados.

Em seguida, o algoritmo Bubble Sort compara os elementos adjacentes do array. Quando um elemento é maior que o próximo, os dois valores trocam de posição utilizando uma variável auxiliar.

Esse processo é repetido até que todas as temperaturas estejam organizadas em ordem crescente.

Por fim, o programa exibe os valores ordenados no terminal.

## 4. Algoritmo Bubble Sort

O Bubble Sort é um algoritmo de ordenação que realiza comparações entre elementos vizinhos de um array.

Neste projeto, a condição utilizada é:

    temperaturas[j] > temperaturas[j + 1]

Quando essa condição é verdadeira, os elementos são trocados.

O algoritmo utiliza dois laços de repetição: um para controlar as passagens pelo array e outro para comparar os elementos adjacentes.

A ordenação implementada é crescente, da menor para a maior temperatura.

## 5. Tecnologias utilizadas

- Linguagem de programação C
- Compilador GCC ou equivalente
- Git para controle de versão
- GitHub para armazenamento e compartilhamento do projeto
- OnlineGDB para testes, caso utilizado

## 6. Como compilar e executar

É necessário possuir um compilador de linguagem C instalado.

Para compilar o programa com GCC, utilize:

    gcc temperaturas.c -o temperaturas

No Linux, execute com:

    ./temperaturas

No Windows, execute com:

    temperaturas.exe

O programa também pode ser testado em um compilador online compatível com a linguagem C.

## 7. Exemplo de entrada

As dez temperaturas informadas pelo usuário:

    28, 19, 35, 22, 16, 30, 25, 18, 33, 21

## 8. Exemplo de saída

Temperaturas em ordem crescente:

    16.00 graus Celsius
    18.00 graus Celsius
    19.00 graus Celsius
    21.00 graus Celsius
    22.00 graus Celsius
    25.00 graus Celsius
    28.00 graus Celsius
    30.00 graus Celsius
    33.00 graus Celsius
    35.00 graus Celsius

## 9. Considerações finais

O desenvolvimento deste projeto permite aplicar conceitos fundamentais de lógica de programação, como arrays, variáveis, estruturas condicionais e laços de repetição.

A implementação do Bubble Sort demonstra como os elementos de um conjunto de dados podem ser comparados e trocados para obter uma ordenação crescente.

A aplicação também mostra como um algoritmo de ordenação pode ser utilizado em uma situação prática do cotidiano, facilitando a organização e a análise de informações.

## 10. Histórico de desenvolvimento

O desenvolvimento do projeto será registrado no GitHub por meio de commits que representem alterações reais no código, nos testes e na documentação.
