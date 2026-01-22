# CC50 - Credit

(NOTA:Esse programa foi criado com intenções puramente educativas, visando aprimorar minha experiência com a linguagem em C, não se deve ser utilizado com números reais de terceiros!)

Nesse programa, expandi meus aprendizados, utilizando `Long` e a `%`, embora ainda um pouco confusos para mim, acredito que foi um bom avanço!
O Credit vai ser um dregau acima do Cash, neste programa a intenção será identificar o cartão dentre esses:

### Moedas Disponíveis:
* AMEX
* MASTERCARD
* VISA
* INVALID

Vamos multiplicar cada segundo dígito por 2, começando pelo penúltimo dígito e indo em direção ao primeiro. Somando os dígitos desses produtos (se o resultado for 15, vamos somar 1 + 5 = 6). 
Vamos somar o resultado aos dígitos que não foram multiplicados por 2. Se o total terminar em 0 `(ou seja, total % 10 == 0)`, o número é válido

### Abaixo a regra de identificação por bandeira!
```text
Bandeira                  Tamanho (Dígitos)    Começa com...
American Express (AMEX)   15                   34 ou 37
MasterCard                16                   51, 52, 53, 54 ou 55
Visa                      13 ou 16             4

### Exemplo de Execução:

Se o usuário inserir um número válido de 16 dígitos começando com 51, o programa retornará:
Número do Cartão:5100000000000000
MASTERCARD

Caso a soma de verificação falhe ou o prefixo não corresponda a nenhuma bandeira:
Número do Cartão:123456789
INVALID

### Como executar:

make Credit

Execute o programa: ./Credit
