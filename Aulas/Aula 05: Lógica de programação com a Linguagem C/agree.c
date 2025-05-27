#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Solicita um caractere para o usuário
    char c = get_char("você concorda?");

    // Verifica se concordou
    if (c == 'S' || c == 's')

    {
        printf("concordou\n");
    }

    else if (c == 'N' || c == 'n')
    {
        printf("não concordo\n");
    }
}