#include <stdio.h>
#include <math.h>
#include <cs50.h>

int main()
{
    long n = get_long("Número do Cartão: ");

    //Variáveis
    long original = n;
    int tamanho = 0;
    int somat = 0;
    int posição = 1;

    //calculadora
    while (n > 0)
 {
     int digito = n % 10;
     if (posição % 2 == 0)
     {
    int p = digito * 2;
    somat += (p % 10) + (p / 10);
     }
     else
    {
        somat += digito;
    }
    n = n / 10;
    posição++;
    tamanho++;
}
  long inicio = original;
  while (inicio >= 100)
  {
    inicio /= 10;
  }

  if (somat % 10 !=0)
  {
   printf("INVALID\n");
  }
  else if (tamanho == 15 && (inicio == 34 || inicio == 37))
  {
    printf("AMEX\n");
  }
  else if (tamanho == 16 && (inicio >= 51 && inicio <= 55))
  {
    printf("MASTERCARD\n");
  }
  else if ((tamanho == 13 || tamanho == 16) && (inicio / 10 == 4))
  {
    printf("VISA\n");
  }
  else
  {
    printf("INVALID\n");
  }
}
