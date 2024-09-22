# Projeto: Sistema de Nota Fiscal em C

Este projeto implementa um sistema básico de gerenciamento de notas fiscais utilizando a linguagem de programação C. O sistema permite a criação, inicialização, validação e exibição de notas fiscais, contemplando as seguintes funcionalidades:

- **Estrutura da Nota Fiscal:** Define uma estrutura que armazena informações como número da nota, data de emissão, nome do emitente, nome do destinatário, itens e valor total.
  
- **Inicialização dos Dados:** A função `iniciar_nota` é responsável por inicializar uma nova nota fiscal com valores padrões, garantindo que todos os campos comecem com valores coerentes.

- **Validação:** O sistema realiza validações básicas, como a verificação de um número de nota fiscal válido (sem zeros à esquerda), formatação correta da data (dd/mm/aaaa), e a verificação de que o valor total não seja negativo.

- **Interação com o Usuário:** Permite a inserção dos dados de uma nota fiscal pelo usuário, garantindo que as entradas sejam válidas antes de prosseguir.
