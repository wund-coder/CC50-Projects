#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int centavos;
    do
{
        centavos = get_int("Troco devido: ");
    }
    while (centavos < 0);
    int moedas = 0;

    while (centavos >= 25)
    {
     centavos = centavos - 25;
        moedas++;
    }
    while (centavos >= 10)
    {
        centavos = centavos - 10;
     moedas++;
    }
    while (centavos >= 5)
    {
     centavos = centavos - 5;
        moedas++;
    }
    while (centavos >= 1)
    {
        centavos = centavos - 1;
     moedas++;
}
    printf("%i\n", moedas);
}
